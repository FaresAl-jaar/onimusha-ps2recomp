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

// Function: sub_001949C0
// Address: 0x1949c0 - 0x194ab0
void sub_001949C0_0x1949c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001949C0_0x1949c0");
#endif

    switch (ctx->pc) {
        case 0x194a10u: goto label_194a10;
        case 0x194a20u: goto label_194a20;
        case 0x194a38u: goto label_194a38;
        case 0x194a44u: goto label_194a44;
        case 0x194a50u: goto label_194a50;
        case 0x194a68u: goto label_194a68;
        case 0x194a74u: goto label_194a74;
        case 0x194a90u: goto label_194a90;
        default: break;
    }

    ctx->pc = 0x1949c0u;

    // 0x1949c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1949c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1949c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1949c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1949c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1949cc: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x1949ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x1949d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1949d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1949d4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1949d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1949d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1949d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1949dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1949dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1949e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1949e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1949e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1949e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1949ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1949ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1949f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1949f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1949f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1949f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D8E0u));
    // 0x1949fc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1949fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194a04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a08: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194A08u;
    SET_GPR_U32(ctx, 31, 0x194A10u);
    ctx->pc = 0x194A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A08u;
    // 0x194a0c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194A08u, 0x194A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A10u;
label_194a10:
    // 0x194a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a18: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194A18u;
    SET_GPR_U32(ctx, 31, 0x194A20u);
    ctx->pc = 0x194A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A18u;
    // 0x194a1c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194A18u, 0x194A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A20u;
label_194a20:
    // 0x194a20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194a24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x194a28: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x194a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194a2c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x194a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x194a30: 0xc041460  jal         func_105180
    ctx->pc = 0x194A30u;
    SET_GPR_U32(ctx, 31, 0x194A38u);
    ctx->pc = 0x194A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A30u;
    // 0x194a34: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194A30u, 0x194A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A38u;
label_194a38:
    // 0x194a38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194a3c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x194A3Cu;
    SET_GPR_U32(ctx, 31, 0x194A44u);
    ctx->pc = 0x194A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A3Cu;
    // 0x194a40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x194A3Cu, 0x194A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A44u;
label_194a44:
    // 0x194a44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194a48: 0xc041468  jal         func_1051A0
    ctx->pc = 0x194A48u;
    SET_GPR_U32(ctx, 31, 0x194A50u);
    ctx->pc = 0x194A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A48u;
    // 0x194a4c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x194A48u, 0x194A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A50u;
label_194a50:
    // 0x194a50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x194a54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x194a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x194a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194a5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194a60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x194A60u;
    SET_GPR_U32(ctx, 31, 0x194A68u);
    ctx->pc = 0x194A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A60u;
    // 0x194a64: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x194A60u, 0x194A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A68u;
label_194a68:
    // 0x194a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a6c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x194A6Cu;
    SET_GPR_U32(ctx, 31, 0x194A74u);
    ctx->pc = 0x194A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A6Cu;
    // 0x194a70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x194A6Cu, 0x194A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A74u;
label_194a74:
    // 0x194a74: 0x0  nop
    ctx->pc = 0x194a74u;
    // NOP
    // 0x194a78: 0x0  nop
    ctx->pc = 0x194a78u;
    // NOP
    // 0x194a7c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x194a7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x194a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x194a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a88: 0xc0414dc  jal         func_105370
    ctx->pc = 0x194A88u;
    SET_GPR_U32(ctx, 31, 0x194A90u);
    ctx->pc = 0x194A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A88u;
    // 0x194a8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x194A88u, 0x194A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A90u;
label_194a90:
    // 0x194a90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194a94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194a98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x194a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194a9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x194a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194aa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194aa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x194AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194AB0u;
}
