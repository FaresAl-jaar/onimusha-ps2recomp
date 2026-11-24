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

// Function: sub_003C6C60
// Address: 0x3c6c60 - 0x3c6d18
void sub_003C6C60_0x3c6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6C60_0x3c6c60");
#endif

    switch (ctx->pc) {
        case 0x3c6c88u: goto label_3c6c88;
        case 0x3c6cf0u: goto label_3c6cf0;
        default: break;
    }

    ctx->pc = 0x3c6c60u;

    // 0x3c6c60: 0x8c850568  lw          $a1, 0x568($a0)
    ctx->pc = 0x3c6c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c6c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c6c68: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x3c6c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c6c6c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x3C6C6Cu;
    {
        const bool branch_taken_0x3c6c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C6Cu;
        // 0x3c6c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c6c) {
            ctx->pc = 0x3C6D10u;
            goto label_3c6d10;
        }
    }
    ctx->pc = 0x3C6C74u;
    // 0x3c6c74: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3c6c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c6c78: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C6C78u;
    {
        const bool branch_taken_0x3c6c78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C78u;
        // 0x3c6c7c: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c78) {
            ctx->pc = 0x3C6CD8u;
            goto label_3c6cd8;
        }
    }
    ctx->pc = 0x3C6C80u;
    // 0x3c6c80: 0x8c830574  lw          $v1, 0x574($a0)
    ctx->pc = 0x3c6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6c84: 0x0  nop
    ctx->pc = 0x3c6c84u;
    // NOP
label_3c6c88:
    // 0x3c6c88: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3c6c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3c6c8c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x3c6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6c90: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3c6c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c6c94: 0xc4670074  lwc1        $f7, 0x74($v1)
    ctx->pc = 0x3c6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c6c98: 0xc46600b4  lwc1        $f6, 0xB4($v1)
    ctx->pc = 0x3c6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c6c9c: 0xc46500f4  lwc1        $f5, 0xF4($v1)
    ctx->pc = 0x3c6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c6ca0: 0xc4640134  lwc1        $f4, 0x134($v1)
    ctx->pc = 0x3c6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c6ca4: 0xc4630174  lwc1        $f3, 0x174($v1)
    ctx->pc = 0x3c6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c6ca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6cac: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c6cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c6cb0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3c6cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3c6cb4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c6cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c6cb8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c6cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c6cbc: 0xc46201b4  lwc1        $f2, 0x1B4($v1)
    ctx->pc = 0x3c6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c6cc0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c6cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c6cc4: 0xc46101f4  lwc1        $f1, 0x1F4($v1)
    ctx->pc = 0x3c6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6cc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c6cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c6ccc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6cd0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C6CD0u;
    {
        const bool branch_taken_0x3c6cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CD0u;
        // 0x3c6cd4: 0x24630200  addiu       $v1, $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6cd0) {
            ctx->pc = 0x3C6C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6c88;
        }
    }
    ctx->pc = 0x3C6CD8u;
label_3c6cd8:
    // 0x3c6cd8: 0xe5082b  sltu        $at, $a3, $a1
    ctx->pc = 0x3c6cd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c6cdc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3C6CDCu;
    {
        const bool branch_taken_0x3c6cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6cdc) {
            ctx->pc = 0x3C6D10u;
            goto label_3c6d10;
        }
    }
    ctx->pc = 0x3C6CE4u;
    // 0x3c6ce4: 0x8c820574  lw          $v0, 0x574($a0)
    ctx->pc = 0x3c6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6ce8: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x3c6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x3c6cec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3c6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c6cf0:
    // 0x3c6cf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c6cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c6cf4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x3c6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6cf8: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x3c6cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3c6cfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6d00: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3c6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3c6d04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C6D04u;
    {
        const bool branch_taken_0x3c6d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6d04) {
            ctx->pc = 0x3C6CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6cf0;
        }
    }
    ctx->pc = 0x3C6D0Cu;
    // 0x3c6d0c: 0x0  nop
    ctx->pc = 0x3c6d0cu;
    // NOP
label_3c6d10:
    // 0x3c6d10: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D10u;
        // 0x3c6d14: 0xe480056c  swc1        $f0, 0x56C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6D18u;
}
