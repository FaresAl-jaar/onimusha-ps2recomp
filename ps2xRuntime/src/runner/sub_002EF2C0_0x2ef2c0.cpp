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

// Function: sub_002EF2C0
// Address: 0x2ef2c0 - 0x2ef3a0
void sub_002EF2C0_0x2ef2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF2C0_0x2ef2c0");
#endif

    ctx->pc = 0x2ef2c0u;

    // 0x2ef2c0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2ef2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef2c4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2ef2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef2c8: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x2ef2c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x2ef2cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef2d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF2D0u;
    {
        const bool branch_taken_0x2ef2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2D0u;
        // 0x2ef2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2d0) {
            ctx->pc = 0x2EF2E0u;
            goto label_2ef2e0;
        }
    }
    ctx->pc = 0x2EF2D8u;
    // 0x2ef2d8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2EF2D8u;
    {
        const bool branch_taken_0x2ef2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2d8) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF2E0u;
label_2ef2e0:
    // 0x2ef2e0: 0x460c1000  add.s       $f0, $f2, $f12
    ctx->pc = 0x2ef2e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2ef2e4: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x2ef2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2ef2e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef2e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef2ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF2ECu;
    {
        const bool branch_taken_0x2ef2ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2ECu;
        // 0x2ef2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2ec) {
            ctx->pc = 0x2EF300u;
            goto label_2ef300;
        }
    }
    ctx->pc = 0x2EF2F4u;
    // 0x2ef2f4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EF2F4u;
    {
        const bool branch_taken_0x2ef2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2f4) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF2FCu;
    // 0x2ef2fc: 0x0  nop
    ctx->pc = 0x2ef2fcu;
    // NOP
label_2ef300:
    // 0x2ef300: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ef300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ef304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef308: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2ef308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef30c: 0x460d00c2  mul.s       $f3, $f0, $f13
    ctx->pc = 0x2ef30cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2ef310: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x2ef310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x2ef314: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ef314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef318: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ef318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ef31c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef320: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF320u;
    {
        const bool branch_taken_0x2ef320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF320u;
        // 0x2ef324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef320) {
            ctx->pc = 0x2EF330u;
            goto label_2ef330;
        }
    }
    ctx->pc = 0x2EF328u;
    // 0x2ef328: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EF328u;
    {
        const bool branch_taken_0x2ef328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef328) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF330u;
label_2ef330:
    // 0x2ef330: 0x460c1000  add.s       $f0, $f2, $f12
    ctx->pc = 0x2ef330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2ef334: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2ef334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ef338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef33c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF33Cu;
    {
        const bool branch_taken_0x2ef33c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF33Cu;
        // 0x2ef340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef33c) {
            ctx->pc = 0x2EF350u;
            goto label_2ef350;
        }
    }
    ctx->pc = 0x2EF344u;
    // 0x2ef344: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EF344u;
    {
        const bool branch_taken_0x2ef344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef344) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF34Cu;
    // 0x2ef34c: 0x0  nop
    ctx->pc = 0x2ef34cu;
    // NOP
label_2ef350:
    // 0x2ef350: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2ef350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef354: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ef354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef358: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x2ef358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x2ef35c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ef35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ef360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef364: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF364u;
    {
        const bool branch_taken_0x2ef364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF364u;
        // 0x2ef368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef364) {
            ctx->pc = 0x2EF378u;
            goto label_2ef378;
        }
    }
    ctx->pc = 0x2EF36Cu;
    // 0x2ef36c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF36Cu;
    {
        const bool branch_taken_0x2ef36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef36c) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF374u;
    // 0x2ef374: 0x0  nop
    ctx->pc = 0x2ef374u;
    // NOP
label_2ef378:
    // 0x2ef378: 0x460c1000  add.s       $f0, $f2, $f12
    ctx->pc = 0x2ef378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2ef37c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2ef37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ef380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef384: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF384u;
    {
        const bool branch_taken_0x2ef384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF384u;
        // 0x2ef388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef384) {
            ctx->pc = 0x2EF390u;
            goto label_2ef390;
        }
    }
    ctx->pc = 0x2EF38Cu;
    // 0x2ef38c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef390:
    // 0x2ef390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ef390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ef394: 0x0  nop
    ctx->pc = 0x2ef394u;
    // NOP
label_2ef398:
    // 0x2ef398: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF3A0u;
}
