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

// Function: sub_001A1C20
// Address: 0x1a1c20 - 0x1a2078
void sub_001A1C20_0x1a1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C20_0x1a1c20");
#endif

    switch (ctx->pc) {
        case 0x1a1c54u: goto label_1a1c54;
        case 0x1a1c68u: goto label_1a1c68;
        case 0x1a1c74u: goto label_1a1c74;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1f68u: goto label_1a1f68;
        case 0x1a1f80u: goto label_1a1f80;
        case 0x1a1f98u: goto label_1a1f98;
        case 0x1a1fb0u: goto label_1a1fb0;
        case 0x1a1fc8u: goto label_1a1fc8;
        case 0x1a1fd8u: goto label_1a1fd8;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a2018u: goto label_1a2018;
        case 0x1a2024u: goto label_1a2024;
        default: break;
    }

    ctx->pc = 0x1a1c20u;

    // 0x1a1c20: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1a1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1a1c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1c28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1c2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a1c2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a1c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1a1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1c38: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x1a1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1a1c3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a1c3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a1c40: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1a1c40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1a1c44: 0x0  nop
    ctx->pc = 0x1a1c44u;
    // NOP
    // 0x1a1c48: 0x0  nop
    ctx->pc = 0x1a1c48u;
    // NOP
    // 0x1a1c4c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C54u);
    ctx->pc = 0x1A1C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C4Cu;
    // 0x1a1c50: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1C4Cu, 0x1A1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C54u;
label_1a1c54:
    // 0x1a1c54: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1a1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1a1c58: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1a1c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1a1c5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a1c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c60: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1C60u;
    SET_GPR_U32(ctx, 31, 0x1A1C68u);
    ctx->pc = 0x1A1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C60u;
    // 0x1a1c64: 0xafa0013c  sw          $zero, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1C60u, 0x1A1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C68u;
label_1a1c68:
    // 0x1a1c68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a1c6c: 0xc041482  jal         func_105208
    ctx->pc = 0x1A1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C74u);
    ctx->pc = 0x1A1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C6Cu;
    // 0x1a1c70: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x1A1C6Cu, 0x1A1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C74u;
label_1a1c74:
    // 0x1a1c74: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1a1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1a1c78: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1a1c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a1c7c: 0xc041442  jal         func_105108
    ctx->pc = 0x1A1C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C84u);
    ctx->pc = 0x1A1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C7Cu;
    // 0x1a1c80: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A1C7Cu, 0x1A1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C84u;
label_1a1c84:
    // 0x1a1c84: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x1a1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a1c88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a1c8c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1a1c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1c90: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a1c94: 0xc6050094  lwc1        $f5, 0x94($s0)
    ctx->pc = 0x1a1c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1c98: 0xc6040098  lwc1        $f4, 0x98($s0)
    ctx->pc = 0x1a1c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1c9c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x1a1c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1ca0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1ca4: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x1a1ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1ca8: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x1a1ca8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x1a1cac: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1a1cacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1a1cb0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x1a1cb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1a1cb4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1a1cb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a1cb8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1a1cb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1a1cbc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a1cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a1cc0: 0xc6060018  lwc1        $f6, 0x18($s0)
    ctx->pc = 0x1a1cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a1cc4: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1a1cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1cc8: 0xc6040098  lwc1        $f4, 0x98($s0)
    ctx->pc = 0x1a1cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1ccc: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x1a1cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1cd0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1a1cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1cd4: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1a1cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1cd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a1cdc: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1a1cdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1a1ce0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x1a1ce0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1a1ce4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a1ce4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a1ce8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a1ce8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a1cec: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1a1cecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a1cf0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a1cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1a1cf4: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1a1cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1cf8: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x1a1cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1cfc: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x1a1cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1d00: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x1a1d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1d04: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1a1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1d08: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1a1d08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1a1d0c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x1a1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1a1d10: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a1d10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a1d14: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a1d14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a1d18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1d1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a1d1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a1d20: 0x0  nop
    ctx->pc = 0x1a1d20u;
    // NOP
    // 0x1a1d24: 0x0  nop
    ctx->pc = 0x1a1d24u;
    // NOP
    // 0x1a1d28: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1D28u;
    SET_GPR_U32(ctx, 31, 0x1A1D30u);
    ctx->pc = 0x1A1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D28u;
    // 0x1a1d2c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1D28u, 0x1A1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D30u;
label_1a1d30:
    // 0x1a1d30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1d34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1d38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1d3c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D44u);
    ctx->pc = 0x1A1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D3Cu;
    // 0x1a1d40: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1D3Cu, 0x1A1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D44u;
label_1a1d44:
    // 0x1a1d44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1d48: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1a1d4c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D54u);
    ctx->pc = 0x1A1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D4Cu;
    // 0x1a1d50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1D4Cu, 0x1A1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D54u;
