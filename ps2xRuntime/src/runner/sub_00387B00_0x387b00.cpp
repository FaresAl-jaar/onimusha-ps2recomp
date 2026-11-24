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

// Function: sub_00387B00
// Address: 0x387b00 - 0x387c30
void sub_00387B00_0x387b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387B00_0x387b00");
#endif

    switch (ctx->pc) {
        case 0x387b00u: goto label_387b00;
        case 0x387b04u: goto label_387b04;
        case 0x387b08u: goto label_387b08;
        case 0x387b0cu: goto label_387b0c;
        case 0x387b10u: goto label_387b10;
        case 0x387b14u: goto label_387b14;
        case 0x387b18u: goto label_387b18;
        case 0x387b1cu: goto label_387b1c;
        case 0x387b20u: goto label_387b20;
        case 0x387b24u: goto label_387b24;
        case 0x387b28u: goto label_387b28;
        case 0x387b2cu: goto label_387b2c;
        case 0x387b30u: goto label_387b30;
        case 0x387b34u: goto label_387b34;
        case 0x387b38u: goto label_387b38;
        case 0x387b3cu: goto label_387b3c;
        case 0x387b40u: goto label_387b40;
        case 0x387b44u: goto label_387b44;
        case 0x387b48u: goto label_387b48;
        case 0x387b4cu: goto label_387b4c;
        case 0x387b50u: goto label_387b50;
        case 0x387b54u: goto label_387b54;
        case 0x387b58u: goto label_387b58;
        case 0x387b5cu: goto label_387b5c;
        case 0x387b60u: goto label_387b60;
        case 0x387b64u: goto label_387b64;
        case 0x387b68u: goto label_387b68;
        case 0x387b6cu: goto label_387b6c;
        case 0x387b70u: goto label_387b70;
        case 0x387b74u: goto label_387b74;
        case 0x387b78u: goto label_387b78;
        case 0x387b7cu: goto label_387b7c;
        case 0x387b80u: goto label_387b80;
        case 0x387b84u: goto label_387b84;
        case 0x387b88u: goto label_387b88;
        case 0x387b8cu: goto label_387b8c;
        case 0x387b90u: goto label_387b90;
        case 0x387b94u: goto label_387b94;
        case 0x387b98u: goto label_387b98;
        case 0x387b9cu: goto label_387b9c;
        case 0x387ba0u: goto label_387ba0;
        case 0x387ba4u: goto label_387ba4;
        case 0x387ba8u: goto label_387ba8;
        case 0x387bacu: goto label_387bac;
        case 0x387bb0u: goto label_387bb0;
        case 0x387bb4u: goto label_387bb4;
        case 0x387bb8u: goto label_387bb8;
        case 0x387bbcu: goto label_387bbc;
        case 0x387bc0u: goto label_387bc0;
        case 0x387bc4u: goto label_387bc4;
        case 0x387bc8u: goto label_387bc8;
        case 0x387bccu: goto label_387bcc;
        case 0x387bd0u: goto label_387bd0;
        case 0x387bd4u: goto label_387bd4;
        case 0x387bd8u: goto label_387bd8;
        case 0x387bdcu: goto label_387bdc;
        case 0x387be0u: goto label_387be0;
        case 0x387be4u: goto label_387be4;
        case 0x387be8u: goto label_387be8;
        case 0x387becu: goto label_387bec;
        case 0x387bf0u: goto label_387bf0;
        case 0x387bf4u: goto label_387bf4;
        case 0x387bf8u: goto label_387bf8;
        case 0x387bfcu: goto label_387bfc;
        case 0x387c00u: goto label_387c00;
        case 0x387c04u: goto label_387c04;
        case 0x387c08u: goto label_387c08;
        case 0x387c0cu: goto label_387c0c;
        case 0x387c10u: goto label_387c10;
        case 0x387c14u: goto label_387c14;
        case 0x387c18u: goto label_387c18;
        case 0x387c1cu: goto label_387c1c;
        case 0x387c20u: goto label_387c20;
        case 0x387c24u: goto label_387c24;
        case 0x387c28u: goto label_387c28;
        case 0x387c2cu: goto label_387c2c;
        default: break;
    }

    ctx->pc = 0x387b00u;

label_387b00:
    // 0x387b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_387b04:
    // 0x387b04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x387b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_387b08:
    // 0x387b08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_387b0c:
    // 0x387b0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x387b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_387b10:
    // 0x387b10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_387b14:
    // 0x387b14: 0x90832b62  lbu         $v1, 0x2B62($a0)
    ctx->pc = 0x387b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11106)));
