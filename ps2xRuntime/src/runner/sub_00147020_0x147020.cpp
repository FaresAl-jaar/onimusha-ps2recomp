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

// Function: sub_00147020
// Address: 0x147020 - 0x147148
void sub_00147020_0x147020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147020_0x147020");
#endif

    switch (ctx->pc) {
        case 0x1470c0u: goto label_1470c0;
        default: break;
    }

    ctx->pc = 0x147020u;

    // 0x147020: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x147020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147024: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x147024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147028: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x147028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14702c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x14702cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x147030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147034: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x147034u;
    {
        const bool branch_taken_0x147034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147034) {
            ctx->pc = 0x147140u;
            goto label_147140;
        }
    }
    ctx->pc = 0x14703Cu;
    // 0x14703c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x14703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147044: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x147044u;
    {
        const bool branch_taken_0x147044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147044) {
            ctx->pc = 0x147130u;
            goto label_147130;
        }
    }
    ctx->pc = 0x14704Cu;
    // 0x14704c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147050: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147054: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x147054u;
    {
        const bool branch_taken_0x147054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147054) {
            ctx->pc = 0x147108u;
            goto label_147108;
        }
    }
    ctx->pc = 0x14705Cu;
    // 0x14705c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x14705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147060: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147064: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x147064u;
    {
        const bool branch_taken_0x147064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147064) {
            ctx->pc = 0x1470C8u;
            goto label_1470c8;
        }
    }
    ctx->pc = 0x14706Cu;
    // 0x14706c: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x147070: 0xac8300fc  sw          $v1, 0xFC($a0)
    ctx->pc = 0x147070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x147074: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x147078: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x147078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
    // 0x14707c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x147080: 0xac8300f4  sw          $v1, 0xF4($a0)
    ctx->pc = 0x147080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
    // 0x147084: 0xac8600f0  sw          $a2, 0xF0($a0)
    ctx->pc = 0x147084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 6));
    // 0x147088: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x147088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14708c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x147090: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x147090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147094: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x147094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x147098: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x147098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14709c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1470a0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1470a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1470a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1470a8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1470a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1470acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1470b0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1470b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470b4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1470b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1470b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1470b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1470bc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1470c0:
    if (ctx->pc == 0x1470C0u) {
        ctx->pc = 0x1470C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470BCu;
        // 0x1470c0: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1470C4u;
        goto label_fallthrough_0x1470bc;
    }
    ctx->pc = 0x1470BCu;
    {
        const bool branch_taken_0x1470bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470BCu;
        // 0x1470c0: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470bc) {
            ctx->pc = 0x147140u;
            goto label_147140;
        }
    }
label_fallthrough_0x1470bc:
    ctx->pc = 0x1470C4u;
    // 0x1470c4: 0x0  nop
    ctx->pc = 0x1470c4u;
    // NOP
label_1470c8:
    // 0x1470c8: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x1470c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x1470cc: 0xac8300fc  sw          $v1, 0xFC($a0)
    ctx->pc = 0x1470ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x1470d0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1470d4: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x1470d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
    // 0x1470d8: 0xac8600f4  sw          $a2, 0xF4($a0)
    ctx->pc = 0x1470d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 6));
    // 0x1470dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1470dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470e0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1470e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1470e4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1470e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470e8: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1470e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1470ec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1470ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470f0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1470f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1470f4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1470f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1470f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1470f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1470fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1470fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x147100: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x147100u;
    {
        const bool branch_taken_0x147100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147100u;
        // 0x147104: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147100) {
            ctx->pc = 0x147140u;
            goto label_147140;
        }
    }
    ctx->pc = 0x147108u;
label_147108:
    // 0x147108: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x147108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x14710c: 0xac8300fc  sw          $v1, 0xFC($a0)
    ctx->pc = 0x14710cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x147110: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x147110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    // 0x147114: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x147114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147118: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x147118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14711c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x14711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147120: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x147120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x147124: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x147124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x147128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147128u;
    {
        const bool branch_taken_0x147128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147128u;
        // 0x14712c: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147128) {
            ctx->pc = 0x147140u;
            goto label_147140;
        }
    }
    ctx->pc = 0x147130u;
label_147130:
    // 0x147130: 0xac8600fc  sw          $a2, 0xFC($a0)
    ctx->pc = 0x147130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 6));
    // 0x147134: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x147134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x147138: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x147138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14713c: 0x0  nop
    ctx->pc = 0x14713cu;
    // NOP
label_147140:
    // 0x147140: 0x3e00008  jr          $ra
    ctx->pc = 0x147140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147148u;
}
