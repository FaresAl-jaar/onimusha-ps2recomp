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

// Function: sub_00391530
// Address: 0x391530 - 0x3915f8
void sub_00391530_0x391530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391530_0x391530");
#endif

    ctx->pc = 0x391530u;

    // 0x391530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391534: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x391534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x391538: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x391538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39153c: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x39153cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x391540: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x391540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x391544: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x391544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x391548: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x391548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x39154c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x39154cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x391550: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x391550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x391554: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x391554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x391558: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x391558u;
    {
        const bool branch_taken_0x391558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391558u;
        // 0x39155c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391558) {
            ctx->pc = 0x3915A8u;
            goto label_3915a8;
        }
    }
    ctx->pc = 0x391560u;
    // 0x391560: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x391560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x391564: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x391564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x391568: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x391568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39156c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x39156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391570: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x391570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391574: 0xe4830060  swc1        $f3, 0x60($a0)
    ctx->pc = 0x391574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x391578: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x391578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x39157c: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x39157cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x391580: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x391580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x391584: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x391584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x391588: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x391588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39158c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x39158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391590: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x391590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391594: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x391594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x391598: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x391598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x39159c: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x39159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3915a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3915A0u;
    {
        const bool branch_taken_0x3915a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3915A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915A0u;
        // 0x3915a4: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915a0) {
            ctx->pc = 0x3915F0u;
            goto label_3915f0;
        }
    }
    ctx->pc = 0x3915A8u;
label_3915a8:
    // 0x3915a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3915a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3915ac: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3915acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3915b0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3915b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3915b4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3915b8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3915b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3915bc: 0xe4830060  swc1        $f3, 0x60($a0)
    ctx->pc = 0x3915bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x3915c0: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x3915c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x3915c4: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x3915c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x3915c8: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3915c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3915cc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3915ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3915d0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3915d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3915d4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3915d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3915d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3915d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3915dc: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x3915dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3915e0: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x3915e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3915e4: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x3915e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3915e8: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x3915e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x3915ec: 0x0  nop
    ctx->pc = 0x3915ecu;
    // NOP
label_3915f0:
    // 0x3915f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3915F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915F0u;
        // 0x3915f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3915F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3915F8u;
}
