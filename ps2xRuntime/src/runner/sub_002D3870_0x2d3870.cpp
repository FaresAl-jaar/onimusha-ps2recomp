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

// Function: sub_002D3870
// Address: 0x2d3870 - 0x2d38f0
void sub_002D3870_0x2d3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3870_0x2d3870");
#endif

    switch (ctx->pc) {
        case 0x2d3884u: goto label_2d3884;
        case 0x2d38c8u: goto label_2d38c8;
        default: break;
    }

    ctx->pc = 0x2d3870u;

    // 0x2d3870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d387c: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D387Cu;
    SET_GPR_U32(ctx, 31, 0x2D3884u);
    ctx->pc = 0x2D3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D387Cu;
    // 0x2d3880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D387Cu, 0x2D3884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3884u;
label_2d3884:
    // 0x2d3884: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d3888: 0x30630011  andi        $v1, $v1, 0x11
    ctx->pc = 0x2d3888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)17);
    // 0x2d388c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D388Cu;
    {
        const bool branch_taken_0x2d388c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d388c) {
            ctx->pc = 0x2D38A0u;
            goto label_2d38a0;
        }
    }
    ctx->pc = 0x2D3894u;
    // 0x2d3894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3894u;
    {
        const bool branch_taken_0x2d3894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3894) {
            ctx->pc = 0x2D38A8u;
            goto label_2d38a8;
        }
    }
    ctx->pc = 0x2D389Cu;
    // 0x2d389c: 0x0  nop
    ctx->pc = 0x2d389cu;
    // NOP
label_2d38a0:
    // 0x2d38a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D38A0u;
    {
        const bool branch_taken_0x2d38a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38A0u;
        // 0x2d38a4: 0xa2000136  sb          $zero, 0x136($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 310), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38a0) {
            ctx->pc = 0x2D38E0u;
            goto label_2d38e0;
        }
    }
    ctx->pc = 0x2D38A8u;
label_2d38a8:
    // 0x2d38a8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2d38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2d38ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d38b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2d38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2d38b4: 0xa2020136  sb          $v0, 0x136($s0)
    ctx->pc = 0x2d38b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 310), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d38b8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d38b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d38bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2d38bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2d38c0: 0xc0b4394  jal         func_2D0E50
    ctx->pc = 0x2D38C0u;
    SET_GPR_U32(ctx, 31, 0x2D38C8u);
    ctx->pc = 0x2D38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38C0u;
    // 0x2d38c4: 0x92040015  lbu         $a0, 0x15($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0E50u, 0x2D38C0u, 0x2D38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38C8u;
label_2d38c8:
    // 0x2d38c8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2d38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2d38cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d38ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d38d0: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x2d38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d38d4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2d38d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d38d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d38d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d38dc: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x2d38dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_2d38e0:
    // 0x2d38e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d38e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d38e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d38e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38E8u;
        // 0x2d38ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D38F0u;
}
