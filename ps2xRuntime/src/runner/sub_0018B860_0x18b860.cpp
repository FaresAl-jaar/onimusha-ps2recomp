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

// Function: sub_0018B860
// Address: 0x18b860 - 0x18b95c
void sub_0018B860_0x18b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B860_0x18b860");
#endif

    switch (ctx->pc) {
        case 0x18b8c0u: goto label_18b8c0;
        case 0x18b8ccu: goto label_18b8cc;
        case 0x18b928u: goto label_18b928;
        default: break;
    }

    ctx->pc = 0x18b860u;

    // 0x18b860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b864: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18b868: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18b86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b870: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b874: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x18b874u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18b878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b87c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x18b87cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18b880: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x18b880u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18b884: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18b884u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b888: 0x460c0602  mul.s       $f24, $f0, $f12
    ctx->pc = 0x18b888u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x18b88c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18b88cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18b890: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18b890u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18b894: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18b894u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18b898: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b89c: 0x46006ec6  mov.s       $f27, $f13
    ctx->pc = 0x18b89cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[13]);
    // 0x18b8a0: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x18b8a0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x18b8a4: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x18b8a4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x18b8a8: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x18b8a8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x18b8ac: 0x46008d86  mov.s       $f22, $f17
    ctx->pc = 0x18b8acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[17]);
    // 0x18b8b0: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x18b8b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x18b8b4: 0x46009d06  mov.s       $f20, $f19
    ctx->pc = 0x18b8b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[19]);
    // 0x18b8b8: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x18B8B8u;
    SET_GPR_U32(ctx, 31, 0x18B8C0u);
    ctx->pc = 0x18B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8B8u;
    // 0x18b8bc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x18B8B8u, 0x18B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8C0u;
label_18b8c0:
    // 0x18b8c0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18b8c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x18b8c4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x18B8C4u;
    SET_GPR_U32(ctx, 31, 0x18B8CCu);
    ctx->pc = 0x18B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8C4u;
    // 0x18b8c8: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x18B8C4u, 0x18B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8CCu;
label_18b8cc:
    // 0x18b8cc: 0x0  nop
    ctx->pc = 0x18b8ccu;
    // NOP
    // 0x18b8d0: 0x0  nop
    ctx->pc = 0x18b8d0u;
    // NOP
    // 0x18b8d4: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x18b8d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
    // 0x18b8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8dc: 0x4600d103  div.s       $f4, $f26, $f0
    ctx->pc = 0x18b8dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[26], ctx->f[0]); }
    // 0x18b8e0: 0x461b2082  mul.s       $f2, $f4, $f27
    ctx->pc = 0x18b8e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[27]);
    // 0x18b8e4: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x18b8e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x18b8e8: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x18b8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18b8ec: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x18b8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x18b8f0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x18b8f0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x18b8f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18b8f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18b8f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18b8f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b8fc: 0x46001340  add.s       $f13, $f2, $f0
    ctx->pc = 0x18b8fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x18b900: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x18b900u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x18b904: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x18b904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x18b908: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x18b908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x18b90c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x18b90cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x18b910: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18b910u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18b914: 0x46002380  add.s       $f14, $f4, $f0
    ctx->pc = 0x18b914u;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x18b918: 0x46001bc0  add.s       $f15, $f3, $f0
    ctx->pc = 0x18b918u;
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x18b91c: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x18b91cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
    // 0x18b920: 0xc062de0  jal         func_18B780
    ctx->pc = 0x18B920u;
    SET_GPR_U32(ctx, 31, 0x18B928u);
    ctx->pc = 0x18B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B920u;
    // 0x18b924: 0x4600d406  mov.s       $f16, $f26 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B780u, 0x18B920u, 0x18B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B928u;
label_18b928:
    // 0x18b928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b92c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x18b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x18b930: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b934: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x18b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x18b938: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x18b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18b93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b940: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18b944: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18b948: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18b94c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b950: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b954: 0x3e00008  jr          $ra
    ctx->pc = 0x18B954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B954u;
        // 0x18b958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B95Cu;
}
