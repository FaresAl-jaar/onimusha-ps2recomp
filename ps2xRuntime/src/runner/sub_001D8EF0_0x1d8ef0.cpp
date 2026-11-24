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

// Function: sub_001D8EF0
// Address: 0x1d8ef0 - 0x1d8fa8
void sub_001D8EF0_0x1d8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8EF0_0x1d8ef0");
#endif

    switch (ctx->pc) {
        case 0x1d8f08u: goto label_1d8f08;
        default: break;
    }

    ctx->pc = 0x1d8ef0u;

    // 0x1d8ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f00: 0xc0763ec  jal         func_1D8FB0
    ctx->pc = 0x1D8F00u;
    SET_GPR_U32(ctx, 31, 0x1D8F08u);
    ctx->pc = 0x1D8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F00u;
    // 0x1d8f04: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FB0u, 0x1D8F00u, 0x1D8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F08u;
label_1d8f08:
    // 0x1d8f08: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d8f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8f0c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x1d8f10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d8f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8f14: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1d8f18: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d8f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d8f1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d8f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8f20: 0x0  nop
    ctx->pc = 0x1d8f20u;
    // NOP
    // 0x1d8f24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d8f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d8f28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d8f28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d8f2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d8f30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d8f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8f34: 0x0  nop
    ctx->pc = 0x1d8f34u;
    // NOP
    // 0x1d8f38: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d8f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d8f3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d8f40: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1d8f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1d8f44: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1d8f44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d8f48: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1d8f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8f4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d8f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d8f50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d8f50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d8f54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d8f58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d8f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8f5c: 0x0  nop
    ctx->pc = 0x1d8f5cu;
    // NOP
    // 0x1d8f60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d8f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d8f64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d8f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d8f68: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1d8f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1d8f6c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1d8f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d8f70: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d8f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8f74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d8f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d8f78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d8f78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d8f7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d8f80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d8f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8f84: 0x0  nop
    ctx->pc = 0x1d8f84u;
    // NOP
    // 0x1d8f88: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d8f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d8f8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d8f90: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1d8f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1d8f94: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1d8f94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d8f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FA0u;
        // 0x1d8fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FA8u;
}
