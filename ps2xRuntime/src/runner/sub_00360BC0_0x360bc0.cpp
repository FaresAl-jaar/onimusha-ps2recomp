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

// Function: sub_00360BC0
// Address: 0x360bc0 - 0x360cc8
void sub_00360BC0_0x360bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360BC0_0x360bc0");
#endif

    ctx->pc = 0x360bc0u;

    // 0x360bc0: 0x84831fb4  lh          $v1, 0x1FB4($a0)
    ctx->pc = 0x360bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x360bc4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x360bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x360bc8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x360BC8u;
    {
        const bool branch_taken_0x360bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360bc8) {
            ctx->pc = 0x360C08u;
            goto label_360c08;
        }
    }
    ctx->pc = 0x360BD0u;
    // 0x360bd0: 0x8c831fb8  lw          $v1, 0x1FB8($a0)
    ctx->pc = 0x360bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8120)));
    // 0x360bd4: 0xc4801f98  lwc1        $f0, 0x1F98($a0)
    ctx->pc = 0x360bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360bd8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x360bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360bdc: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x360bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x360be0: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x360be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x360be4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x360be4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360bec: 0x0  nop
    ctx->pc = 0x360becu;
    // NOP
    // 0x360bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360bf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360bf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360bf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360bfc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x360c00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x360C00u;
    {
        const bool branch_taken_0x360c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C00u;
        // 0x360c04: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c00) {
            ctx->pc = 0x360C40u;
            goto label_360c40;
        }
    }
    ctx->pc = 0x360C08u;
label_360c08:
    // 0x360c08: 0x8c831fb8  lw          $v1, 0x1FB8($a0)
    ctx->pc = 0x360c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8120)));
    // 0x360c0c: 0xc4801f98  lwc1        $f0, 0x1F98($a0)
    ctx->pc = 0x360c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360c10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360c14: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x360c14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x360c18: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x360c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x360c1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x360c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360c24: 0x0  nop
    ctx->pc = 0x360c24u;
    // NOP
    // 0x360c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360c2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360c30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360c34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x360c38: 0x0  nop
    ctx->pc = 0x360c38u;
    // NOP
    // 0x360c3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x360c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_360c40:
    // 0x360c40: 0x84831fb4  lh          $v1, 0x1FB4($a0)
    ctx->pc = 0x360c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x360c44: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x360c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x360c48: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x360C48u;
    {
        const bool branch_taken_0x360c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c48) {
            ctx->pc = 0x360C88u;
            goto label_360c88;
        }
    }
    ctx->pc = 0x360C50u;
    // 0x360c50: 0x8c831fb8  lw          $v1, 0x1FB8($a0)
    ctx->pc = 0x360c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8120)));
    // 0x360c54: 0xc4801f9c  lwc1        $f0, 0x1F9C($a0)
    ctx->pc = 0x360c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360c58: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x360c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360c5c: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x360c5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x360c60: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x360c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x360c64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x360c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360c6c: 0x0  nop
    ctx->pc = 0x360c6cu;
    // NOP
    // 0x360c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360c74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360c78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360c78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360c7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x360c80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x360C80u;
    {
        const bool branch_taken_0x360c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C80u;
        // 0x360c84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c80) {
            ctx->pc = 0x360CC0u;
            goto label_360cc0;
        }
    }
    ctx->pc = 0x360C88u;
label_360c88:
    // 0x360c88: 0x8c831fb8  lw          $v1, 0x1FB8($a0)
    ctx->pc = 0x360c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8120)));
    // 0x360c8c: 0xc4801f9c  lwc1        $f0, 0x1F9C($a0)
    ctx->pc = 0x360c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360c90: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x360c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360c94: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x360c94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x360c98: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x360c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x360c9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x360c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360ca4: 0x0  nop
    ctx->pc = 0x360ca4u;
    // NOP
    // 0x360ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360cb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360cb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360cb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x360cb8: 0x0  nop
    ctx->pc = 0x360cb8u;
    // NOP
    // 0x360cbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x360cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_360cc0:
    // 0x360cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x360CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360CC8u;
}
