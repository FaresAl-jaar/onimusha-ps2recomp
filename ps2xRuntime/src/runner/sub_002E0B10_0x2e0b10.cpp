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

// Function: sub_002E0B10
// Address: 0x2e0b10 - 0x2e0c4c
void sub_002E0B10_0x2e0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B10_0x2e0b10");
#endif

    switch (ctx->pc) {
        case 0x2e0b50u: goto label_2e0b50;
        case 0x2e0b64u: goto label_2e0b64;
        case 0x2e0b84u: goto label_2e0b84;
        case 0x2e0bd0u: goto label_2e0bd0;
        case 0x2e0be0u: goto label_2e0be0;
        case 0x2e0bf0u: goto label_2e0bf0;
        case 0x2e0c04u: goto label_2e0c04;
        case 0x2e0c24u: goto label_2e0c24;
        default: break;
    }

    ctx->pc = 0x2e0b10u;

    // 0x2e0b10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e0b14: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e0b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0b1c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2e0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x2e0b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0b24: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2e0b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0b2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e0b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0b30: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x2e0b30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e0b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b38: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e0b3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b40: 0x2484a820  addiu       $a0, $a0, -0x57E0
    ctx->pc = 0x2e0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
    // 0x2e0b44: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x2e0b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x2e0b48: 0xc04f7a4  jal         func_13DE90
    ctx->pc = 0x2E0B48u;
    SET_GPR_U32(ctx, 31, 0x2E0B50u);
    ctx->pc = 0x2E0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B48u;
    // 0x2e0b4c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x2E0B48u, 0x2E0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e0b54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2e0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2e0b58: 0x2484a820  addiu       $a0, $a0, -0x57E0
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
    // 0x2e0b5c: 0xc04e710  jal         func_139C40
    ctx->pc = 0x2E0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B64u);
    ctx->pc = 0x2E0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B5Cu;
    // 0x2e0b60: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2E0B5Cu, 0x2E0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B64u;
label_2e0b64:
    // 0x2e0b64: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e0b68: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e0b6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e0b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b70: 0x2484a820  addiu       $a0, $a0, -0x57E0
    ctx->pc = 0x2e0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944800));
    // 0x2e0b74: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x2e0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x2e0b78: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0b7c: 0xc04e744  jal         func_139D10
    ctx->pc = 0x2E0B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B84u);
    ctx->pc = 0x2E0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B7Cu;
    // 0x2e0b80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x2E0B7Cu, 0x2E0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B84u;
label_2e0b84:
    // 0x2e0b84: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2e0b84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0b88: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e0b8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e0b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0b90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2e0b94: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2e0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2e0b98: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e0b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0b9c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e0ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0ba4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x2e0ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x2e0ba8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2e0ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2e0bac: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2e0bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0bb0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2e0bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0bb4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2e0bb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e0bb8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2e0bbc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e0bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0bc0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2e0bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e0bc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e0bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0bc8: 0xc04e720  jal         func_139C80
    ctx->pc = 0x2E0BC8u;
    SET_GPR_U32(ctx, 31, 0x2E0BD0u);
    ctx->pc = 0x2E0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BC8u;
    // 0x2e0bcc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x2E0BC8u, 0x2E0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BD0u;
label_2e0bd0:
    // 0x2e0bd0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2e0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2e0bd4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e0bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0bd8: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x2E0BD8u;
    SET_GPR_U32(ctx, 31, 0x2E0BE0u);
    ctx->pc = 0x2E0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BD8u;
    // 0x2e0bdc: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x2E0BD8u, 0x2E0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BE0u;
label_2e0be0:
    // 0x2e0be0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2e0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2e0be4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e0be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0be8: 0xc04e714  jal         func_139C50
    ctx->pc = 0x2E0BE8u;
    SET_GPR_U32(ctx, 31, 0x2E0BF0u);
    ctx->pc = 0x2E0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BE8u;
    // 0x2e0bec: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C50u, 0x2E0BE8u, 0x2E0BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BF0u;
label_2e0bf0:
    // 0x2e0bf0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2e0bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2e0bf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2e0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2e0bf8: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2e0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2e0bfc: 0xc04e710  jal         func_139C40
    ctx->pc = 0x2E0BFCu;
    SET_GPR_U32(ctx, 31, 0x2E0C04u);
    ctx->pc = 0x2E0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BFCu;
    // 0x2e0c00: 0x34450001  ori         $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2E0BFCu, 0x2E0C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C04u;
label_2e0c04:
    // 0x2e0c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2e0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2e0c0c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2e0c10: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2e0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2e0c14: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0c18: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e0c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e0c1c: 0xc04eab0  jal         func_13AAC0
    ctx->pc = 0x2E0C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C24u);
    ctx->pc = 0x2E0C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C1Cu;
    // 0x2e0c20: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAC0u, 0x2E0C1Cu, 0x2E0C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C24u;
label_2e0c24:
    // 0x2e0c24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0C24u;
    {
        const bool branch_taken_0x2e0c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c24) {
            ctx->pc = 0x2E0C38u;
            goto label_2e0c38;
        }
    }
    ctx->pc = 0x2E0C2Cu;
    // 0x2e0c2c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2e0c2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0c30: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x2e0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x2e0c34: 0x0  nop
    ctx->pc = 0x2e0c34u;
    // NOP
label_2e0c38:
    // 0x2e0c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C44u;
        // 0x2e0c48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C4Cu;
}