label_1a1d54:
    // 0x1a1d54: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1d58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a1d5c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1a1d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1d60: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a1d64: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x1a1d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a1d68: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x1a1d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a1d6c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x1a1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1d70: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a1d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1d74: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x1a1d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1d78: 0x46011141  sub.s       $f5, $f2, $f1
    ctx->pc = 0x1a1d78u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a1d7c: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x1a1d7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1a1d80: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1a1d80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1a1d84: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1a1d84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1a1d88: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1a1d88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1a1d8c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a1d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a1d90: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x1a1d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1d94: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1d98: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x1a1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1d9c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1a1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1da0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1a1da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1da4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a1da8: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x1a1da8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1a1dac: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1a1dacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1a1db0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1a1db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a1db4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a1db4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a1db8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1a1db8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a1dbc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a1dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1a1dc0: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1dc4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1dc8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1a1dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1dcc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1a1dccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1a1dd0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1a1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1a1dd4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1a1dd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a1dd8: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1a1dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1a1ddc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1de0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a1de0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a1de4: 0x0  nop
    ctx->pc = 0x1a1de4u;
    // NOP
    // 0x1a1de8: 0x0  nop
    ctx->pc = 0x1a1de8u;
    // NOP
    // 0x1a1dec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1DECu;
    SET_GPR_U32(ctx, 31, 0x1A1DF4u);
    ctx->pc = 0x1A1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DECu;
    // 0x1a1df0: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1DECu, 0x1A1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DF4u;
label_1a1df4:
    // 0x1a1df4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1df8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1dfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1e00: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1E00u;
    SET_GPR_U32(ctx, 31, 0x1A1E08u);
    ctx->pc = 0x1A1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E00u;
    // 0x1a1e04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1E00u, 0x1A1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E08u;
label_1a1e08:
    // 0x1a1e08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1e0c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1a1e10: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1E10u;
    SET_GPR_U32(ctx, 31, 0x1A1E18u);
    ctx->pc = 0x1A1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E10u;
    // 0x1a1e14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1E10u, 0x1A1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E18u;
label_1a1e18:
    // 0x1a1e18: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1e1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1e20: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1a1e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1e24: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a1e28: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x1a1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a1e2c: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x1a1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a1e30: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x1a1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1e34: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1e38: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x1a1e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1e3c: 0x46011141  sub.s       $f5, $f2, $f1
    ctx->pc = 0x1a1e3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a1e40: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x1a1e40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1a1e44: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1a1e44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1a1e48: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1a1e48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1a1e4c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1a1e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1a1e50: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a1e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a1e54: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x1a1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1e58: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1e5c: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x1a1e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1e60: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1a1e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1e64: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1a1e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1e68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a1e6c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x1a1e6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1a1e70: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1a1e70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1a1e74: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1a1e74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a1e78: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a1e78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a1e7c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1a1e7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a1e80: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1a1e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a1e84: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1e88: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1e8c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1a1e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1e90: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1a1e90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1a1e94: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1a1e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1a1e98: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1a1e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a1e9c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1a1e9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1a1ea0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1ea4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a1ea4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a1ea8: 0x0  nop
    ctx->pc = 0x1a1ea8u;
    // NOP
    // 0x1a1eac: 0x0  nop
    ctx->pc = 0x1a1eacu;
    // NOP
    // 0x1a1eb0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1EB0u;
    SET_GPR_U32(ctx, 31, 0x1A1EB8u);
    ctx->pc = 0x1A1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EB0u;
    // 0x1a1eb4: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1EB0u, 0x1A1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EB8u;
label_1a1eb8:
    // 0x1a1eb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a1ebc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a1ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1ec0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1EC0u;
    SET_GPR_U32(ctx, 31, 0x1A1EC8u);
    ctx->pc = 0x1A1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EC0u;
    // 0x1a1ec4: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1EC0u, 0x1A1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EC8u;
label_1a1ec8:
    // 0x1a1ec8: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1ecc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1ed0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1a1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1ed4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a1ed8: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x1a1ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a1edc: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x1a1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a1ee0: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x1a1ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1ee4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1ee8: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x1a1ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1eec: 0x46011141  sub.s       $f5, $f2, $f1
    ctx->pc = 0x1a1eecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a1ef0: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x1a1ef0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1a1ef4: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1a1ef4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1a1ef8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1a1ef8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1a1efc: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1a1efcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1a1f00: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a1f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a1f04: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x1a1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a1f08: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1f0c: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x1a1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1f10: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1a1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1f14: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1a1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1f18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1f18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a1f1c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x1a1f1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1a1f20: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1a1f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1a1f24: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1a1f24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a1f28: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a1f28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a1f2c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1a1f2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a1f30: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1a1f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1a1f34: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a1f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1f38: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1a1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1f3c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1a1f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1f40: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1a1f40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1a1f44: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1a1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1a1f48: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1a1f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a1f4c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1a1f4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1a1f50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a1f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1f54: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a1f54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a1f58: 0x0  nop
    ctx->pc = 0x1a1f58u;
    // NOP
    // 0x1a1f5c: 0x0  nop
    ctx->pc = 0x1a1f5cu;
    // NOP
    // 0x1a1f60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1F60u;
    SET_GPR_U32(ctx, 31, 0x1A1F68u);
    ctx->pc = 0x1A1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F60u;
    // 0x1a1f64: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1F60u, 0x1A1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F68u;