label_387b18:
    // 0x387b18: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_387b1c:
    if (ctx->pc == 0x387B1Cu) {
        ctx->pc = 0x387B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B18u;
        // 0x387b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B20u;
        goto label_387b20;
    }
    ctx->pc = 0x387B18u;
    {
        const bool branch_taken_0x387b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B18u;
        // 0x387b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b18) {
            ctx->pc = 0x387C18u;
            goto label_387c18;
        }
    }
    ctx->pc = 0x387B20u;
label_387b20:
    // 0x387b20: 0x92032b68  lbu         $v1, 0x2B68($s0)
    ctx->pc = 0x387b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11112)));
label_387b24:
    // 0x387b24: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_387b28:
    if (ctx->pc == 0x387B28u) {
        ctx->pc = 0x387B2Cu;
        goto label_387b2c;
    }
    ctx->pc = 0x387B24u;
    {
        const bool branch_taken_0x387b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387b24) {
            ctx->pc = 0x387C18u;
            goto label_387c18;
        }
    }
    ctx->pc = 0x387B2Cu;
label_387b2c:
    // 0x387b2c: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x387b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_387b30:
    // 0x387b30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x387b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_387b34:
    // 0x387b34: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x387b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
label_387b38:
    // 0x387b38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x387b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_387b3c:
    // 0x387b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b40:
    // 0x387b40: 0x34454c02  ori         $a1, $v0, 0x4C02
    ctx->pc = 0x387b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19458);
label_387b44:
    // 0x387b44: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x387b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_387b48:
    // 0x387b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x387b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b4c:
    // 0x387b4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x387b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b50:
    // 0x387b50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x387b50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b54:
    // 0x387b54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x387b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b58:
    // 0x387b58: 0xc05e9e8  jal         func_17A7A0
label_387b5c:
    if (ctx->pc == 0x387B5Cu) {
        ctx->pc = 0x387B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B58u;
        // 0x387b5c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B60u;
        goto label_387b60;
    }
    ctx->pc = 0x387B58u;
    SET_GPR_U32(ctx, 31, 0x387B60u);
    ctx->pc = 0x387B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B58u;
    // 0x387b5c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x387B58u, 0x387B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B60u;
label_387b60:
    // 0x387b60: 0xc096fb8  jal         func_25BEE0
label_387b64:
    if (ctx->pc == 0x387B64u) {
        ctx->pc = 0x387B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B60u;
        // 0x387b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B68u;
        goto label_387b68;
    }
    ctx->pc = 0x387B60u;
    SET_GPR_U32(ctx, 31, 0x387B68u);
    ctx->pc = 0x387B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B60u;
    // 0x387b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x387B60u, 0x387B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B68u;
label_387b68:
    // 0x387b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b6c:
    // 0x387b6c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x387b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_387b70:
    // 0x387b70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x387b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_387b74:
    // 0x387b74: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x387b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_387b78:
    // 0x387b78: 0xc0aa1d8  jal         func_2A8760
label_387b7c:
    if (ctx->pc == 0x387B7Cu) {
        ctx->pc = 0x387B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B78u;
        // 0x387b7c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B80u;
        goto label_387b80;
    }
    ctx->pc = 0x387B78u;
    SET_GPR_U32(ctx, 31, 0x387B80u);
    ctx->pc = 0x387B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B78u;
    // 0x387b7c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8760u, 0x387B78u, 0x387B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B80u;
label_387b80:
    // 0x387b80: 0xc096fb8  jal         func_25BEE0
label_387b84:
    if (ctx->pc == 0x387B84u) {
        ctx->pc = 0x387B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B80u;
        // 0x387b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387B88u;
        goto label_387b88;
    }
    ctx->pc = 0x387B80u;
    SET_GPR_U32(ctx, 31, 0x387B88u);
    ctx->pc = 0x387B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B80u;
    // 0x387b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x387B80u, 0x387B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B88u;
label_387b88:
    // 0x387b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b8c:
    // 0x387b8c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x387b8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_387b90:
    // 0x387b90: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x387b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_387b94:
    // 0x387b94: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x387b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_387b98:
    // 0x387b98: 0xc0aa1d8  jal         func_2A8760
label_387b9c:
    if (ctx->pc == 0x387B9Cu) {
        ctx->pc = 0x387B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B98u;
        // 0x387b9c: 0x24460330  addiu       $a2, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BA0u;
        goto label_387ba0;
    }
    ctx->pc = 0x387B98u;
    SET_GPR_U32(ctx, 31, 0x387BA0u);
    ctx->pc = 0x387B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B98u;
    // 0x387b9c: 0x24460330  addiu       $a2, $v0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8760u, 0x387B98u, 0x387BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BA0u;
label_387ba0:
    // 0x387ba0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x387ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_387ba4:
    // 0x387ba4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x387ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_387ba8:
    // 0x387ba8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x387ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387bac:
    // 0x387bac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x387bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_387bb0:
    // 0x387bb0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x387bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_387bb4:
    // 0x387bb4: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x387bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_387bb8:
    // 0x387bb8: 0xc0767e8  jal         func_1D9FA0
