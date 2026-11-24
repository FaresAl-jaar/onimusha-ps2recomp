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

// Function: sub_003C7B90
// Address: 0x3c7b90 - 0x3c7c34
void sub_003C7B90_0x3c7b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7B90_0x3c7b90");
#endif

    switch (ctx->pc) {
        case 0x3c7bd0u: goto label_3c7bd0;
        case 0x3c7be8u: goto label_3c7be8;
        default: break;
    }

    ctx->pc = 0x3c7b90u;

    // 0x3c7b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c7b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c7b94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c7b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c7b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c7ba0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c7ba0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c7ba4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c7ba8: 0x8f838cb8  lw          $v1, -0x7348($gp)
    ctx->pc = 0x3c7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x3c7bac: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C7BACu;
    {
        const bool branch_taken_0x3c7bac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3C7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BACu;
        // 0x3c7bb0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7bac) {
            ctx->pc = 0x3C7C18u;
            goto label_3c7c18;
        }
    }
    ctx->pc = 0x3C7BB4u;
    // 0x3c7bb4: 0x93838cbc  lbu         $v1, -0x7344($gp)
    ctx->pc = 0x3c7bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
    // 0x3c7bb8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C7BB8u;
    {
        const bool branch_taken_0x3c7bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7bb8) {
            ctx->pc = 0x3C7C18u;
            goto label_3c7c18;
        }
    }
    ctx->pc = 0x3C7BC0u;
    // 0x3c7bc0: 0x8f918cb0  lw          $s1, -0x7350($gp)
    ctx->pc = 0x3c7bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x3c7bc4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C7BC4u;
    {
        const bool branch_taken_0x3c7bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7bc4) {
            ctx->pc = 0x3C7C08u;
            goto label_3c7c08;
        }
    }
    ctx->pc = 0x3C7BCCu;
    // 0x3c7bcc: 0x0  nop
    ctx->pc = 0x3c7bccu;
    // NOP
label_3c7bd0:
    // 0x3c7bd0: 0x8e3005bc  lw          $s0, 0x5BC($s1)
    ctx->pc = 0x3c7bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x3c7bd4: 0xc7948cc0  lwc1        $f20, -0x7340($gp)
    ctx->pc = 0x3c7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c7bd8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3c7bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3c7bdc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3c7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c7be0: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3C7BE0u;
    SET_GPR_U32(ctx, 31, 0x3C7BE8u);
    ctx->pc = 0x3C7BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BE0u;
    // 0x3c7be4: 0x24a50730  addiu       $a1, $a1, 0x730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3C7BE0u, 0x3C7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BE8u;
label_3c7be8:
    // 0x3c7be8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x3c7be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3c7bec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c7becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7bf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7BF0u;
    {
        const bool branch_taken_0x3c7bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BF0u;
        // 0x3c7bf4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7bf0) {
            ctx->pc = 0x3C7C00u;
            goto label_3c7c00;
        }
    }
    ctx->pc = 0x3C7BF8u;
    // 0x3c7bf8: 0xa223053a  sb          $v1, 0x53A($s1)
    ctx->pc = 0x3c7bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c7bfc: 0x0  nop
    ctx->pc = 0x3c7bfcu;
    // NOP
label_3c7c00:
    // 0x3c7c00: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3C7C00u;
    {
        const bool branch_taken_0x3c7c00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C00u;
        // 0x3c7c04: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c00) {
            ctx->pc = 0x3C7BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7bd0;
        }
    }
    ctx->pc = 0x3C7C08u;
label_3c7c08:
    // 0x3c7c08: 0xc7808cc0  lwc1        $f0, -0x7340($gp)
    ctx->pc = 0x3c7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7c0c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3c7c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3c7c10: 0xe7808cc0  swc1        $f0, -0x7340($gp)
    ctx->pc = 0x3c7c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), bits); }
    // 0x3c7c14: 0x0  nop
    ctx->pc = 0x3c7c14u;
    // NOP
label_3c7c18:
    // 0x3c7c18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c7c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7c1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c7c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7c20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c7c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c7c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7c28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c7c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C2Cu;
        // 0x3c7c30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7C34u;
}
