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

// Function: sub_002BF370
// Address: 0x2bf370 - 0x2bf418
void sub_002BF370_0x2bf370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF370_0x2bf370");
#endif

    switch (ctx->pc) {
        case 0x2bf408u: goto label_2bf408;
        default: break;
    }

    ctx->pc = 0x2bf370u;

    // 0x2bf370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf374: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2bf374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2bf378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf37c: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
    // 0x2bf380: 0x84c80002  lh          $t0, 0x2($a2)
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bf384: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2bf388: 0x24635128  addiu       $v1, $v1, 0x5128
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20776));
    // 0x2bf38c: 0x24990008  addiu       $t9, $a0, 0x8
    ctx->pc = 0x2bf38cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf390: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2bf390u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf394: 0x0  nop
    ctx->pc = 0x2bf394u;
    // NOP
    // 0x2bf398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bf398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bf39c: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bf39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x2bf3a0: 0x84c80004  lh          $t0, 0x4($a2)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bf3a4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2bf3a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf3a8: 0x0  nop
    ctx->pc = 0x2bf3a8u;
    // NOP
    // 0x2bf3ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bf3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bf3b0: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x2bf3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x2bf3b4: 0x84c80006  lh          $t0, 0x6($a2)
    ctx->pc = 0x2bf3b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2bf3b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2bf3b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf3bc: 0x0  nop
    ctx->pc = 0x2bf3bcu;
    // NOP
    // 0x2bf3c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bf3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bf3c4: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x2bf3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x2bf3c8: 0xac87009c  sw          $a3, 0x9C($a0)
    ctx->pc = 0x2bf3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 7));
    // 0x2bf3cc: 0x90c60001  lbu         $a2, 0x1($a2)
    ctx->pc = 0x2bf3ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bf3d0: 0xa086005e  sb          $a2, 0x5E($a0)
    ctx->pc = 0x2bf3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bf3d4: 0x94860080  lhu         $a2, 0x80($a0)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2bf3d8: 0xa4860022  sh          $a2, 0x22($a0)
    ctx->pc = 0x2bf3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x2bf3dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bf3dcu;
    { uint32_t bits = FAST_READ32(0x4E5128u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf3e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bf3e0u;
    { uint32_t bits = FAST_READ32(0x4E512Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf3e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bf3e4u;
    { uint32_t bits = FAST_READ32(0x4E5130u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf3e8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bf3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bf3ec: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bf3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bf3f0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bf3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bf3f4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2bf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2bf3f8: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x2bf3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf3fc: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x2bf3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf400: 0xc040250  jal         func_100940
    ctx->pc = 0x2BF400u;
    SET_GPR_U32(ctx, 31, 0x2BF408u);
    ctx->pc = 0x2BF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF400u;
    // 0x2bf404: 0xa0800107  sb          $zero, 0x107($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BF400u, 0x2BF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF408u;
label_2bf408:
    // 0x2bf408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf40c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf410: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF410u;
        // 0x2bf414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF418u;
}
