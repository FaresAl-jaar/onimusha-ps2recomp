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

// Function: sub_003208A0
// Address: 0x3208a0 - 0x32093c
void sub_003208A0_0x3208a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208A0_0x3208a0");
#endif

    switch (ctx->pc) {
        case 0x320914u: goto label_320914;
        case 0x320928u: goto label_320928;
        default: break;
    }

    ctx->pc = 0x3208a0u;

    // 0x3208a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3208a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3208a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3208a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3208a8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3208a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3208ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3208acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3208b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3208b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3208b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3208b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3208b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3208b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3208bc: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3208bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3208c0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3208c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3208c4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3208c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3208c8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3208c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3208cc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3208ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3208d0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3208d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3208d4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3208d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3208d8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3208d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3208dc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3208dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3208e0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3208e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3208e4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3208e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3208e8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3208e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3208ec: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3208ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3208f0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3208f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3208f4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3208f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3208f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3208f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3208fc: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3208fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x320900: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x320900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x320904: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x320904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x320908: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x320908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x32090c: 0xc050cbc  jal         func_1432F0
    ctx->pc = 0x32090Cu;
    SET_GPR_U32(ctx, 31, 0x320914u);
    ctx->pc = 0x320910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32090Cu;
    // 0x320910: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1432F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1432F0u, 0x32090Cu, 0x320914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320914u;
label_320914:
    // 0x320914: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x320914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32091c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320920: 0xc0c8298  jal         func_320A60
    ctx->pc = 0x320920u;
    SET_GPR_U32(ctx, 31, 0x320928u);
    ctx->pc = 0x320924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320920u;
    // 0x320924: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A60u, 0x320920u, 0x320928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320928u;
label_320928:
    // 0x320928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x320928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32092c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32092cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320934: 0x3e00008  jr          $ra
    ctx->pc = 0x320934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320934u;
        // 0x320938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32093Cu;
}
