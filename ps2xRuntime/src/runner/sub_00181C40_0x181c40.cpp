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

// Function: sub_00181C40
// Address: 0x181c40 - 0x181f14
void sub_00181C40_0x181c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C40_0x181c40");
#endif

    switch (ctx->pc) {
        case 0x181cc0u: goto label_181cc0;
        case 0x181d80u: goto label_181d80;
        case 0x181dbcu: goto label_181dbc;
        case 0x181dd8u: goto label_181dd8;
        case 0x181e78u: goto label_181e78;
        default: break;
    }

    ctx->pc = 0x181c40u;

    // 0x181c40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x181c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x181c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x181c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x181c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x181c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x181c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181c54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x181c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x181c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181c64: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x181c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x181c68: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x181c68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x181c6c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x181c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x181c70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181C70u;
    {
        const bool branch_taken_0x181c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C70u;
        // 0x181c74: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c70) {
            ctx->pc = 0x181C80u;
            goto label_181c80;
        }
    }
    ctx->pc = 0x181C78u;
    // 0x181c78: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x181C78u;
    {
        const bool branch_taken_0x181c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C78u;
        // 0x181c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c78) {
            ctx->pc = 0x181EF0u;
            goto label_181ef0;
        }
    }
    ctx->pc = 0x181C80u;
label_181c80:
    // 0x181c80: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x181c84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x181C84u;
    {
        const bool branch_taken_0x181c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181c84) {
            ctx->pc = 0x181C98u;
            goto label_181c98;
        }
    }
    ctx->pc = 0x181C8Cu;
    // 0x181c8c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x181C8Cu;
    {
        const bool branch_taken_0x181c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C8Cu;
        // 0x181c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c8c) {
            ctx->pc = 0x181EF0u;
            goto label_181ef0;
        }
    }
    ctx->pc = 0x181C94u;
    // 0x181c94: 0x0  nop
    ctx->pc = 0x181c94u;
    // NOP
label_181c98:
    // 0x181c98: 0x8e8400c4  lw          $a0, 0xC4($s4)
    ctx->pc = 0x181c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x181c9c: 0x968300c8  lhu         $v1, 0xC8($s4)
    ctx->pc = 0x181c9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x181ca0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x181ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x181ca4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x181CA4u;
    {
        const bool branch_taken_0x181ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181ca4) {
            ctx->pc = 0x181CB8u;
            goto label_181cb8;
        }
    }
    ctx->pc = 0x181CACu;
    // 0x181cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181cb0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x181CB0u;
    {
        const bool branch_taken_0x181cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CB0u;
        // 0x181cb4: 0xae8200c0  sw          $v0, 0xC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cb0) {
            ctx->pc = 0x181EF0u;
            goto label_181ef0;
        }
    }
    ctx->pc = 0x181CB8u;
label_181cb8:
    // 0x181cb8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x181CB8u;
    {
        const bool branch_taken_0x181cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CB8u;
        // 0x181cbc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cb8) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181CC0u;
label_181cc0:
    // 0x181cc0: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x181cc4: 0x8e840098  lw          $a0, 0x98($s4)
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x181cc8: 0x9643006a  lhu         $v1, 0x6A($s2)
    ctx->pc = 0x181cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x181ccc: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x181cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x181cd0: 0x80b00000  lb          $s0, 0x0($a1)
    ctx->pc = 0x181cd0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181cd4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x181cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x181cd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x181cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x181cdc: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x181cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x181ce0: 0x1420006f  bnez        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x181CE0u;
    {
        const bool branch_taken_0x181ce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CE0u;
        // 0x181ce4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ce0) {
            ctx->pc = 0x181EA0u;
            goto label_181ea0;
        }
    }
    ctx->pc = 0x181CE8u;
    // 0x181ce8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x181ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x181cec: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x181cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x181cf0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x181CF0u;
    {
        const bool branch_taken_0x181cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181cf0) {
            ctx->pc = 0x181D30u;
            goto label_181d30;
        }
    }
    ctx->pc = 0x181CF8u;
    // 0x181cf8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x181cfc: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x181CFCu;
    {
        const bool branch_taken_0x181cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181cfc) {
            ctx->pc = 0x181EA0u;
            goto label_181ea0;
        }
    }
    ctx->pc = 0x181D04u;
    // 0x181d04: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x181d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x181d08: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x181d0c: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x181d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x181d10: 0x928300cd  lbu         $v1, 0xCD($s4)
    ctx->pc = 0x181d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 205)));
    // 0x181d14: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x181d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x181d18: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x181d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x181d1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x181d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x181d20: 0x3863c  dsll32      $s0, $v1, 24
    ctx->pc = 0x181d20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 24));
    // 0x181d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181D24u;
    {
        const bool branch_taken_0x181d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D24u;
        // 0x181d28: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d24) {
            ctx->pc = 0x181D48u;
            goto label_181d48;
        }
    }
    ctx->pc = 0x181D2Cu;
    // 0x181d2c: 0x0  nop
    ctx->pc = 0x181d2cu;
    // NOP
label_181d30:
    // 0x181d30: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x181d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x181d34: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x181d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x181d38: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x181d3c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x181d40: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181d44: 0x0  nop
    ctx->pc = 0x181d44u;
    // NOP
label_181d48:
    // 0x181d48: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x181d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x181d4c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x181d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x181d50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181D88u;
            goto label_181d88;
        }
    }
    ctx->pc = 0x181D58u;
    // 0x181d58: 0x928201e4  lbu         $v0, 0x1E4($s4)
    ctx->pc = 0x181d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x181d5c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x181d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181d60: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x181d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x181d64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d68: 0xc68c01d4  lwc1        $f12, 0x1D4($s4)
    ctx->pc = 0x181d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181d6c: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x181d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x181d70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x181d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x181d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x181d78: 0xc0607c8  jal         func_181F20
    ctx->pc = 0x181D78u;
    SET_GPR_U32(ctx, 31, 0x181D80u);
    ctx->pc = 0x181D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D78u;
    // 0x181d7c: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F20u, 0x181D78u, 0x181D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D80u;
