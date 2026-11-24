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

// Function: sub_001D8DF0
// Address: 0x1d8df0 - 0x1d8ef0
void sub_001D8DF0_0x1d8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8DF0_0x1d8df0");
#endif

    ctx->pc = 0x1d8df0u;

    // 0x1d8df0: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x1d8df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1d8df4: 0x3c07bf00  lui         $a3, 0xBF00
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48896 << 16));
    // 0x1d8df8: 0x3c03bab6  lui         $v1, 0xBAB6
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47798 << 16));
    // 0x1d8dfc: 0x3c053d2a  lui         $a1, 0x3D2A
    ctx->pc = 0x1d8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15658 << 16));
    // 0x1d8e00: 0x346b0b61  ori         $t3, $v1, 0xB61
    ctx->pc = 0x1d8e00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2913);
    // 0x1d8e04: 0x34a6aaab  ori         $a2, $a1, 0xAAAB
    ctx->pc = 0x1d8e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x1d8e08: 0x3c03b493  lui         $v1, 0xB493
    ctx->pc = 0x1d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46227 << 16));
    // 0x1d8e0c: 0x3c0537d0  lui         $a1, 0x37D0
    ctx->pc = 0x1d8e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14288 << 16));
    // 0x1d8e10: 0x3469f27e  ori         $t1, $v1, 0xF27E
    ctx->pc = 0x1d8e10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62078);
    // 0x1d8e14: 0x34aa0d01  ori         $t2, $a1, 0xD01
    ctx->pc = 0x1d8e14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3329);
    // 0x1d8e18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d8e18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8e1c: 0x3c033c08  lui         $v1, 0x3C08
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15368 << 16));
    // 0x1d8e20: 0x34688889  ori         $t0, $v1, 0x8889
    ctx->pc = 0x1d8e20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x1d8e24: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8e28: 0x46010282  mul.s       $f10, $f0, $f1
    ctx->pc = 0x1d8e28u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d8e2c: 0x3c03be2a  lui         $v1, 0xBE2A
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48682 << 16));
    // 0x1d8e30: 0x3467aaab  ori         $a3, $v1, 0xAAAB
    ctx->pc = 0x1d8e30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1d8e34: 0x3c03b950  lui         $v1, 0xB950
    ctx->pc = 0x1d8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47440 << 16));
    // 0x1d8e38: 0x460c0942  mul.s       $f5, $f1, $f12
    ctx->pc = 0x1d8e38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1d8e3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d8e3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8e40: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1d8e40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d8e44: 0x0  nop
    ctx->pc = 0x1d8e44u;
    // NOP
    // 0x1d8e48: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1d8e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1d8e4c: 0x34660d01  ori         $a2, $v1, 0xD01
    ctx->pc = 0x1d8e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3329);
    // 0x1d8e50: 0x3c033638  lui         $v1, 0x3638
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13880 << 16));
    // 0x1d8e54: 0x3465ef1d  ori         $a1, $v1, 0xEF1D
    ctx->pc = 0x1d8e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61213);
    // 0x1d8e58: 0x3c03b2d7  lui         $v1, 0xB2D7
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45783 << 16));
    // 0x1d8e5c: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x1d8e5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1d8e60: 0x3463322b  ori         $v1, $v1, 0x322B
    ctx->pc = 0x1d8e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12843);
    // 0x1d8e64: 0x46052242  mul.s       $f9, $f4, $f5
    ctx->pc = 0x1d8e64u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1d8e68: 0x460c2902  mul.s       $f4, $f5, $f12
    ctx->pc = 0x1d8e68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1d8e6c: 0x460c23c2  mul.s       $f15, $f4, $f12
    ctx->pc = 0x1d8e6cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1d8e70: 0x460c7b82  mul.s       $f14, $f15, $f12
    ctx->pc = 0x1d8e70u;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x1d8e74: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1d8e74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8e78: 0x460c72c2  mul.s       $f11, $f14, $f12
    ctx->pc = 0x1d8e78u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x1d8e7c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x1d8e7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1d8e80: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x1d8e80u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8e84: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d8e84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8e88: 0x460b11c2  mul.s       $f7, $f2, $f11
    ctx->pc = 0x1d8e88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x1d8e8c: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x1d8e8cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1d8e90: 0x46006100  add.s       $f4, $f12, $f0
    ctx->pc = 0x1d8e90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1d8e94: 0x460b0882  mul.s       $f2, $f1, $f11
    ctx->pc = 0x1d8e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x1d8e98: 0x460c5b42  mul.s       $f13, $f11, $f12
    ctx->pc = 0x1d8e98u;
    ctx->f[13] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1d8e9c: 0x448c5800  mtc1        $t4, $f11
    ctx->pc = 0x1d8e9cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1d8ea0: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x1d8ea0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1d8ea4: 0x460a5a80  add.s       $f10, $f11, $f10
    ctx->pc = 0x1d8ea4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x1d8ea8: 0x46095018  adda.s      $f10, $f9
    ctx->pc = 0x1d8ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[10], ctx->f[9]));
    // 0x1d8eac: 0x460f421c  madd.s      $f8, $f8, $f15
    ctx->pc = 0x1d8eacu;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[15]));
    // 0x1d8eb0: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x1d8eb0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1d8eb4: 0x0  nop
    ctx->pc = 0x1d8eb4u;
    // NOP
    // 0x1d8eb8: 0x46083818  adda.s      $f7, $f8
    ctx->pc = 0x1d8eb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[8]));
    // 0x1d8ebc: 0x460d319c  madd.s      $f6, $f6, $f13
    ctx->pc = 0x1d8ebcu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[13]));
    // 0x1d8ec0: 0x460c6842  mul.s       $f1, $f13, $f12
    ctx->pc = 0x1d8ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x1d8ec4: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1d8ec4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d8ec8: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x1d8ec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[5], ctx->f[4]));
    // 0x1d8ecc: 0x460e18dc  madd.s      $f3, $f3, $f14
    ctx->pc = 0x1d8eccu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x1d8ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8ed4: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x1d8ed4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x1d8ed8: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x1d8ed8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d8edc: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x1d8edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x1d8ee0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d8ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d8ee4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d8ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d8ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EE8u;
        // 0x1d8eec: 0xac8c000c  sw          $t4, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8EF0u;
}
