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

// Function: sub_0013EB90
// Address: 0x13eb90 - 0x13ec40
void sub_0013EB90_0x13eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EB90_0x13eb90");
#endif

    switch (ctx->pc) {
        case 0x13ebb0u: goto label_13ebb0;
        default: break;
    }

    ctx->pc = 0x13eb90u;

    // 0x13eb90: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13eb94: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x13EB94u;
    {
        const bool branch_taken_0x13eb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb94) {
            ctx->pc = 0x13EC38u;
            goto label_13ec38;
        }
    }
    ctx->pc = 0x13EB9Cu;
    // 0x13eb9c: 0x9c660010  lwu         $a2, 0x10($v1)
    ctx->pc = 0x13eb9cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13eba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13eba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba4: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x13eba4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13eba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ebac: 0x0  nop
    ctx->pc = 0x13ebacu;
    // NOP
label_13ebb0:
    // 0x13ebb0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x13ebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x13ebb4: 0x641814  dsllv       $v1, $a0, $v1
    ctx->pc = 0x13ebb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x13ebb8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x13ebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13ebbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13EBBCu;
    {
        const bool branch_taken_0x13ebbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBBCu;
        // 0x13ebc0: 0xe81821  addu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebbc) {
            ctx->pc = 0x13EBC8u;
            goto label_13ebc8;
        }
    }
    ctx->pc = 0x13EBC4u;
    // 0x13ebc4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x13ebc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_13ebc8:
    // 0x13ebc8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13ebcc: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13ebd0: 0x29030007  slti        $v1, $t0, 0x7
    ctx->pc = 0x13ebd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x13ebd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13EBD4u;
    {
        const bool branch_taken_0x13ebd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ebd4) {
            ctx->pc = 0x13EBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ebb0;
        }
    }
    ctx->pc = 0x13EBDCu;
    // 0x13ebdc: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x13EBDCu;
    {
        const bool branch_taken_0x13ebdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ebdc) {
            ctx->pc = 0x13EBE8u;
            goto label_13ebe8;
        }
    }
    ctx->pc = 0x13EBE4u;
    // 0x13ebe4: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x13ebe4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_13ebe8:
    // 0x13ebe8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x13ebec: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13ebf0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ebf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13ebf8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ebfc: 0x24636710  addiu       $v1, $v1, 0x6710
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26384));
    // 0x13ec00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13ec04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ec08: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x13ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ec0c: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x13ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ec10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ec14: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x13ec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x13ec18: 0xc46100c4  lwc1        $f1, 0xC4($v1)
    ctx->pc = 0x13ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ec1c: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x13ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ec20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13ec20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13ec24: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x13ec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x13ec28: 0xc46100c8  lwc1        $f1, 0xC8($v1)
    ctx->pc = 0x13ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ec2c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x13ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ec30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13ec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13ec34: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x13ec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_13ec38:
    // 0x13ec38: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC40u;
}