label_1a1f68:
    // 0x1a1f68: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1a1f6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a1f70: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1a1f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1a1f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1f78: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1F78u;
    SET_GPR_U32(ctx, 31, 0x1A1F80u);
    ctx->pc = 0x1A1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F78u;
    // 0x1a1f7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1F78u, 0x1A1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F80u;
label_1a1f80:
    // 0x1a1f80: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x1a1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x1a1f84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a1f88: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1a1f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1a1f8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1f90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1F90u;
    SET_GPR_U32(ctx, 31, 0x1A1F98u);
    ctx->pc = 0x1A1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F90u;
    // 0x1a1f94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1F90u, 0x1A1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F98u;
label_1a1f98:
    // 0x1a1f98: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x1a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x1a1f9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1fa0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1a1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1a1fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1fa8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1FA8u;
    SET_GPR_U32(ctx, 31, 0x1A1FB0u);
    ctx->pc = 0x1A1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FA8u;
    // 0x1a1fac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1FA8u, 0x1A1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FB0u;
label_1a1fb0:
    // 0x1a1fb0: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1a1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1a1fb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1fb8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1a1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1a1fbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1fc0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A1FC0u;
    SET_GPR_U32(ctx, 31, 0x1A1FC8u);
    ctx->pc = 0x1A1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FC0u;
    // 0x1a1fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A1FC0u, 0x1A1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FC8u;
label_1a1fc8:
    // 0x1a1fc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a1fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1fcc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a1fd0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1FD0u;
    SET_GPR_U32(ctx, 31, 0x1A1FD8u);
    ctx->pc = 0x1A1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FD0u;
    // 0x1a1fd4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1FD0u, 0x1A1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FD8u;
label_1a1fd8:
    // 0x1a1fd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1fdc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1fe0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1FE0u;
    SET_GPR_U32(ctx, 31, 0x1A1FE8u);
    ctx->pc = 0x1A1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FE0u;
    // 0x1a1fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1FE0u, 0x1A1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FE8u;
label_1a1fe8:
    // 0x1a1fe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1fec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1a1fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1ff0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1FF0u;
    SET_GPR_U32(ctx, 31, 0x1A1FF8u);
    ctx->pc = 0x1A1FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FF0u;
    // 0x1a1ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1FF0u, 0x1A1FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FF8u;
label_1a1ff8:
    // 0x1a1ff8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1a1ffc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1a1ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2000: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2000u;
    SET_GPR_U32(ctx, 31, 0x1A2008u);
    ctx->pc = 0x1A2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2000u;
    // 0x1a2004: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2000u, 0x1A2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2008u;
label_1a2008:
    // 0x1a2008: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a200c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1a200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a2010: 0xc041442  jal         func_105108
    ctx->pc = 0x1A2010u;
    SET_GPR_U32(ctx, 31, 0x1A2018u);
    ctx->pc = 0x1A2014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2010u;
    // 0x1a2014: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A2010u, 0x1A2018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2018u;
label_1a2018:
    // 0x1a2018: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a2018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a201c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A201Cu;
    {
        const bool branch_taken_0x1a201c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A201Cu;
        // 0x1a2020: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a201c) {
            ctx->pc = 0x1A2040u;
            goto label_1a2040;
        }
    }
    ctx->pc = 0x1A2024u;
label_1a2024:
    // 0x1a2024: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a2024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2028: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a202c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2030: 0x0  nop
    ctx->pc = 0x1a2030u;
    // NOP
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
    // 0x1a2038: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2038u;
    {
        const bool branch_taken_0x1a2038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2038) {
            ctx->pc = 0x1A2024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2024;
        }
    }
    ctx->pc = 0x1A2040u;
label_1a2040:
    // 0x1a2040: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2044: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x1a2044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1a2048: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1a2048u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a204c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1a2050: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2054: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1a2054u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1a2058: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a205c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a205cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2060: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a2060u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1a2064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2068: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a206c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a206cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2070u;
        // 0x1a2074: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2078u;
}
