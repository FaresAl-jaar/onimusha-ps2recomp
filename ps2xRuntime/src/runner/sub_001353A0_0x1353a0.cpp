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

// Function: sub_001353A0
// Address: 0x1353a0 - 0x1354ac
void sub_001353A0_0x1353a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001353A0_0x1353a0");
#endif

    ctx->pc = 0x1353a0u;

    // 0x1353a0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1353a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1353a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1353a8: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1353a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1353ac: 0x84a90002  lh          $t1, 0x2($a1)
    ctx->pc = 0x1353acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1353b0: 0x84a80004  lh          $t0, 0x4($a1)
    ctx->pc = 0x1353b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1353b4: 0x30c70fff  andi        $a3, $a2, 0xFFF
    ctx->pc = 0x1353b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1353b8: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1353bc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1353bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1353c0: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x1353c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1353c4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1353c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1353c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1353c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1353cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1353d0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1353d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1353d4: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x1353d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1353d8: 0xc4e90000  lwc1        $f9, 0x0($a3)
    ctx->pc = 0x1353d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1353dc: 0x31260fff  andi        $a2, $t1, 0xFFF
    ctx->pc = 0x1353dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1353e0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1353e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1353e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1353e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1353e8: 0x25260400  addiu       $a2, $t1, 0x400
    ctx->pc = 0x1353e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1353ec: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x1353ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1353f0: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1353f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1353f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1353f8: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1353f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1353fc: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x1353fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135400: 0x31060fff  andi        $a2, $t0, 0xFFF
    ctx->pc = 0x135400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    // 0x135404: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x135404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x135408: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x135408u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x13540c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x13540cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x135410: 0x25060400  addiu       $a2, $t0, 0x400
    ctx->pc = 0x135410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x135414: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x135414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x135418: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13541c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x135420: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x135420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135424: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x135424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x135428: 0x46092082  mul.s       $f2, $f4, $f9
    ctx->pc = 0x135428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x13542c: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x13542cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x135430: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x135430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x135434: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x135434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x135438: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x135438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13543c: 0x46082002  mul.s       $f0, $f4, $f8
    ctx->pc = 0x13543cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x135440: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x135440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x135444: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x135444u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x135448: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x135448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13544c: 0x46071942  mul.s       $f5, $f3, $f7
    ctx->pc = 0x13544cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x135450: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x135450u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x135454: 0x4605485c  madd.s      $f1, $f9, $f5
    ctx->pc = 0x135454u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x135458: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x135458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13545c: 0x46073102  mul.s       $f4, $f6, $f7
    ctx->pc = 0x13545cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x135460: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x135460u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[8]));
    // 0x135464: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x135464u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x135468: 0x460448dc  madd.s      $f3, $f9, $f4
    ctx->pc = 0x135468u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[9], ctx->f[4]));
    // 0x13546c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x13546cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x135470: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x135470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x135474: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x135474u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[9]));
    // 0x135478: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x135478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13547c: 0x4605409c  madd.s      $f2, $f8, $f5
    ctx->pc = 0x13547cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x135480: 0x4609081a  mula.s      $f1, $f9
    ctx->pc = 0x135480u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[9]));
    // 0x135484: 0x4604405c  madd.s      $f1, $f8, $f4
    ctx->pc = 0x135484u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x135488: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x135488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13548c: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x13548cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x135490: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x135490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x135494: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x135494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x135498: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x135498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x13549c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x13549cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1354a0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1354a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1354a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1354A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1354A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354A4u;
        // 0x1354a8: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1354A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1354ACu;
}
