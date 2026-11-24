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

// Function: sub_001A2960
// Address: 0x1a2960 - 0x1a2c08
void sub_001A2960_0x1a2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2960_0x1a2960");
#endif

    switch (ctx->pc) {
        case 0x1a29acu: goto label_1a29ac;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29ccu: goto label_1a29cc;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29fcu: goto label_1a29fc;
        case 0x1a2a0cu: goto label_1a2a0c;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2be0u: goto label_1a2be0;
        default: break;
    }

    ctx->pc = 0x1a2960u;

    // 0x1a2960: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a2960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a2964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a296c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a2970: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a2970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a297c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1a297cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a2980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2984: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1a2984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a2988: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1a2988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a298c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a298cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2990: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a2994: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x1a2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2998: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1a2998u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1a299c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a299cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a29a0: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1a29a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1a29a4: 0xc041482  jal         func_105208
    ctx->pc = 0x1A29A4u;
    SET_GPR_U32(ctx, 31, 0x1A29ACu);
    ctx->pc = 0x1A29A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29A4u;
    // 0x1a29a8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x1A29A4u, 0x1A29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29ACu;
label_1a29ac:
    // 0x1a29ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a29acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29b0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a29b4: 0xc041442  jal         func_105108
    ctx->pc = 0x1A29B4u;
    SET_GPR_U32(ctx, 31, 0x1A29BCu);
    ctx->pc = 0x1A29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29B4u;
    // 0x1a29b8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A29B4u, 0x1A29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29BCu;
label_1a29bc:
    // 0x1a29bc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a29c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a29c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29c4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1A29C4u;
    SET_GPR_U32(ctx, 31, 0x1A29CCu);
    ctx->pc = 0x1A29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29C4u;
    // 0x1a29c8: 0x262600f0  addiu       $a2, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1A29C4u, 0x1A29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29CCu;
label_1a29cc:
    // 0x1a29cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a29d0: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x1a29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1a29d4: 0xc041482  jal         func_105208
    ctx->pc = 0x1A29D4u;
    SET_GPR_U32(ctx, 31, 0x1A29DCu);
    ctx->pc = 0x1A29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29D4u;
    // 0x1a29d8: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x1A29D4u, 0x1A29DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29DCu;
label_1a29dc:
    // 0x1a29dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a29e0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a29e4: 0xc041442  jal         func_105108
    ctx->pc = 0x1A29E4u;
    SET_GPR_U32(ctx, 31, 0x1A29ECu);
    ctx->pc = 0x1A29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29E4u;
    // 0x1a29e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A29E4u, 0x1A29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29ECu;
label_1a29ec:
    // 0x1a29ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a29f0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1a29f4: 0xc041442  jal         func_105108
    ctx->pc = 0x1A29F4u;
    SET_GPR_U32(ctx, 31, 0x1A29FCu);
    ctx->pc = 0x1A29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29F4u;
    // 0x1a29f8: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A29F4u, 0x1A29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29FCu;
label_1a29fc:
    // 0x1a29fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a2a00: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1a2a04: 0xc041460  jal         func_105180
    ctx->pc = 0x1A2A04u;
    SET_GPR_U32(ctx, 31, 0x1A2A0Cu);
    ctx->pc = 0x1A2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A04u;
    // 0x1a2a08: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A2A04u, 0x1A2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A0Cu;
label_1a2a0c:
    // 0x1a2a0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2a10: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a2a14: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2A14u;
    SET_GPR_U32(ctx, 31, 0x1A2A1Cu);
    ctx->pc = 0x1A2A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A14u;
    // 0x1a2a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2A14u, 0x1A2A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A1Cu;
label_1a2a1c:
    // 0x1a2a1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2a20: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1A2A20u;
    SET_GPR_U32(ctx, 31, 0x1A2A28u);
    ctx->pc = 0x1A2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A20u;
    // 0x1a2a24: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1A2A20u, 0x1A2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A28u;
label_1a2a28:
    // 0x1a2a28: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2a2c: 0x3c03409c  lui         $v1, 0x409C
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16540 << 16));
    // 0x1a2a30: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1a2a30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2a34: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1a2a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a2a38: 0x3c03431c  lui         $v1, 0x431C
    ctx->pc = 0x1a2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17180 << 16));
    // 0x1a2a3c: 0x46171081  sub.s       $f2, $f2, $f23
    ctx->pc = 0x1a2a3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x1a2a40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a2a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a2a44: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1a2a44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2a48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a2a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2a4c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a2a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a2a50: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1a2a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x1a2a54: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a2a54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a2a58: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x1a2a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1a2a5c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1a2a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1a2a60: 0x46020541  sub.s       $f21, $f0, $f2
    ctx->pc = 0x1a2a60u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a2a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2a68: 0x0  nop
    ctx->pc = 0x1a2a68u;
    // NOP
    // 0x1a2a6c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a2a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2a70: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x1A2A70u;
    {
        const bool branch_taken_0x1a2a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A70u;
        // 0x1a2a74: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a70) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2A78u;
    // 0x1a2a78: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a2a7c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A2A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A84u);
    ctx->pc = 0x1A2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A7Cu;
    // 0x1a2a80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A2A7Cu, 0x1A2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A84u;
label_1a2a84:
    // 0x1a2a84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a2a88: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1a2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a2a8c: 0xc041442  jal         func_105108
    ctx->pc = 0x1A2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A94u);
    ctx->pc = 0x1A2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A8Cu;
    // 0x1a2a90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A2A8Cu, 0x1A2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A94u;
