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

// Function: sub_0025A2E0
// Address: 0x25a2e0 - 0x25a398
void sub_0025A2E0_0x25a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A2E0_0x25a2e0");
#endif

    switch (ctx->pc) {
        case 0x25a2f8u: goto label_25a2f8;
        default: break;
    }

    ctx->pc = 0x25a2e0u;

    // 0x25a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2f0: 0xc09688c  jal         func_25A230
    ctx->pc = 0x25A2F0u;
    SET_GPR_U32(ctx, 31, 0x25A2F8u);
    ctx->pc = 0x25A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2F0u;
    // 0x25a2f4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A230u, 0x25A2F0u, 0x25A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2F8u;
label_25a2f8:
    // 0x25a2f8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x25a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2fc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x25a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x25a300: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x25a300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25a304: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x25a304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x25a308: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x25a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x25a30c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25a30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a310: 0x0  nop
    ctx->pc = 0x25a310u;
    // NOP
    // 0x25a314: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25a314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25a318: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25a318u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25a31c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25a31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25a320: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25a320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25a324: 0x0  nop
    ctx->pc = 0x25a324u;
    // NOP
    // 0x25a328: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x25a32c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25a32cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x25a330: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x25a330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x25a334: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x25a334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a338: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x25a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a33c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25a33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25a340: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25a340u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25a344: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25a344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25a348: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25a348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25a34c: 0x0  nop
    ctx->pc = 0x25a34cu;
    // NOP
    // 0x25a350: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x25a354: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25a354u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x25a358: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x25a358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x25a35c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x25a35cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a360: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x25a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a364: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25a364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25a368: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25a368u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25a36c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25a36cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25a370: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25a370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25a374: 0x0  nop
    ctx->pc = 0x25a374u;
    // NOP
    // 0x25a378: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25a378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x25a37c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25a37cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x25a380: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x25a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x25a384: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x25a384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a390: 0x3e00008  jr          $ra
    ctx->pc = 0x25A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A390u;
        // 0x25a394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A398u;
}
