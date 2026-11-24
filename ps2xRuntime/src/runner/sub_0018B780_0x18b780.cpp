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

// Function: sub_0018B780
// Address: 0x18b780 - 0x18b85c
void sub_0018B780_0x18b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B780_0x18b780");
#endif

    switch (ctx->pc) {
        case 0x18b7dcu: goto label_18b7dc;
        default: break;
    }

    ctx->pc = 0x18b780u;

    // 0x18b780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b788: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18b78c: 0x46108801  sub.s       $f0, $f17, $f16
    ctx->pc = 0x18b78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x18b790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b794: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x18b794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b79c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x18b79cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18b7a0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18b7a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b7a4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18b7a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18b7a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18b7a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18b7ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18b7acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18b7b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b7b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b7b4: 0x46008d03  div.s       $f20, $f17, $f0
    ctx->pc = 0x18b7b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[17], ctx->f[0]); }
    // 0x18b7b8: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x18b7b8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x18b7bc: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x18b7bcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x18b7c0: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x18b7c0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x18b7c4: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x18b7c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x18b7c8: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x18b7c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x18b7cc: 0x0  nop
    ctx->pc = 0x18b7ccu;
    // NOP
    // 0x18b7d0: 0x0  nop
    ctx->pc = 0x18b7d0u;
    // NOP
    // 0x18b7d4: 0xc049590  jal         func_125640
    ctx->pc = 0x18B7D4u;
    SET_GPR_U32(ctx, 31, 0x18B7DCu);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x18B7D4u, 0x18B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7DCu;
label_18b7dc:
    // 0x18b7dc: 0x4619c0c1  sub.s       $f3, $f24, $f25
    ctx->pc = 0x18b7dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
    // 0x18b7e0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x18b7e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18b7e8: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x18b7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x18b7ec: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x18b7ecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x18b7f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x18b7f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b7f4: 0x0  nop
    ctx->pc = 0x18b7f4u;
    // NOP
    // 0x18b7f8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x18b7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x18b7fc: 0x46031003  div.s       $f0, $f2, $f3
    ctx->pc = 0x18b7fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x18b800: 0x4616b8c1  sub.s       $f3, $f23, $f22
    ctx->pc = 0x18b800u;
    ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x18b804: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x18b804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18b808: 0x4616b800  add.s       $f0, $f23, $f22
    ctx->pc = 0x18b808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x18b80c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x18b80cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x18b810: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x18b810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x18b814: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x18b814u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x18b818: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x18b818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x18b81c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x18b81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18b820: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x18b820u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x18b824: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x18b824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x18b828: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18b828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18b82c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x18b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x18b830: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x18b830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x18b834: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b838: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x18b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18b83c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b840: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18b844: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18b848: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18b84c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b854: 0x3e00008  jr          $ra
    ctx->pc = 0x18B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B854u;
        // 0x18b858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B85Cu;
}