label_1a2a94:
    // 0x1a2a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a9c: 0xc0686c8  jal         func_1A1B20
    ctx->pc = 0x1A2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A2AA4u);
    ctx->pc = 0x1A2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A9Cu;
    // 0x1a2aa0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B20u, 0x1A2A9Cu, 0x1A2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AA4u;
label_1a2aa4:
    // 0x1a2aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2aa8: 0x0  nop
    ctx->pc = 0x1a2aa8u;
    // NOP
    // 0x1a2aac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1a2aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2ab0: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x1A2AB0u;
    {
        const bool branch_taken_0x1a2ab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB0u;
        // 0x1a2ab4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ab0) {
            ctx->pc = 0x1A2BD0u;
            goto label_1a2bd0;
        }
    }
    ctx->pc = 0x1A2AB8u;
    // 0x1a2ab8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x1A2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AB8u;
    // 0x1a2abc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1A2AB8u, 0x1A2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2ac4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a2ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2acc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1a2accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a2ad0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A2AD0u;
    SET_GPR_U32(ctx, 31, 0x1A2AD8u);
    ctx->pc = 0x1A2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AD0u;
    // 0x1a2ad4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A2AD0u, 0x1A2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AD8u;
label_1a2ad8:
    // 0x1a2ad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a2adc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1a2adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2ae0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A2AE0u;
    SET_GPR_U32(ctx, 31, 0x1A2AE8u);
    ctx->pc = 0x1A2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AE0u;
    // 0x1a2ae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A2AE0u, 0x1A2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AE8u;
label_1a2ae8:
    // 0x1a2ae8: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x1a2ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1a2aec: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1a2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1a2af0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1a2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1a2af4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a2af8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2afc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1a2afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a2b00: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1a2b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a2b04: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x1a2b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a2b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2b0c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1a2b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a2b10: 0xc0689f8  jal         func_1A27E0
    ctx->pc = 0x1A2B10u;
    SET_GPR_U32(ctx, 31, 0x1A2B18u);
    ctx->pc = 0x1A2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B10u;
    // 0x1a2b14: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A27E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A27E0u, 0x1A2B10u, 0x1A2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B18u;
label_1a2b18:
    // 0x1a2b18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a2b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a2b1c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1a2b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a2b20: 0xc041460  jal         func_105180
    ctx->pc = 0x1A2B20u;
    SET_GPR_U32(ctx, 31, 0x1A2B28u);
    ctx->pc = 0x1A2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B20u;
    // 0x1a2b24: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A2B20u, 0x1A2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B28u;
label_1a2b28:
    // 0x1a2b28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a2b2c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1a2b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a2b30: 0xc041442  jal         func_105108
    ctx->pc = 0x1A2B30u;
    SET_GPR_U32(ctx, 31, 0x1A2B38u);
    ctx->pc = 0x1A2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B30u;
    // 0x1a2b34: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A2B30u, 0x1A2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B38u;
label_1a2b38:
    // 0x1a2b38: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1a2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2b40: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a2b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2b44: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a2b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b48: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x1a2b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b4c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1a2b4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1a2b50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a2b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a2b54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2b58: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x1a2b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x1a2b5c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1a2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b60: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x1a2b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a2b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a2b68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2b6c: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x1a2b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x1a2b70: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1a2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b74: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x1a2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a2b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a2b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2b80: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x1a2b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x1a2b84: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1a2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b88: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1a2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b8c: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x1a2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b90: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a2b90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a2b94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b98: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x1a2b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1a2b9c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1a2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2ba0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1a2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2ba4: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1a2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2ba8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a2ba8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a2bac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bb0: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x1a2bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1a2bb4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1a2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bb8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1a2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bbc: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x1a2bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2bc0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a2bc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a2bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bc8: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x1a2bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1a2bcc: 0x0  nop
    ctx->pc = 0x1a2bccu;
    // NOP
label_1a2bd0:
    // 0x1a2bd0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1a2bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a2bd4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1a2bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a2bd8: 0xc041442  jal         func_105108
    ctx->pc = 0x1A2BD8u;
    SET_GPR_U32(ctx, 31, 0x1A2BE0u);
    ctx->pc = 0x1A2BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BD8u;
    // 0x1a2bdc: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A2BD8u, 0x1A2BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BE0u;
label_1a2be0:
    // 0x1a2be0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2be4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a2be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2be8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1a2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a2bec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a2becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2bf0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1a2bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a2bf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a2bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2bf8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2bfc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C08u;
}
