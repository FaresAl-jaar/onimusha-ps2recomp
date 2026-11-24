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

// Function: sub_00143350
// Address: 0x143350 - 0x1433bc
void sub_00143350_0x143350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143350_0x143350");
#endif

    ctx->pc = 0x143350u;

    // 0x143350: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x143350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x143354: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x143358: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x143358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14335c: 0x24e76540  addiu       $a3, $a3, 0x6540
    ctx->pc = 0x14335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25920));
    // 0x143360: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x143364: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x143364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x143368: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x143368u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14336c: 0x30660fff  andi        $a2, $v1, 0xFFF
    ctx->pc = 0x14336cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x143370: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x143370u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x143374: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x143378: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x143378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14337c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x14337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x143380: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x143380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143388: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x143388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14338c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x143390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x143390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x143394: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x143394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x143398: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x143398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14339c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14339cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1433a0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1433a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1433a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1433a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1433a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1433a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1433ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1433acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1433b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1433b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1433b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1433B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1433B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433B4u;
        // 0x1433b8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1433BCu;
}
