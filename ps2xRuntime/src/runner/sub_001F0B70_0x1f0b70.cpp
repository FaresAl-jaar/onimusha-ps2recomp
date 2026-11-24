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

// Function: sub_001F0B70
// Address: 0x1f0b70 - 0x1f1004
void sub_001F0B70_0x1f0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B70_0x1f0b70");
#endif

    switch (ctx->pc) {
        case 0x1f0d48u: goto label_1f0d48;
        case 0x1f0dacu: goto label_1f0dac;
        case 0x1f0e9cu: goto label_1f0e9c;
        default: break;
    }

    ctx->pc = 0x1f0b70u;

    // 0x1f0b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0b78: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0b7c: 0x1060011e  beqz        $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x1F0B7Cu;
    {
        const bool branch_taken_0x1f0b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b7c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0B84u;
    // 0x1f0b84: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f0b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0b88: 0x2ca10016  sltiu       $at, $a1, 0x16
    ctx->pc = 0x1f0b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f0b8c: 0x1020011a  beqz        $at, . + 4 + (0x11A << 2)
    ctx->pc = 0x1F0B8Cu;
    {
        const bool branch_taken_0x1f0b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B8Cu;
        // 0x1f0b90: 0x3c070066  lui         $a3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b8c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0B94u;
    // 0x1f0b94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0b98: 0x24e76030  addiu       $a3, $a3, 0x6030
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24624));
    // 0x1f0b9c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f0ba0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f0ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f0ba4: 0xa00008  jr          $a1
    ctx->pc = 0x1F0BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0BB0u: goto label_1f0bb0;
            case 0x1F0C20u: goto label_1f0c20;
            case 0x1F0C58u: goto label_1f0c58;
            case 0x1F0C80u: goto label_1f0c80;
            case 0x1F0CA8u: goto label_1f0ca8;
            case 0x1F0CD0u: goto label_1f0cd0;
            case 0x1F0D28u: goto label_1f0d28;
            case 0x1F0D50u: goto label_1f0d50;
            case 0x1F0DA0u: goto label_1f0da0;
            case 0x1F0DB8u: goto label_1f0db8;
            case 0x1F0DF8u: goto label_1f0df8;
            case 0x1F0EA8u: goto label_1f0ea8;
            case 0x1F0EE8u: goto label_1f0ee8;
            case 0x1F0F28u: goto label_1f0f28;
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FF8u: goto label_1f0ff8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F0BACu;
    // 0x1f0bac: 0x0  nop
    ctx->pc = 0x1f0bacu;
    // NOP
