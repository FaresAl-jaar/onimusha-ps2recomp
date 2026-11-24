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

// Function: sub_00135830
// Address: 0x135830 - 0x135928
void sub_00135830_0x135830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135830_0x135830");
#endif

    ctx->pc = 0x135830u;

    // 0x135830: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135834: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x135834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x135838: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13583c: 0x25086540  addiu       $t0, $t0, 0x6540
    ctx->pc = 0x13583cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25920));
    // 0x135840: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x135840u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x135844: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x135844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x135848: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x135848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x13584c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13584cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135850: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x135850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x135854: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x135854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x135858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13585c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13585cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x135860: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x135860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x135864: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x135864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x135868: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x135868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x13586c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135870: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x135870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x135874: 0x24e30400  addiu       $v1, $a3, 0x400
    ctx->pc = 0x135874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x135878: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x135878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x13587c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x135880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135884: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x135884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x135888: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x135888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13588c: 0x30c30fff  andi        $v1, $a2, 0xFFF
    ctx->pc = 0x13588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x135890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135894: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x135894u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x135898: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13589c: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1358a0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1358a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1358a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1358a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358a8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1358ac: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1358acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1358b0: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x1358b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1358b4: 0x46092082  mul.s       $f2, $f4, $f9
    ctx->pc = 0x1358b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x1358b8: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x1358b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1358bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1358bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1358c0: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x1358c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x1358c4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1358c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1358c8: 0x46082002  mul.s       $f0, $f4, $f8
    ctx->pc = 0x1358c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x1358cc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1358ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1358d0: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1358d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1358d4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1358d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1358d8: 0x46071942  mul.s       $f5, $f3, $f7
    ctx->pc = 0x1358d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1358dc: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x1358dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x1358e0: 0x4605485c  madd.s      $f1, $f9, $f5
    ctx->pc = 0x1358e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x1358e4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1358e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1358e8: 0x46073102  mul.s       $f4, $f6, $f7
    ctx->pc = 0x1358e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x1358ec: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x1358ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[8]));
    // 0x1358f0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1358f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1358f4: 0x460448dc  madd.s      $f3, $f9, $f4
    ctx->pc = 0x1358f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[9], ctx->f[4]));
    // 0x1358f8: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1358f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1358fc: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x1358fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x135900: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x135900u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[9]));
    // 0x135904: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x135904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x135908: 0x4605409c  madd.s      $f2, $f8, $f5
    ctx->pc = 0x135908u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x13590c: 0x4609081a  mula.s      $f1, $f9
    ctx->pc = 0x13590cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[9]));
    // 0x135910: 0x4604405c  madd.s      $f1, $f8, $f4
    ctx->pc = 0x135910u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x135914: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x135914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x135918: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x135918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13591c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x13591cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x135920: 0x3e00008  jr          $ra
    ctx->pc = 0x135920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135920u;
        // 0x135924: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135928u;
}
