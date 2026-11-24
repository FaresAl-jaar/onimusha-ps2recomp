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

// Function: sub_00302A70
// Address: 0x302a70 - 0x302bac
void sub_00302A70_0x302a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302A70_0x302a70");
#endif

    switch (ctx->pc) {
        case 0x302ab8u: goto label_302ab8;
        case 0x302af8u: goto label_302af8;
        case 0x302b20u: goto label_302b20;
        case 0x302b48u: goto label_302b48;
        case 0x302b78u: goto label_302b78;
        case 0x302b90u: goto label_302b90;
        default: break;
    }

    ctx->pc = 0x302a70u;

    // 0x302a70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x302a74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302a78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x302a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x302a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x302a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x302a80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x302a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x302a88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x302a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302a90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x302a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a94: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x302a98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x302a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a9c: 0x908305d4  lbu         $v1, 0x5D4($a0)
    ctx->pc = 0x302a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1492)));
    // 0x302aa0: 0x26660590  addiu       $a2, $s3, 0x590
    ctx->pc = 0x302aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1424));
    // 0x302aa4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x302aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x302aa8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x302aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x302aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ab0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x302AB0u;
    SET_GPR_U32(ctx, 31, 0x302AB8u);
    ctx->pc = 0x302AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AB0u;
    // 0x302ab4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x302AB0u, 0x302AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AB8u;
label_302ab8:
    // 0x302ab8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x302ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x302abc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x302abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302ac0: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x302ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x302ac4: 0x7a6305a0  lq          $v1, 0x5A0($s3)
    ctx->pc = 0x302ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 1440)));
    // 0x302ac8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x302ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x302acc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x302accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ad0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x302ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x302ad4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x302ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x302ad8: 0x926205d6  lbu         $v0, 0x5D6($s3)
    ctx->pc = 0x302ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1494)));
    // 0x302adc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302ADCu;
    {
        const bool branch_taken_0x302adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ADCu;
        // 0x302ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302adc) {
            ctx->pc = 0x302B10u;
            goto label_302b10;
        }
    }
    ctx->pc = 0x302AE4u;
    // 0x302ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ae8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x302ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x302aec: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x302aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x302af0: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x302AF0u;
    SET_GPR_U32(ctx, 31, 0x302AF8u);
    ctx->pc = 0x302AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AF0u;
    // 0x302af4: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x302AF0u, 0x302AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AF8u;
label_302af8:
    // 0x302af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302AF8u;
    {
        const bool branch_taken_0x302af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302af8) {
            ctx->pc = 0x302B10u;
            goto label_302b10;
        }
    }
    ctx->pc = 0x302B00u;
    // 0x302b00: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x302b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b04: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x302b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x302b08: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x302b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b0c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x302b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_302b10:
    // 0x302b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b14: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x302b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x302b18: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x302B18u;
    SET_GPR_U32(ctx, 31, 0x302B20u);
    ctx->pc = 0x302B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B18u;
    // 0x302b1c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x302B18u, 0x302B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B20u;
label_302b20:
    // 0x302b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302B20u;
    {
        const bool branch_taken_0x302b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b20) {
            ctx->pc = 0x302B38u;
            goto label_302b38;
        }
    }
    ctx->pc = 0x302B28u;
    // 0x302b28: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x302b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x302B2Cu;
    {
        const bool branch_taken_0x302b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B2Cu;
        // 0x302b30: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b2c) {
            ctx->pc = 0x302B68u;
            goto label_302b68;
        }
    }
    ctx->pc = 0x302B34u;
    // 0x302b34: 0x0  nop
    ctx->pc = 0x302b34u;
    // NOP
label_302b38:
    // 0x302b38: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x302b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x302b3c: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x302b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x302b40: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x302B40u;
    SET_GPR_U32(ctx, 31, 0x302B48u);
    ctx->pc = 0x302B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B40u;
    // 0x302b44: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x302B40u, 0x302B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B48u;
label_302b48:
    // 0x302b48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302B48u;
    {
        const bool branch_taken_0x302b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b48) {
            ctx->pc = 0x302B60u;
            goto label_302b60;
        }
    }
    ctx->pc = 0x302B50u;
    // 0x302b50: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x302b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302B54u;
    {
        const bool branch_taken_0x302b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B54u;
        // 0x302b58: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b54) {
            ctx->pc = 0x302B68u;
            goto label_302b68;
        }
    }
    ctx->pc = 0x302B5Cu;
    // 0x302b5c: 0x0  nop
    ctx->pc = 0x302b5cu;
    // NOP
label_302b60:
    // 0x302b60: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x302b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x302b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_302b68:
    // 0x302b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x302b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x302b70: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x302B70u;
    SET_GPR_U32(ctx, 31, 0x302B78u);
    ctx->pc = 0x302B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B70u;
    // 0x302b74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x302B70u, 0x302B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B78u;
label_302b78:
    // 0x302b78: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x302b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x302b7c: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x302b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x302b80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b84: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x302b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x302b88: 0xc097384  jal         func_25CE10
    ctx->pc = 0x302B88u;
    SET_GPR_U32(ctx, 31, 0x302B90u);
    ctx->pc = 0x302B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B88u;
    // 0x302b8c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x302B88u, 0x302B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B90u;
label_302b90:
    // 0x302b90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x302b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x302b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x302BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BA4u;
        // 0x302ba8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302BACu;
}
