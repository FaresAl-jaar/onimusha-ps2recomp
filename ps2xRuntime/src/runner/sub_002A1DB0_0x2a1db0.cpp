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

// Function: sub_002A1DB0
// Address: 0x2a1db0 - 0x2a1e80
void sub_002A1DB0_0x2a1db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1DB0_0x2a1db0");
#endif

    switch (ctx->pc) {
        case 0x2a1df0u: goto label_2a1df0;
        case 0x2a1e50u: goto label_2a1e50;
        default: break;
    }

    ctx->pc = 0x2a1db0u;

    // 0x2a1db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a1db4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1db8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a1dbc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2a1dc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a1dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a1dc4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1dc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a1dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1dd0: 0xc434f9a8  lwc1        $f20, -0x658($at)
    ctx->pc = 0x2a1dd0u;
    { uint32_t bits = FAST_READ32(0x6AF9A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a1dd4: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x2a1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2a1dd8: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x2a1dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x2a1ddc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1de0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1de4: 0x8c23f9a0  lw          $v1, -0x660($at)
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6AF9A0u));
    // 0x2a1de8: 0xc041442  jal         func_105108
    ctx->pc = 0x2A1DE8u;
    SET_GPR_U32(ctx, 31, 0x2A1DF0u);
    ctx->pc = 0x2A1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1DE8u;
    // 0x2a1dec: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2A1DE8u, 0x2A1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DF0u;
label_2a1df0:
    // 0x2a1df0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2a1df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1df4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a1df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a1df8: 0x0  nop
    ctx->pc = 0x2a1df8u;
    // NOP
    // 0x2a1dfc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2a1dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1e00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1E00u;
    {
        const bool branch_taken_0x2a1e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E00u;
        // 0x2a1e04: 0x24030ff0  addiu       $v1, $zero, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e00) {
            ctx->pc = 0x2A1E10u;
            goto label_2a1e10;
        }
    }
    ctx->pc = 0x2A1E08u;
    // 0x2a1e08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1E08u;
    {
        const bool branch_taken_0x2a1e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e08) {
            ctx->pc = 0x2A1E48u;
            goto label_2a1e48;
        }
    }
    ctx->pc = 0x2A1E10u;
label_2a1e10:
    // 0x2a1e10: 0x3c034980  lui         $v1, 0x4980
    ctx->pc = 0x2a1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18816 << 16));
    // 0x2a1e14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1e18: 0x0  nop
    ctx->pc = 0x2a1e18u;
    // NOP
    // 0x2a1e1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a1e1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2a1e20: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2a1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2a1e24: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a1e24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a1e28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a1e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a1e2c: 0x4603a528  max.s       $f20, $f20, $f3
    ctx->pc = 0x2a1e2cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[3]);
    // 0x2a1e30: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x2a1e30u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
    // 0x2a1e34: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2a1e38: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2a1e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a1e3c: 0x0  nop
    ctx->pc = 0x2a1e3cu;
    // NOP
    // 0x2a1e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1e44: 0x0  nop
    ctx->pc = 0x2a1e44u;
    // NOP
label_2a1e48:
    // 0x2a1e48: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2a1e4c: 0x96040068  lhu         $a0, 0x68($s0)
    ctx->pc = 0x2a1e4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_2a1e50:
    // 0x2a1e50: 0xaca3016c  sw          $v1, 0x16C($a1)
    ctx->pc = 0x2a1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 364), GPR_U32(ctx, 3));
    // 0x2a1e54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a1e58: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x2a1e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x2a1e5c: 0x0  nop
    ctx->pc = 0x2a1e5cu;
    // NOP
    // 0x2a1e60: 0x0  nop
    ctx->pc = 0x2a1e60u;
    // NOP
    // 0x2a1e64: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1E64u;
    {
        const bool branch_taken_0x2a1e64 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2a1e64) {
            ctx->pc = 0x2A1E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1e50;
        }
    }
    ctx->pc = 0x2A1E6Cu;
    // 0x2a1e6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a1e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1e70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a1e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a1e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E78u;
        // 0x2a1e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1E80u;
}
