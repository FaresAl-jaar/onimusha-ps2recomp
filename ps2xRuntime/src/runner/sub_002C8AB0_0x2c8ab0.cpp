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

// Function: sub_002C8AB0
// Address: 0x2c8ab0 - 0x2c8c9c
void sub_002C8AB0_0x2c8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8AB0_0x2c8ab0");
#endif

    switch (ctx->pc) {
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b74u: goto label_2c8b74;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8bb0u: goto label_2c8bb0;
        case 0x2c8bc4u: goto label_2c8bc4;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c20u: goto label_2c8c20;
        case 0x2c8c64u: goto label_2c8c64;
        default: break;
    }

    ctx->pc = 0x2c8ab0u;

    // 0x2c8ab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c8ab4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c8ab8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c8abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c8abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c8ac0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c8ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c8ac4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c8ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c8ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c8acc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c8accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c8ad4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c8ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8adc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c8adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8ae4: 0x8f8589e4  lw          $a1, -0x761C($gp)
    ctx->pc = 0x2c8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x2c8ae8: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C8AE8u;
    {
        const bool branch_taken_0x2c8ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AE8u;
        // 0x2c8aec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ae8) {
            ctx->pc = 0x2C8BD8u;
            goto label_2c8bd8;
        }
    }
    ctx->pc = 0x2C8AF0u;
    // 0x2c8af0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2c8af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2c8af4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C8AF4u;
    {
        const bool branch_taken_0x2c8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AF4u;
        // 0x2c8af8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8af4) {
            ctx->pc = 0x2C8BD8u;
            goto label_2c8bd8;
        }
    }
    ctx->pc = 0x2C8AFCu;
    // 0x2c8afc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C8AFCu;
    SET_GPR_U32(ctx, 31, 0x2C8B04u);
    ctx->pc = 0x2C8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8AFCu;
    // 0x2c8b00: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C8AFCu, 0x2C8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B04u;
label_2c8b04:
    // 0x2c8b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c8b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b0c: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8B14u);
    ctx->pc = 0x2C8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B0Cu;
    // 0x2c8b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8B0Cu, 0x2C8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B14u;
label_2c8b14:
    // 0x2c8b14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8B14u;
    {
        const bool branch_taken_0x2c8b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b14) {
            ctx->pc = 0x2C8B30u;
            goto label_2c8b30;
        }
    }
    ctx->pc = 0x2C8B1Cu;
    // 0x2c8b1c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2c8b20: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2c8b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8b24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8B24u;
    {
        const bool branch_taken_0x2c8b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b24) {
            ctx->pc = 0x2C8B38u;
            goto label_2c8b38;
        }
    }
    ctx->pc = 0x2C8B2Cu;
    // 0x2c8b2c: 0x0  nop
    ctx->pc = 0x2c8b2cu;
    // NOP
label_2c8b30:
    // 0x2c8b30: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2C8B30u;
    {
        const bool branch_taken_0x2c8b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B30u;
        // 0x2c8b34: 0xaf8089e4  sw          $zero, -0x761C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b30) {
            ctx->pc = 0x2C8BD8u;
            goto label_2c8bd8;
        }
    }
    ctx->pc = 0x2C8B38u;
label_2c8b38:
    // 0x2c8b38: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c8b3c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c8b40: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8B40u;
    {
        const bool branch_taken_0x2c8b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b40) {
            ctx->pc = 0x2C8BD0u;
            goto label_2c8bd0;
        }
    }
    ctx->pc = 0x2C8B48u;
    // 0x2c8b48: 0x92870002  lbu         $a3, 0x2($s4)
    ctx->pc = 0x2c8b48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c8b4c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c8b50: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c8b54: 0x92a600e9  lbu         $a2, 0xE9($s5)
    ctx->pc = 0x2c8b54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 233)));
    // 0x2c8b58: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c8b5c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c8b60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8b68: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8b6c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2C8B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C8B74u);
    ctx->pc = 0x2C8B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B6Cu;
    // 0x2c8b70: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2C8B6Cu, 0x2C8B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B74u;
label_2c8b74:
    // 0x2c8b74: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2c8b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c8b78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c8b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b7c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c8b80: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c8b84: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c8b88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c8b8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8b94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8b98: 0xc0ae964  jal         func_2BA590
    ctx->pc = 0x2C8B98u;
    SET_GPR_U32(ctx, 31, 0x2C8BA0u);
    ctx->pc = 0x2C8B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B98u;
    // 0x2c8b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA590u, 0x2C8B98u, 0x2C8BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BA0u;
label_2c8ba0:
    // 0x2c8ba0: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c8ba4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c8ba8: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2C8BA8u;
    SET_GPR_U32(ctx, 31, 0x2C8BB0u);
    ctx->pc = 0x2C8BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8BA8u;
    // 0x2c8bac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2C8BA8u, 0x2C8BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BB0u;
label_2c8bb0:
    // 0x2c8bb0: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c8bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c8bb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c8bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8bb8: 0x82a70103  lb          $a3, 0x103($s5)
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 259)));
    // 0x2c8bbc: 0xc0c7670  jal         func_31D9C0
    ctx->pc = 0x2C8BBCu;
    SET_GPR_U32(ctx, 31, 0x2C8BC4u);
    ctx->pc = 0x2C8BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8BBCu;
    // 0x2c8bc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9C0u, 0x2C8BBCu, 0x2C8BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BC4u;