label_387bbc:
    if (ctx->pc == 0x387BBCu) {
        ctx->pc = 0x387BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BB8u;
        // 0x387bbc: 0x24460230  addiu       $a2, $v0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BC0u;
        goto label_387bc0;
    }
    ctx->pc = 0x387BB8u;
    SET_GPR_U32(ctx, 31, 0x387BC0u);
    ctx->pc = 0x387BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BB8u;
    // 0x387bbc: 0x24460230  addiu       $a2, $v0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x387BB8u, 0x387BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BC0u;
label_387bc0:
    // 0x387bc0: 0xc096fb8  jal         func_25BEE0
label_387bc4:
    if (ctx->pc == 0x387BC4u) {
        ctx->pc = 0x387BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BC0u;
        // 0x387bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BC8u;
        goto label_387bc8;
    }
    ctx->pc = 0x387BC0u;
    SET_GPR_U32(ctx, 31, 0x387BC8u);
    ctx->pc = 0x387BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BC0u;
    // 0x387bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x387BC0u, 0x387BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BC8u;
label_387bc8:
    // 0x387bc8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x387bc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_387bcc:
    // 0x387bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387bd0:
    // 0x387bd0: 0xc0aa1d8  jal         func_2A8760
label_387bd4:
    if (ctx->pc == 0x387BD4u) {
        ctx->pc = 0x387BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BD0u;
        // 0x387bd4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BD8u;
        goto label_387bd8;
    }
    ctx->pc = 0x387BD0u;
    SET_GPR_U32(ctx, 31, 0x387BD8u);
    ctx->pc = 0x387BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BD0u;
    // 0x387bd4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8760u, 0x387BD0u, 0x387BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BD8u;
label_387bd8:
    // 0x387bd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x387bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387bdc:
    // 0x387bdc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x387bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387be0:
    // 0x387be0: 0x8e242b20  lw          $a0, 0x2B20($s1)
    ctx->pc = 0x387be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_387be4:
    // 0x387be4: 0xc0c0880  jal         func_302200
label_387be8:
    if (ctx->pc == 0x387BE8u) {
        ctx->pc = 0x387BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BE4u;
        // 0x387be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BECu;
        goto label_387bec;
    }
    ctx->pc = 0x387BE4u;
    SET_GPR_U32(ctx, 31, 0x387BECu);
    ctx->pc = 0x387BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BE4u;
    // 0x387be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302200u, 0x387BE4u, 0x387BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BECu;
label_387bec:
    // 0x387bec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x387becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_387bf0:
    // 0x387bf0: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x387bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_387bf4:
    // 0x387bf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_387bf8:
    if (ctx->pc == 0x387BF8u) {
        ctx->pc = 0x387BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BF4u;
        // 0x387bf8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BFCu;
        goto label_387bfc;
    }
    ctx->pc = 0x387BF4u;
    {
        const bool branch_taken_0x387bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BF4u;
        // 0x387bf8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bf4) {
            ctx->pc = 0x387BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387be0;
        }
    }
    ctx->pc = 0x387BFCu;
label_387bfc:
    // 0x387bfc: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x387bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_387c00:
    // 0x387c00: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x387c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_387c04:
    // 0x387c04: 0x320f809  jalr        $t9
label_387c08:
    if (ctx->pc == 0x387C08u) {
        ctx->pc = 0x387C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C04u;
        // 0x387c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C0Cu;
        goto label_387c0c;
    }
    ctx->pc = 0x387C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387C0Cu);
        ctx->pc = 0x387C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C04u;
        // 0x387c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387C04u, 0x387C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387C0Cu;
label_387c0c:
    // 0x387c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387c10:
    // 0x387c10: 0xa2032b63  sb          $v1, 0x2B63($s0)
    ctx->pc = 0x387c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11107), (uint8_t)GPR_U32(ctx, 3));
label_387c14:
    // 0x387c14: 0xa2032b68  sb          $v1, 0x2B68($s0)
    ctx->pc = 0x387c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 3));
label_387c18:
    // 0x387c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x387c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_387c1c:
    // 0x387c1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387c20:
    // 0x387c20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x387c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387c24:
    // 0x387c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x387c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387c28:
    // 0x387c28: 0x3e00008  jr          $ra
label_387c2c:
    if (ctx->pc == 0x387C2Cu) {
        ctx->pc = 0x387C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C28u;
        // 0x387c2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C30u;
        goto label_fallthrough_0x387c28;
    }
    ctx->pc = 0x387C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C28u;
        // 0x387c2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387c28:
    ctx->pc = 0x387C30u;
}
