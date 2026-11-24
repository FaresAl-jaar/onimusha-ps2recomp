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

// Function: sub_003AEBA0
// Address: 0x3aeba0 - 0x3aec2c
void sub_003AEBA0_0x3aeba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEBA0_0x3aeba0");
#endif

    switch (ctx->pc) {
        case 0x3aebb4u: goto label_3aebb4;
        default: break;
    }

    ctx->pc = 0x3aeba0u;

    // 0x3aeba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aeba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aeba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aeba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aeba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aeba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aebac: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3AEBACu;
    SET_GPR_U32(ctx, 31, 0x3AEBB4u);
    ctx->pc = 0x3AEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEBACu;
    // 0x3aebb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3AEBACu, 0x3AEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEBB4u;
label_3aebb4:
    // 0x3aebb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3aebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3aebb8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3aebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3aebbc: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3aebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x3aebc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3aebc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3aebc4: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x3aebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x3aebc8: 0x24a5f38c  addiu       $a1, $a1, -0xC74
    ctx->pc = 0x3aebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964108));
    // 0x3aebcc: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3aebccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aebd0: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x3aebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aebd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3aebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3aebd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aebdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3aebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3aebe0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3aebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3aebe4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3aebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aebe8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3aebe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3aebec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3aebecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aebf0: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x3aebf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x3aebf4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3aebf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aebf8: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x3aebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aebfc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3aebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3aec00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3aec04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3aec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3aec08: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3aec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3aec0c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3aec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aec10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3aec10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3aec14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3aec14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aec18: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x3aec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x3aec1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aec20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aec20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aec24: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC24u;
        // 0x3aec28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC2Cu;
}