label_1f0bb0:
    // 0x1f0bb0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0BB0u;
    {
        const bool branch_taken_0x1f0bb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bb0) {
            ctx->pc = 0x1F0BF0u;
            goto label_1f0bf0;
        }
    }
    ctx->pc = 0x1F0BB8u;
    // 0x1f0bb8: 0x94660030  lhu         $a2, 0x30($v1)
    ctx->pc = 0x1f0bb8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f0bbc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1f0bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f0bc0: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1f0bc4: 0xa4660030  sh          $a2, 0x30($v1)
    ctx->pc = 0x1f0bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f0bc8: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0bcc: 0x94c30030  lhu         $v1, 0x30($a2)
    ctx->pc = 0x1f0bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1f0bd0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1f0bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1f0bd4: 0xa4c30030  sh          $v1, 0x30($a2)
    ctx->pc = 0x1f0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0bd8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1f0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0bdc: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x1f0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1f0be0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f0be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1f0be4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x1F0BE4u;
    {
        const bool branch_taken_0x1f0be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE4u;
        // 0x1f0be8: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0be4) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0BECu;
    // 0x1f0bec: 0x0  nop
    ctx->pc = 0x1f0becu;
    // NOP
label_1f0bf0:
    // 0x1f0bf0: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x1f0bf0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f0bf4: 0x30a5fffd  andi        $a1, $a1, 0xFFFD
    ctx->pc = 0x1f0bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x1f0bf8: 0xa4650030  sh          $a1, 0x30($v1)
    ctx->pc = 0x1f0bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f0bfc: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1f0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0c00: 0x94a30030  lhu         $v1, 0x30($a1)
    ctx->pc = 0x1f0c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f0c04: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x1f0c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x1f0c08: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x1f0c08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0c0c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0c10: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1f0c14: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f0c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f0c18: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x1F0C18u;
    {
        const bool branch_taken_0x1f0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C18u;
        // 0x1f0c1c: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c18) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0C20u;
label_1f0c20:
    // 0x1f0c20: 0x3c053a83  lui         $a1, 0x3A83
    ctx->pc = 0x1f0c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14979 << 16));
    // 0x1f0c24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f0c24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c28: 0x34a5126f  ori         $a1, $a1, 0x126F
    ctx->pc = 0x1f0c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4719);
    // 0x1f0c2c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f0c2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0c30: 0x0  nop
    ctx->pc = 0x1f0c30u;
    // NOP
    // 0x1f0c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0c38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f0c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0c3c: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x1f0c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x1f0c40: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0c44: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1f0c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x1f0c48: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0c4c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1F0C4Cu;
    {
        const bool branch_taken_0x1f0c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C4Cu;
        // 0x1f0c50: 0xe46000b0  swc1        $f0, 0xB0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c4c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0C54u;
    // 0x1f0c54: 0x0  nop
    ctx->pc = 0x1f0c54u;
    // NOP
label_1f0c58:
    // 0x1f0c58: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1f0c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f0c5c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f0c5cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f0c60: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0c64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f0c68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f0c6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0c6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c70: 0x0  nop
    ctx->pc = 0x1f0c70u;
    // NOP
    // 0x1f0c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0c78: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1F0C78u;
    {
        const bool branch_taken_0x1f0c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C78u;
        // 0x1f0c7c: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c78) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0C80u;
label_1f0c80:
    // 0x1f0c80: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1f0c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f0c84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f0c84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f0c88: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0c8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f0c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f0c90: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f0c94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0c94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c98: 0x0  nop
    ctx->pc = 0x1f0c98u;
    // NOP
    // 0x1f0c9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0ca0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1F0CA0u;
    {
        const bool branch_taken_0x1f0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CA0u;
        // 0x1f0ca4: 0xe4600024  swc1        $f0, 0x24($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ca0) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0CA8u;
label_1f0ca8:
    // 0x1f0ca8: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1f0ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f0cac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f0cacu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f0cb0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0cb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f0cb8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f0cbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0cc0: 0x0  nop
    ctx->pc = 0x1f0cc0u;
    // NOP
    // 0x1f0cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0cc8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1F0CC8u;
    {
        const bool branch_taken_0x1f0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CC8u;
        // 0x1f0ccc: 0xe4600028  swc1        $f0, 0x28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cc8) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0CD0u;
label_1f0cd0:
    // 0x1f0cd0: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x1f0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x1f0cd4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0cd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0cd8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1f0cd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f0cdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0ce0: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0ce4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f0ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0ce8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0ce8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0cec: 0x0  nop
    ctx->pc = 0x1f0cecu;
    // NOP
    // 0x1f0cf0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0cf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0cf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f0cf8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1f0cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f0cfc: 0x0  nop
    ctx->pc = 0x1f0cfcu;
    // NOP
    // 0x1f0d00: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1f0d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f0d04: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f0d04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f0d08: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1f0d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1f0d0c: 0xa46500c2  sh          $a1, 0xC2($v1)
    ctx->pc = 0x1f0d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f0d10: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x1f0d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f0d14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f0d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0d1c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1F0D1Cu;
    {
        const bool branch_taken_0x1f0d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D1Cu;
        // 0x1f0d20: 0xa4650280  sh          $a1, 0x280($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 640), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d1c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0D24u;
    // 0x1f0d24: 0x0  nop
    ctx->pc = 0x1f0d24u;
    // NOP
label_1f0d28:
    // 0x1f0d28: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x1f0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f0d2c: 0x908500ce  lbu         $a1, 0xCE($a0)
    ctx->pc = 0x1f0d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
    // 0x1f0d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0d34: 0x14a300b0  bne         $a1, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1F0D34u;
    {
        const bool branch_taken_0x1f0d34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D34u;
        // 0x1f0d38: 0x62c3c  dsll32      $a1, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d34) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0D3Cu;
    // 0x1f0d3c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f0d40: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1F0D40u;
    SET_GPR_U32(ctx, 31, 0x1F0D48u);
    ctx->pc = 0x1F0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D40u;
    // 0x1f0d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F60u, 0x1F0D40u, 0x1F0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D48u;
label_1f0d48:
    // 0x1f0d48: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1F0D48u;
    {
        const bool branch_taken_0x1f0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d48) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0D50u;
label_1f0d50:
    // 0x1f0d50: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1f0d54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0d54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d58: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d60: 0x0  nop
    ctx->pc = 0x1f0d60u;
    // NOP
    // 0x1f0d64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0d68: 0x3c064500  lui         $a2, 0x4500
    ctx->pc = 0x1f0d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17664 << 16));
    // 0x1f0d6c: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x1f0d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f0d70: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1f0d70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0d74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f0d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0d7c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0d7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0d80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d84: 0x0  nop
    ctx->pc = 0x1f0d84u;
    // NOP
    // 0x1f0d88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f0d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f0d8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0d90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f0d94: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1f0d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f0d98: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1F0D98u;
    {
        const bool branch_taken_0x1f0d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D98u;
        // 0x1f0d9c: 0xa4640380  sh          $a0, 0x380($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 896), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d98) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0DA0u;
label_1f0da0:
    // 0x1f0da0: 0x90870035  lbu         $a3, 0x35($a0)
    ctx->pc = 0x1f0da0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f0da4: 0xc07c18c  jal         func_1F0630
    ctx->pc = 0x1F0DA4u;
    SET_GPR_U32(ctx, 31, 0x1F0DACu);
    ctx->pc = 0x1F0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DA4u;
    // 0x1f0da8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0630u, 0x1F0DA4u, 0x1F0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DACu;
label_1f0dac:
    // 0x1f0dac: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1F0DACu;
    {
        const bool branch_taken_0x1f0dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0dac) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0DB4u;
    // 0x1f0db4: 0x0  nop
    ctx->pc = 0x1f0db4u;
    // NOP
label_1f0db8:
    // 0x1f0db8: 0x8c670050  lw          $a3, 0x50($v1)
    ctx->pc = 0x1f0db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f0dbc: 0x90e500ce  lbu         $a1, 0xCE($a3)
    ctx->pc = 0x1f0dbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 206)));
    // 0x1f0dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0dc4: 0x14a3008c  bne         $a1, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1F0DC4u;
    {
        const bool branch_taken_0x1f0dc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0dc4) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0DCCu;
    // 0x1f0dcc: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1f0dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f0dd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0dd8: 0x0  nop
    ctx->pc = 0x1f0dd8u;
    // NOP
    // 0x1f0ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0de0: 0xe4e000ac  swc1        $f0, 0xAC($a3)
    ctx->pc = 0x1f0de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 172), bits); }
    // 0x1f0de4: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x1f0de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f0de8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f0dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0df0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F0DF0u;
    {
        const bool branch_taken_0x1f0df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DF0u;
        // 0x1f0df4: 0xa4660580  sh          $a2, 0x580($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1408), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0df0) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0DF8u;
label_1f0df8:
    // 0x1f0df8: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f0dfc: 0x90a500ce  lbu         $a1, 0xCE($a1)
    ctx->pc = 0x1f0dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 206)));
    // 0x1f0e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0e04: 0x14a3007c  bne         $a1, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1F0E04u;
    {
        const bool branch_taken_0x1f0e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0e04) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0E0Cu;
    // 0x1f0e0c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0e0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0e10: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0e18: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x1f0e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0e20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f0e24: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1f0e24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0e28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0e30: 0x0  nop
    ctx->pc = 0x1f0e30u;
    // NOP
    // 0x1f0e34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f0e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f0e38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0e38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0e3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0E3Cu;
    {
        const bool branch_taken_0x1f0e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0e3c) {
            ctx->pc = 0x1F0E54u;
            goto label_1f0e54;
        }
    }
    ctx->pc = 0x1F0E44u;
    // 0x1f0e44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0e48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f0e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f0e4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0E4Cu;
    {
        const bool branch_taken_0x1f0e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E4Cu;
        // 0x1f0e50: 0x90820035  lbu         $v0, 0x35($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e4c) {
            ctx->pc = 0x1F0E70u;
            goto label_1f0e70;
        }
    }
    ctx->pc = 0x1F0E54u;
