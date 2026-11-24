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

// Function: sub_003F0340
// Address: 0x3f0340 - 0x3f03d0
void sub_003F0340_0x3f0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0340_0x3f0340");
#endif

    switch (ctx->pc) {
        case 0x3f03c4u: goto label_3f03c4;
        default: break;
    }

    ctx->pc = 0x3f0340u;

    // 0x3f0340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f0344: 0xa343c  dsll32      $a2, $t2, 16
    ctx->pc = 0x3f0344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 16));
    // 0x3f0348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f034c: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x3f034cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3f0350: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f0354: 0x93c3c  dsll32      $a3, $t1, 16
    ctx->pc = 0x3f0354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 16));
    // 0x3f0358: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f035c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f035cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0360: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f0364: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3f0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f0368: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f036c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3f036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f0370: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f0370u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3f0374: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3f0374u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3f0378: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3f0378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f037c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f037cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3f0380: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x3f0380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x3f0384: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3f0388: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3f038c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f038cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3f0390: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3f0390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f0394: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3f0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f0398: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3f0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f039c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3f039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f03a0: 0xb2c3c  dsll32      $a1, $t3, 16
    ctx->pc = 0x3f03a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 16));
    // 0x3f03a4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f03a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3f03a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f03a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3f03ac: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f03acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3f03b0: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x3f03b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f03b4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f03b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3f03b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f03b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3f03bc: 0xc0d1ac8  jal         func_346B20
    ctx->pc = 0x3F03BCu;
    SET_GPR_U32(ctx, 31, 0x3F03C4u);
    ctx->pc = 0x3F03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F03BCu;
    // 0x3f03c0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346B20u, 0x3F03BCu, 0x3F03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F03C4u;
label_3f03c4:
    // 0x3f03c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f03c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f03c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F03C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03C8u;
        // 0x3f03cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F03C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F03D0u;
}
