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

// Function: sub_00135520
// Address: 0x135520 - 0x1355d0
void sub_00135520_0x135520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135520_0x135520");
#endif

    ctx->pc = 0x135520u;

    // 0x135520: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x135520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x135524: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x135524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x135528: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x135528u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x13552c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x13552cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x135530: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x135530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x135534: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135538: 0x24e30400  addiu       $v1, $a3, 0x400
    ctx->pc = 0x135538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x13553c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x135540: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x135540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x135544: 0x24e76540  addiu       $a3, $a3, 0x6540
    ctx->pc = 0x135544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25920));
    // 0x135548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13554c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x135550: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x135550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x135554: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x135554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135558: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x135558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13555c: 0x30c30fff  andi        $v1, $a2, 0xFFF
    ctx->pc = 0x13555cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x135560: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135564: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x135568: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x135568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x13556c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x135570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135574: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x135574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135578: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x135578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13557c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135580: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x135580u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x135584: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x135584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x135588: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x135588u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13558c: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x13558cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x135590: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x135590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x135594: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x135594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x135598: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x135598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13559c: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x13559cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1355a0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1355a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1355a4: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x1355a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1355a8: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x1355a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1355ac: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1355acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1355b0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1355b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1355b4: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x1355b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1355b8: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1355b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1355bc: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1355bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1355c0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1355c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1355c4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1355c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1355c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1355C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1355CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355C8u;
        // 0x1355cc: 0xf8800030  sqc2        $vf0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1355C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1355D0u;
}