label_1f0e54:
    // 0x1f0e54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f0e54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0e58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f0e5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0e5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0e60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f0e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f0e64: 0x0  nop
    ctx->pc = 0x1f0e64u;
    // NOP
    // 0x1f0e68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f0e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f0e6c: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_1f0e70:
    // 0x1f0e70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0e74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0e78: 0xa4430480  sh          $v1, 0x480($v0)
    ctx->pc = 0x1f0e78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0e7c: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x1f0e80: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f0e84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0e88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0e8c: 0x94450480  lhu         $a1, 0x480($v0)
    ctx->pc = 0x1f0e8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1152)));
    // 0x1f0e90: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x1f0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f0e94: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1F0E94u;
    SET_GPR_U32(ctx, 31, 0x1F0E9Cu);
    ctx->pc = 0x1F0E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E94u;
    // 0x1f0e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F60u, 0x1F0E94u, 0x1F0E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E9Cu;
label_1f0e9c:
    // 0x1f0e9c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1F0E9Cu;
    {
        const bool branch_taken_0x1f0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e9c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0EA4u;
    // 0x1f0ea4: 0x0  nop
    ctx->pc = 0x1f0ea4u;
    // NOP
label_1f0ea8:
    // 0x1f0ea8: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0eac: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F0EACu;
    {
        const bool branch_taken_0x1f0eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0eac) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0EB4u;
    // 0x1f0eb4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0eb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0eb8: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1f0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0ec0: 0x0  nop
    ctx->pc = 0x1f0ec0u;
    // NOP
    // 0x1f0ec4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0ec8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1f0ecc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0ed0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f0ed0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0ed8: 0x0  nop
    ctx->pc = 0x1f0ed8u;
    // NOP
    // 0x1f0edc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f0edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0ee0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F0EE0u;
    {
        const bool branch_taken_0x1f0ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EE0u;
        // 0x1f0ee4: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ee0) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0EE8u;
label_1f0ee8:
    // 0x1f0ee8: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0eec: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F0EECu;
    {
        const bool branch_taken_0x1f0eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0eec) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0EF4u;
    // 0x1f0ef4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0ef4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0ef8: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f00: 0x0  nop
    ctx->pc = 0x1f0f00u;
    // NOP
    // 0x1f0f04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0f08: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1f0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1f0f0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0f10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f0f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f18: 0x0  nop
    ctx->pc = 0x1f0f18u;
    // NOP
    // 0x1f0f1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f0f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0f20: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F0F20u;
    {
        const bool branch_taken_0x1f0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F20u;
        // 0x1f0f24: 0xe4800024  swc1        $f0, 0x24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f20) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0F28u;
label_1f0f28:
    // 0x1f0f28: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0f2c: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F0F2Cu;
    {
        const bool branch_taken_0x1f0f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f2c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0F34u;
    // 0x1f0f34: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0f34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0f38: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f40: 0x0  nop
    ctx->pc = 0x1f0f40u;
    // NOP
    // 0x1f0f44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0f48: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0f48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0f4c: 0x0  nop
    ctx->pc = 0x1f0f4cu;
    // NOP
    // 0x1f0f50: 0x0  nop
    ctx->pc = 0x1f0f50u;
    // NOP
    // 0x1f0f54: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F0F54u;
    {
        const bool branch_taken_0x1f0f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F54u;
        // 0x1f0f58: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f54) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0F5Cu;
    // 0x1f0f5c: 0x0  nop
    ctx->pc = 0x1f0f5cu;
    // NOP
label_1f0f60:
    // 0x1f0f60: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0f64: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0F64u;
    {
        const bool branch_taken_0x1f0f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f64) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0F6Cu;
    // 0x1f0f6c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0f6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0f70: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0f74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f78: 0x0  nop
    ctx->pc = 0x1f0f78u;
    // NOP
    // 0x1f0f7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0f80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0f80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0f84: 0x0  nop
    ctx->pc = 0x1f0f84u;
    // NOP
    // 0x1f0f88: 0x0  nop
    ctx->pc = 0x1f0f88u;
    // NOP
    // 0x1f0f8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F0F8Cu;
    {
        const bool branch_taken_0x1f0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F8Cu;
        // 0x1f0f90: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f8c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0F94u;
    // 0x1f0f94: 0x0  nop
    ctx->pc = 0x1f0f94u;
    // NOP
label_1f0f98:
    // 0x1f0f98: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0f9c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F0F9Cu;
    {
        const bool branch_taken_0x1f0f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f9c) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0FA4u;
    // 0x1f0fa4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0fa4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0fa8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fb0: 0x0  nop
    ctx->pc = 0x1f0fb0u;
    // NOP
    // 0x1f0fb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0fb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0fb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0fbc: 0x0  nop
    ctx->pc = 0x1f0fbcu;
    // NOP
    // 0x1f0fc0: 0x0  nop
    ctx->pc = 0x1f0fc0u;
    // NOP
    // 0x1f0fc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F0FC4u;
    {
        const bool branch_taken_0x1f0fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FC4u;
        // 0x1f0fc8: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fc4) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0FCCu;
    // 0x1f0fcc: 0x0  nop
    ctx->pc = 0x1f0fccu;
    // NOP
label_1f0fd0:
    // 0x1f0fd0: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f0fd4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0FD4u;
    {
        const bool branch_taken_0x1f0fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0fd4) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0FDCu;
    // 0x1f0fdc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f0fdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0fe0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f0fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fe8: 0x0  nop
    ctx->pc = 0x1f0fe8u;
    // NOP
    // 0x1f0fec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0ff0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0ff0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0ff4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1f0ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1f0ff8:
    // 0x1f0ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FFCu;
        // 0x1f1000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1004u;
}
