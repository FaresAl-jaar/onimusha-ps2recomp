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

// Function: sub_00135BA0
// Address: 0x135ba0 - 0x135d18
void sub_00135BA0_0x135ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135BA0_0x135ba0");
#endif

    switch (ctx->pc) {
        case 0x135bccu: goto label_135bcc;
        case 0x135bf0u: goto label_135bf0;
        default: break;
    }

    ctx->pc = 0x135ba0u;

    // 0x135ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x135ba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135ba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135bb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x135bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135bb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bc4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x135BC4u;
    SET_GPR_U32(ctx, 31, 0x135BCCu);
    ctx->pc = 0x135BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BC4u;
    // 0x135bc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x135BC4u, 0x135BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BCCu;
label_135bcc:
    // 0x135bcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135bd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135bdc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x135bdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135be0: 0x0  nop
    ctx->pc = 0x135be0u;
    // NOP
    // 0x135be4: 0x0  nop
    ctx->pc = 0x135be4u;
    // NOP
    // 0x135be8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x135BE8u;
    SET_GPR_U32(ctx, 31, 0x135BF0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x135BE8u, 0x135BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BF0u;
label_135bf0:
    // 0x135bf0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x135bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135bf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135bf8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x135bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135bfc: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x135bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x135c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x135c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135c04: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x135c08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c0c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x135c0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x135c10: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x135c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x135c14: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x135c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x135c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c1c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c1cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c20: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c24: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x135c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x135c28: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x135c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c2c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x135c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c30: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c30u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c38: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x135c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x135c3c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x135c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c40: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x135c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c44: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c48: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c4c: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x135c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x135c50: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x135c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c54: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x135c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c58: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c58u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c60: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x135c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x135c64: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x135c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c68: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x135c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c70: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x135c70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x135c74: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x135c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x135c78: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x135c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c7c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x135c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c80: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c80u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c88: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x135c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x135c8c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x135c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c90: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x135c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c94: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135c94u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135c98: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135c9c: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x135c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x135ca0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x135ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135ca4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x135ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135ca8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135ca8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135cac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135cb0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x135cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x135cb4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x135cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135cb8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x135cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135cbc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x135cbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x135cc0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135cc4: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x135cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x135cc8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x135cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135ccc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x135cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135cd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x135cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x135cd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x135cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x135cd8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x135cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x135cdc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x135cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135ce0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x135ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ce4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x135ce4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x135ce8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135cec: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x135cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x135cf0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x135cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x135cf4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x135cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x135cf8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x135cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x135cfc: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x135cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x135d00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d10: 0x3e00008  jr          $ra
    ctx->pc = 0x135D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D10u;
        // 0x135d14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135D18u;
}
