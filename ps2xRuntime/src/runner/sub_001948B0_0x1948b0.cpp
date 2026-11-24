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

// Function: sub_001948B0
// Address: 0x1948b0 - 0x1949b4
void sub_001948B0_0x1948b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001948B0_0x1948b0");
#endif

    switch (ctx->pc) {
        case 0x194900u: goto label_194900;
        case 0x194914u: goto label_194914;
        case 0x194920u: goto label_194920;
        case 0x194938u: goto label_194938;
        case 0x19494cu: goto label_19494c;
        default: break;
    }

    ctx->pc = 0x1948b0u;

    // 0x1948b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1948b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1948b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1948b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1948b8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1948b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1948bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1948bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1948c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1948c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1948c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1948c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1948c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1948cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1948ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1948d0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1948d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1948d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1948d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1948d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1948d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1948dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1948dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1948e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1948e4: 0x8f8386b4  lw          $v1, -0x794C($gp)
    ctx->pc = 0x1948e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x1948e8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1948e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1948ec: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x1948f0: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1948f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1948f4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1948f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1948f8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1948F8u;
    SET_GPR_U32(ctx, 31, 0x194900u);
    ctx->pc = 0x1948FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948F8u;
    // 0x1948fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1948F8u, 0x194900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194904: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x194908: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19490c: 0xc041460  jal         func_105180
    ctx->pc = 0x19490Cu;
    SET_GPR_U32(ctx, 31, 0x194914u);
    ctx->pc = 0x194910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19490Cu;
    // 0x194910: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19490Cu, 0x194914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194914u;
label_194914:
    // 0x194914: 0xc7b40054  lwc1        $f20, 0x54($sp)
    ctx->pc = 0x194914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194918: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194918u;
        // 0x19491c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194918) {
            ctx->pc = 0x194988u;
            goto label_194988;
        }
    }
    ctx->pc = 0x194920u;
label_194920:
    // 0x194920: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x194920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194924: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x194928: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19492c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194930: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194930u;
    SET_GPR_U32(ctx, 31, 0x194938u);
    ctx->pc = 0x194934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194930u;
    // 0x194934: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194930u, 0x194938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194938u;
label_194938:
    // 0x194938: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x194938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19493c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x194940: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x194940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194944: 0xc041460  jal         func_105180
    ctx->pc = 0x194944u;
    SET_GPR_U32(ctx, 31, 0x19494Cu);
    ctx->pc = 0x194948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194944u;
    // 0x194948: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194944u, 0x19494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19494Cu;
label_19494c:
    // 0x19494c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19494cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194950: 0x0  nop
    ctx->pc = 0x194950u;
    // NOP
    // 0x194954: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x194954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194958: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x194958u;
    {
        const bool branch_taken_0x194958 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194958u;
        // 0x19495c: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194958) {
            ctx->pc = 0x194978u;
            goto label_194978;
        }
    }
    ctx->pc = 0x194960u;
    // 0x194960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194964: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x194964u;
    {
        const bool branch_taken_0x194964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194964u;
        // 0x194968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194964) {
            ctx->pc = 0x194978u;
            goto label_194978;
        }
    }
    ctx->pc = 0x19496Cu;
    // 0x19496c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19496Cu;
    {
        const bool branch_taken_0x19496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19496c) {
            ctx->pc = 0x194998u;
            goto label_194998;
        }
    }
    ctx->pc = 0x194974u;
    // 0x194974: 0x0  nop
    ctx->pc = 0x194974u;
    // NOP
label_194978:
    // 0x194978: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x194978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19497c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x19497cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x194980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194984: 0x0  nop
    ctx->pc = 0x194984u;
    // NOP
label_194988:
    // 0x194988: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x19498c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19498cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x194990: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x194990u;
    {
        const bool branch_taken_0x194990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194990u;
        // 0x194994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194990) {
            ctx->pc = 0x194920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194920;
        }
    }
    ctx->pc = 0x194998u;
label_194998:
    // 0x194998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19499c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19499cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1949a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1949a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1949a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1949a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1949a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1949a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1949ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1949ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949ACu;
        // 0x1949b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1949ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1949B4u;
}