label_2c8bc4:
    // 0x2c8bc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8BC4u;
    {
        const bool branch_taken_0x2c8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bc4) {
            ctx->pc = 0x2C8BD8u;
            goto label_2c8bd8;
        }
    }
    ctx->pc = 0x2C8BCCu;
    // 0x2c8bcc: 0x0  nop
    ctx->pc = 0x2c8bccu;
    // NOP
label_2c8bd0:
    // 0x2c8bd0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c8bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8bd4: 0x0  nop
    ctx->pc = 0x2c8bd4u;
    // NOP
label_2c8bd8:
    // 0x2c8bd8: 0x16200025  bnez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C8BD8u;
    {
        const bool branch_taken_0x2c8bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD8u;
        // 0x2c8bdc: 0x326300ff  andi        $v1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bd8) {
            ctx->pc = 0x2C8C70u;
            goto label_2c8c70;
        }
    }
    ctx->pc = 0x2C8BE0u;
    // 0x2c8be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c8be4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8BE4u;
    {
        const bool branch_taken_0x2c8be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BE4u;
        // 0x2c8be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8be4) {
            ctx->pc = 0x2C8C28u;
            goto label_2c8c28;
        }
    }
    ctx->pc = 0x2C8BECu;
    // 0x2c8bec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8BECu;
    {
        const bool branch_taken_0x2c8bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8bec) {
            ctx->pc = 0x2C8C18u;
            goto label_2c8c18;
        }
    }
    ctx->pc = 0x2C8BF4u;
    // 0x2c8bf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8BF4u;
    {
        const bool branch_taken_0x2c8bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bf4) {
            ctx->pc = 0x2C8C08u;
            goto label_2c8c08;
        }
    }
    ctx->pc = 0x2C8BFCu;
    // 0x2c8bfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8BFCu;
    {
        const bool branch_taken_0x2c8bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bfc) {
            ctx->pc = 0x2C8C28u;
            goto label_2c8c28;
        }
    }
    ctx->pc = 0x2C8C04u;
    // 0x2c8c04: 0x0  nop
    ctx->pc = 0x2c8c04u;
    // NOP
label_2c8c08:
    // 0x2c8c08: 0xc0b2bc4  jal         func_2CAF10
    ctx->pc = 0x2C8C08u;
    SET_GPR_U32(ctx, 31, 0x2C8C10u);
    ctx->pc = 0x2CAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF10u, 0x2C8C08u, 0x2C8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C10u;
label_2c8c10:
    // 0x2c8c10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C8C10u;
    {
        const bool branch_taken_0x2c8c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C10u;
        // 0x2c8c14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c10) {
            ctx->pc = 0x2C8C40u;
            goto label_2c8c40;
        }
    }
    ctx->pc = 0x2C8C18u;
label_2c8c18:
    // 0x2c8c18: 0xc0b2bc0  jal         func_2CAF00
    ctx->pc = 0x2C8C18u;
    SET_GPR_U32(ctx, 31, 0x2C8C20u);
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2C8C18u, 0x2C8C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C20u;
label_2c8c20:
    // 0x2c8c20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8C20u;
    {
        const bool branch_taken_0x2c8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C20u;
        // 0x2c8c24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c20) {
            ctx->pc = 0x2C8C40u;
            goto label_2c8c40;
        }
    }
    ctx->pc = 0x2C8C28u;
label_2c8c28:
    // 0x2c8c28: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8c2c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c8c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c8c30: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c8c34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8c3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8c40:
    // 0x2c8c40: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8C40u;
    {
        const bool branch_taken_0x2c8c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c40) {
            ctx->pc = 0x2C8C70u;
            goto label_2c8c70;
        }
    }
    ctx->pc = 0x2C8C48u;
    // 0x2c8c48: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2c8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c8c4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8C4Cu;
    {
        const bool branch_taken_0x2c8c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C4Cu;
        // 0x2c8c50: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c4c) {
            ctx->pc = 0x2C8C70u;
            goto label_2c8c70;
        }
    }
    ctx->pc = 0x2C8C54u;
    // 0x2c8c54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c8c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c5c: 0xc0b2364  jal         func_2C8D90
    ctx->pc = 0x2C8C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C64u);
    ctx->pc = 0x2C8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C5Cu;
    // 0x2c8c60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8D90u, 0x2C8C5Cu, 0x2C8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C64u;
label_2c8c64:
    // 0x2c8c64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8C64u;
    {
        const bool branch_taken_0x2c8c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C64u;
        // 0x2c8c68: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c64) {
            ctx->pc = 0x2C8C70u;
            goto label_2c8c70;
        }
    }
    ctx->pc = 0x2C8C6Cu;
    // 0x2c8c6c: 0x8c316440  lw          $s1, 0x6440($at)
    ctx->pc = 0x2c8c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25664)));
label_2c8c70:
    // 0x2c8c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c8c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c8c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c8c78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c8c78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c8c7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c8c7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8c80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c8c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8c84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C94u;
        // 0x2c8c98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8C9Cu;
}