label_181d80:
    // 0x181d80: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x181D80u;
    {
        const bool branch_taken_0x181d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d80) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181D88u;
label_181d88:
    // 0x181d88: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x181d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x181d8c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x181D8Cu;
    {
        const bool branch_taken_0x181d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d8c) {
            ctx->pc = 0x181E20u;
            goto label_181e20;
        }
    }
    ctx->pc = 0x181D94u;
    // 0x181d94: 0x928201e4  lbu         $v0, 0x1E4($s4)
    ctx->pc = 0x181d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x181d98: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x181d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181d9c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x181d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x181da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181da4: 0xc68c01d0  lwc1        $f12, 0x1D0($s4)
    ctx->pc = 0x181da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181da8: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x181dac: 0x262500c8  addiu       $a1, $s1, 0xC8
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x181db0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x181db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x181db4: 0xc0607c8  jal         func_181F20
    ctx->pc = 0x181DB4u;
    SET_GPR_U32(ctx, 31, 0x181DBCu);
    ctx->pc = 0x181DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DB4u;
    // 0x181db8: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F20u, 0x181DB4u, 0x181DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DBCu;
label_181dbc:
    // 0x181dbc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x181dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181dc0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x181dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x181dc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x181dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dcc: 0x262500c8  addiu       $a1, $s1, 0xC8
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x181dd0: 0xc04d660  jal         func_135980
    ctx->pc = 0x181DD0u;
    SET_GPR_U32(ctx, 31, 0x181DD8u);
    ctx->pc = 0x181DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DD0u;
    // 0x181dd4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x181DD0u, 0x181DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DD8u;
label_181dd8:
    // 0x181dd8: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x181ddc: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x181de0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181de0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181de4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x181de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x181de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x181dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181df0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x181df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181df4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x181df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x181df8: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x181df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x181dfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x181e00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x181e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e04: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x181e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x181e08: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x181e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x181e0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x181e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x181e10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x181e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e14: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x181e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x181e18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x181E18u;
    {
        const bool branch_taken_0x181e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E18u;
        // 0x181e1c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e18) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181E20u;
label_181e20:
    // 0x181e20: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x181e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x181e24: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x181E24u;
    {
        const bool branch_taken_0x181e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E24u;
        // 0x181e28: 0x21e3c  dsll32      $v1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e24) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181E2Cu;
    // 0x181e2c: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x181e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x181e30: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x181e30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x181e34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181e38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181E38u;
    {
        const bool branch_taken_0x181e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E38u;
        // 0x181e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e38) {
            ctx->pc = 0x181E50u;
            goto label_181e50;
        }
    }
    ctx->pc = 0x181E40u;
    // 0x181e40: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x181e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181e44: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x181e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x181e48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x181e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181e4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x181e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_181e50:
    // 0x181e50: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x181e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181e54: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x181e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e5c: 0x928201e4  lbu         $v0, 0x1E4($s4)
    ctx->pc = 0x181e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x181e60: 0xc68c01d4  lwc1        $f12, 0x1D4($s4)
    ctx->pc = 0x181e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181e64: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x181e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x181e68: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x181e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181e6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x181e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x181e70: 0xc0607c8  jal         func_181F20
    ctx->pc = 0x181E70u;
    SET_GPR_U32(ctx, 31, 0x181E78u);
    ctx->pc = 0x181E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E70u;
    // 0x181e74: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F20u, 0x181E70u, 0x181E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E78u;
label_181e78:
    // 0x181e78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x181e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x181e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x181e80: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x181e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181e84: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x181e88: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x181e88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e90: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x181e90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x181e94: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x181e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_181e98:
    // 0x181e98: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x181e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x181e9c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_181ea0:
    // 0x181ea0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x181ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x181ea4: 0x0  nop
    ctx->pc = 0x181ea4u;
    // NOP
label_181ea8:
    // 0x181ea8: 0x928300cc  lbu         $v1, 0xCC($s4)
    ctx->pc = 0x181ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x181eac: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x181eacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x181eb0: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x181EB0u;
    {
        const bool branch_taken_0x181eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181eb0) {
            ctx->pc = 0x181CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181cc0;
        }
    }
    ctx->pc = 0x181EB8u;
    // 0x181eb8: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x181ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181ec0: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x181ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x181ec4: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x181ec8: 0x968200c8  lhu         $v0, 0xC8($s4)
    ctx->pc = 0x181ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x181ecc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x181eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x181ed0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x181ED0u;
    {
        const bool branch_taken_0x181ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED0u;
        // 0x181ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ed0) {
            ctx->pc = 0x181EE0u;
            goto label_181ee0;
        }
    }
    ctx->pc = 0x181ED8u;
    // 0x181ed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181ED8u;
    {
        const bool branch_taken_0x181ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED8u;
        // 0x181edc: 0xae8200c0  sw          $v0, 0xC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ed8) {
            ctx->pc = 0x181EF0u;
            goto label_181ef0;
        }
    }
    ctx->pc = 0x181EE0u;
label_181ee0:
    // 0x181ee0: 0xa28001e4  sb          $zero, 0x1E4($s4)
    ctx->pc = 0x181ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 484), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ee4: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x181ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
    // 0x181ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181eec: 0x0  nop
    ctx->pc = 0x181eecu;
    // NOP
label_181ef0:
    // 0x181ef0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x181ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181ef4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181ef8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x181ef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181efc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x181F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F0Cu;
        // 0x181f10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181F14u;
}
