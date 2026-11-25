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

// Function: sub_00105918
// Address: 0x105918 - 0x105a1c
void sub_00105918_0x105918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105918_0x105918");
#endif

    switch (ctx->pc) {
        case 0x1059a0u: goto label_1059a0;
        case 0x1059c8u: goto label_1059c8;
        case 0x1059f0u: goto label_1059f0;
        default: break;
    }

    ctx->pc = 0x105918u;

    // 0x105918: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x105918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10591c: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x10591cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x105920: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x105920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x105924: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x105924u;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x105928: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x105928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10592c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x10592cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x105930: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x105930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x105934: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x105934u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x105938: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x105938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10593c: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x10593cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x105940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105944: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x105944u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x105948: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x105948u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x10594c: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x10594cu;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x105950: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x105950u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x105954: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x105954u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x105958: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x105958u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x10595c: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x10595cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x105960: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x105960u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x105964: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x105964u;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x105968: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x105968u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10596c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x10596cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x105970: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x105970u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x105974: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x105974u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x105978: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x105978u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x10597c: 0x0  nop
    ctx->pc = 0x10597cu;
    // NOP
    // 0x105980: 0x0  nop
    ctx->pc = 0x105980u;
    // NOP
    // 0x105984: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x105984u;
    { if (ctx->f[19] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[19]); }
    // 0x105988: 0x0  nop
    ctx->pc = 0x105988u;
    // NOP
    // 0x10598c: 0x0  nop
    ctx->pc = 0x10598cu;
    // NOP
    // 0x105990: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x105990u;
    { if (ctx->f[19] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[19]); }
    // 0x105994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x105994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x105998: 0xc04150c  jal         func_105430
    ctx->pc = 0x105998u;
    SET_GPR_U32(ctx, 31, 0x1059A0u);
    ctx->pc = 0x10599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105998u;
    // 0x10599c: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x105998u, 0x1059A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059A0u;
label_1059a0:
    // 0x1059a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1059a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1059a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1059a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1059a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1059a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059ac: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x1059acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1059b0: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x1059b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1059b4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1059b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1059b8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1059b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1059bc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1059bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1059c0: 0xc04150c  jal         func_105430
    ctx->pc = 0x1059C0u;
    SET_GPR_U32(ctx, 31, 0x1059C8u);
    ctx->pc = 0x1059C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059C0u;
    // 0x1059c4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x1059C0u, 0x1059C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059C8u;
label_1059c8:
    // 0x1059c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1059c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059cc: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x1059ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1059d0: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x1059d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1059d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1059d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059d8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1059d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1059dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1059dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059e0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x1059e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1059e4: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x1059e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1059e8: 0xc04144e  jal         func_105138
    ctx->pc = 0x1059E8u;
    SET_GPR_U32(ctx, 31, 0x1059F0u);
    ctx->pc = 0x1059ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059E8u;
    // 0x1059ec: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1059E8u, 0x1059F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059F0u;
label_1059f0:
    // 0x1059f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1059f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1059f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1059f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1059f8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x1059f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1059fc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x1059fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x105a00: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x105a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x105a04: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x105a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x105a08: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x105a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x105a0c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x105a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x105a10: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x105a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x105a14: 0x3e00008  jr          $ra
    ctx->pc = 0x105A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A14u;
        // 0x105a18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A1Cu;
}
