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

// Function: sub_002E3100
// Address: 0x2e3100 - 0x2e31e8
void sub_002E3100_0x2e3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3100_0x2e3100");
#endif

    switch (ctx->pc) {
        case 0x2e3124u: goto label_2e3124;
        case 0x2e3130u: goto label_2e3130;
        case 0x2e3154u: goto label_2e3154;
        case 0x2e3168u: goto label_2e3168;
        case 0x2e3194u: goto label_2e3194;
        case 0x2e31a4u: goto label_2e31a4;
        default: break;
    }

    ctx->pc = 0x2e3100u;

    // 0x2e3100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e310c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3114: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e3114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e3118: 0xc48c0024  lwc1        $f12, 0x24($a0)
    ctx->pc = 0x2e3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e311c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2E311Cu;
    SET_GPR_U32(ctx, 31, 0x2E3124u);
    ctx->pc = 0x2E3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E311Cu;
    // 0x2e3120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2E311Cu, 0x2E3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3124u;
label_2e3124:
    // 0x2e3124: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2e3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3128: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2E3128u;
    SET_GPR_U32(ctx, 31, 0x2E3130u);
    ctx->pc = 0x2E312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3128u;
    // 0x2e312c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2E3128u, 0x2E3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3130u;
label_2e3130:
    // 0x2e3130: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e3130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e3134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3138: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2e3138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2e313c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3140: 0x0  nop
    ctx->pc = 0x2e3140u;
    // NOP
    // 0x2e3144: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2e3144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2e3148: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2e3148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2e314c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2E314Cu;
    SET_GPR_U32(ctx, 31, 0x2E3154u);
    ctx->pc = 0x2E3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E314Cu;
    // 0x2e3150: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2E314Cu, 0x2E3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3154u;
label_2e3154:
    // 0x2e3154: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e3154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e3158: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2e3158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2e315c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2e315cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2e3160: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2E3160u;
    SET_GPR_U32(ctx, 31, 0x2E3168u);
    ctx->pc = 0x2E3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3160u;
    // 0x2e3164: 0xc62c002c  lwc1        $f12, 0x2C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2E3160u, 0x2E3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3168u;
label_2e3168:
    // 0x2e3168: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e3168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e316c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e3170: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e3170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3174: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3178: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2e3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e317c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e317cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e3180: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2e3180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2e3184: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2e3184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3188: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e3188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e318c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E318Cu;
    SET_GPR_U32(ctx, 31, 0x2E3194u);
    ctx->pc = 0x2E3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E318Cu;
    // 0x2e3190: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E318Cu, 0x2E3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3194u;
label_2e3194:
    // 0x2e3194: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3194u;
    {
        const bool branch_taken_0x2e3194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3194) {
            ctx->pc = 0x2E31D0u;
            goto label_2e31d0;
        }
    }
    ctx->pc = 0x2E319Cu;
    // 0x2e319c: 0xc04d4c0  jal         func_135300
    ctx->pc = 0x2E319Cu;
    SET_GPR_U32(ctx, 31, 0x2E31A4u);
    ctx->pc = 0x2E31A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E319Cu;
    // 0x2e31a0: 0xc6340038  lwc1        $f20, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135300u, 0x2E319Cu, 0x2E31A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31A4u;
label_2e31a4:
    // 0x2e31a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e31a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e31a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e31ac: 0x4600a0c2  mul.s       $f3, $f20, $f0
    ctx->pc = 0x2e31acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e31b0: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x2e31b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x2e31b4: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2e31b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e31b8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2e31b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2e31bc: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2e31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e31c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e31c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e31c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e31c8: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2e31c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2e31cc: 0x0  nop
    ctx->pc = 0x2e31ccu;
    // NOP
label_2e31d0:
    // 0x2e31d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e31d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e31d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e31d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e31d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e31dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e31dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e31e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31E0u;
        // 0x2e31e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31E8u;
}
