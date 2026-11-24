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

// Function: sub_0025D120
// Address: 0x25d120 - 0x25d1f4
void sub_0025D120_0x25d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D120_0x25d120");
#endif

    switch (ctx->pc) {
        case 0x25d160u: goto label_25d160;
        case 0x25d178u: goto label_25d178;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a8u: goto label_25d1a8;
        default: break;
    }

    ctx->pc = 0x25d120u;

    // 0x25d120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25d124: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x25d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x25d128: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d12c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x25d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x25d130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25d134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d140: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25d140u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d148: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25d148u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25d14c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d150: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x25d150u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x25d154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d158: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25D158u;
    SET_GPR_U32(ctx, 31, 0x25D160u);
    ctx->pc = 0x25D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D158u;
    // 0x25d15c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25D158u, 0x25D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D160u;
label_25d160:
    // 0x25d160: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d164: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25d164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d16c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25d16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d170: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x25D170u;
    SET_GPR_U32(ctx, 31, 0x25D178u);
    ctx->pc = 0x25D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D170u;
    // 0x25d174: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x25D170u, 0x25D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D178u;
label_25d178:
    // 0x25d178: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25d178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25d17c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25d180: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25d180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25d184: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25D184u;
    SET_GPR_U32(ctx, 31, 0x25D18Cu);
    ctx->pc = 0x25D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D184u;
    // 0x25d188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25D184u, 0x25D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D18Cu;
label_25d18c:
    // 0x25d18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d190: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d194: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x25D194u;
    SET_GPR_U32(ctx, 31, 0x25D19Cu);
    ctx->pc = 0x25D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D194u;
    // 0x25d198: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x25D194u, 0x25D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D19Cu;
label_25d19c:
    // 0x25d19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1a0: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25D1A0u;
    SET_GPR_U32(ctx, 31, 0x25D1A8u);
    ctx->pc = 0x25D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1A0u;
    // 0x25d1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25D1A0u, 0x25D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1A8u;
label_25d1a8:
    // 0x25d1a8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x25d1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x25d1ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25d1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d1b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25D1B0u;
    {
        const bool branch_taken_0x25d1b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d1b0) {
            ctx->pc = 0x25D1D0u;
            goto label_25d1d0;
        }
    }
    ctx->pc = 0x25D1B8u;
    // 0x25d1b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25d1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d1bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d1c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25d1c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x25d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d1c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D1C8u;
    {
        const bool branch_taken_0x25d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1C8u;
        // 0x25d1cc: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1c8) {
            ctx->pc = 0x25D1D8u;
            goto label_25d1d8;
        }
    }
    ctx->pc = 0x25D1D0u;
label_25d1d0:
    // 0x25d1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1d4: 0x0  nop
    ctx->pc = 0x25d1d4u;
    // NOP
label_25d1d8:
    // 0x25d1d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d1dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d1e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d1e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1ECu;
        // 0x25d1f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D1F4u;
}
