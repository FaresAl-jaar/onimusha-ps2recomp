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

// Function: sub_002A0AC0
// Address: 0x2a0ac0 - 0x2a0c54
void sub_002A0AC0_0x2a0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0AC0_0x2a0ac0");
#endif

    switch (ctx->pc) {
        case 0x2a0ac0u: goto label_2a0ac0;
        case 0x2a0ac4u: goto label_2a0ac4;
        case 0x2a0ac8u: goto label_2a0ac8;
        case 0x2a0accu: goto label_2a0acc;
        case 0x2a0ad0u: goto label_2a0ad0;
        case 0x2a0ad4u: goto label_2a0ad4;
        case 0x2a0ad8u: goto label_2a0ad8;
        case 0x2a0adcu: goto label_2a0adc;
        case 0x2a0ae0u: goto label_2a0ae0;
        case 0x2a0ae4u: goto label_2a0ae4;
        case 0x2a0ae8u: goto label_2a0ae8;
        case 0x2a0aecu: goto label_2a0aec;
        case 0x2a0af0u: goto label_2a0af0;
        case 0x2a0af4u: goto label_2a0af4;
        case 0x2a0af8u: goto label_2a0af8;
        case 0x2a0afcu: goto label_2a0afc;
        case 0x2a0b00u: goto label_2a0b00;
        case 0x2a0b04u: goto label_2a0b04;
        case 0x2a0b08u: goto label_2a0b08;
        case 0x2a0b0cu: goto label_2a0b0c;
        case 0x2a0b10u: goto label_2a0b10;
        case 0x2a0b14u: goto label_2a0b14;
        case 0x2a0b18u: goto label_2a0b18;
        case 0x2a0b1cu: goto label_2a0b1c;
        case 0x2a0b20u: goto label_2a0b20;
        case 0x2a0b24u: goto label_2a0b24;
        case 0x2a0b28u: goto label_2a0b28;
        case 0x2a0b2cu: goto label_2a0b2c;
        case 0x2a0b30u: goto label_2a0b30;
        case 0x2a0b34u: goto label_2a0b34;
        case 0x2a0b38u: goto label_2a0b38;
        case 0x2a0b3cu: goto label_2a0b3c;
        case 0x2a0b40u: goto label_2a0b40;
        case 0x2a0b44u: goto label_2a0b44;
        case 0x2a0b48u: goto label_2a0b48;
        case 0x2a0b4cu: goto label_2a0b4c;
        case 0x2a0b50u: goto label_2a0b50;
        case 0x2a0b54u: goto label_2a0b54;
        case 0x2a0b58u: goto label_2a0b58;
        case 0x2a0b5cu: goto label_2a0b5c;
        case 0x2a0b60u: goto label_2a0b60;
        case 0x2a0b64u: goto label_2a0b64;
        case 0x2a0b68u: goto label_2a0b68;
        case 0x2a0b6cu: goto label_2a0b6c;
        case 0x2a0b70u: goto label_2a0b70;
        case 0x2a0b74u: goto label_2a0b74;
        case 0x2a0b78u: goto label_2a0b78;
        case 0x2a0b7cu: goto label_2a0b7c;
        case 0x2a0b80u: goto label_2a0b80;
        case 0x2a0b84u: goto label_2a0b84;
        case 0x2a0b88u: goto label_2a0b88;
        case 0x2a0b8cu: goto label_2a0b8c;
        case 0x2a0b90u: goto label_2a0b90;
        case 0x2a0b94u: goto label_2a0b94;
        case 0x2a0b98u: goto label_2a0b98;
        case 0x2a0b9cu: goto label_2a0b9c;
        case 0x2a0ba0u: goto label_2a0ba0;
        case 0x2a0ba4u: goto label_2a0ba4;
        case 0x2a0ba8u: goto label_2a0ba8;
        case 0x2a0bacu: goto label_2a0bac;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0bb4u: goto label_2a0bb4;
        case 0x2a0bb8u: goto label_2a0bb8;
        case 0x2a0bbcu: goto label_2a0bbc;
        case 0x2a0bc0u: goto label_2a0bc0;
        case 0x2a0bc4u: goto label_2a0bc4;
        case 0x2a0bc8u: goto label_2a0bc8;
        case 0x2a0bccu: goto label_2a0bcc;
        case 0x2a0bd0u: goto label_2a0bd0;
        case 0x2a0bd4u: goto label_2a0bd4;
        case 0x2a0bd8u: goto label_2a0bd8;
        case 0x2a0bdcu: goto label_2a0bdc;
        case 0x2a0be0u: goto label_2a0be0;
        case 0x2a0be4u: goto label_2a0be4;
        case 0x2a0be8u: goto label_2a0be8;
        case 0x2a0becu: goto label_2a0bec;
        case 0x2a0bf0u: goto label_2a0bf0;
        case 0x2a0bf4u: goto label_2a0bf4;
        case 0x2a0bf8u: goto label_2a0bf8;
        case 0x2a0bfcu: goto label_2a0bfc;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c04u: goto label_2a0c04;
        case 0x2a0c08u: goto label_2a0c08;
        case 0x2a0c0cu: goto label_2a0c0c;
        case 0x2a0c10u: goto label_2a0c10;
        case 0x2a0c14u: goto label_2a0c14;
        case 0x2a0c18u: goto label_2a0c18;
        case 0x2a0c1cu: goto label_2a0c1c;
        case 0x2a0c20u: goto label_2a0c20;
        case 0x2a0c24u: goto label_2a0c24;
        case 0x2a0c28u: goto label_2a0c28;
        case 0x2a0c2cu: goto label_2a0c2c;
        case 0x2a0c30u: goto label_2a0c30;
        case 0x2a0c34u: goto label_2a0c34;
        case 0x2a0c38u: goto label_2a0c38;
        case 0x2a0c3cu: goto label_2a0c3c;
        case 0x2a0c40u: goto label_2a0c40;
        case 0x2a0c44u: goto label_2a0c44;
        case 0x2a0c48u: goto label_2a0c48;
        case 0x2a0c4cu: goto label_2a0c4c;
        case 0x2a0c50u: goto label_2a0c50;
        default: break;
    }

    ctx->pc = 0x2a0ac0u;

label_2a0ac0:
    // 0x2a0ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a0ac4:
    // 0x2a0ac4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x2a0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_2a0ac8:
    // 0x2a0ac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a0acc:
    // 0x2a0acc: 0x24426be0  addiu       $v0, $v0, 0x6BE0
    ctx->pc = 0x2a0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27616));
label_2a0ad0:
    // 0x2a0ad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a0ad4:
    // 0x2a0ad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0ad8:
    // 0x2a0ad8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0adc:
    // 0x2a0adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0ae0:
    // 0x2a0ae0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a0ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ae4:
    // 0x2a0ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0ae8:
    // 0x2a0ae8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a0ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a0aec:
    // 0x2a0aec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a0af0:
    // 0x2a0af0: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2a0af4:
    // 0x2a0af4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2a0af4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0af8:
    // 0x2a0af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a0afc:
    // 0x2a0afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b00:
    // 0x2a0b00: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2a0b00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_2a0b04:
    // 0x2a0b04: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x2a0b04u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2a0b08:
    // 0x2a0b08: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x2a0b08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
label_2a0b0c:
    // 0x2a0b0c: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x2a0b0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2a0b10:
    // 0x2a0b10: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x2a0b10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
label_2a0b14:
    // 0x2a0b14: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x2a0b14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2a0b18:
    // 0x2a0b18: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x2a0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
label_2a0b1c:
    // 0x2a0b1c: 0xfe600060  sd          $zero, 0x60($s3)
    ctx->pc = 0x2a0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 0));
label_2a0b20:
    // 0x2a0b20: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x2a0b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2a0b24:
    // 0x2a0b24: 0xa6620068  sh          $v0, 0x68($s3)
    ctx->pc = 0x2a0b24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 104), (uint16_t)GPR_U32(ctx, 2));
label_2a0b28:
    // 0x2a0b28: 0xae720078  sw          $s2, 0x78($s3)
    ctx->pc = 0x2a0b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 18));
label_2a0b2c:
    // 0x2a0b2c: 0x9242002a  lbu         $v0, 0x2A($s2)
    ctx->pc = 0x2a0b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_2a0b30:
    // 0x2a0b30: 0xa262011c  sb          $v0, 0x11C($s3)
    ctx->pc = 0x2a0b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 284), (uint8_t)GPR_U32(ctx, 2));
label_2a0b34:
    // 0x2a0b34: 0xae66008c  sw          $a2, 0x8C($s3)
    ctx->pc = 0x2a0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
label_2a0b38:
    // 0x2a0b38: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x2a0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_2a0b3c:
    // 0x2a0b3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2a0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2a0b40:
    // 0x2a0b40: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2a0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
label_2a0b44:
    // 0x2a0b44: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x2a0b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_2a0b48:
    // 0x2a0b48: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2a0b48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_2a0b4c:
    // 0x2a0b4c: 0xc0a816c  jal         func_2A05B0
label_2a0b50:
    if (ctx->pc == 0x2A0B50u) {
        ctx->pc = 0x2A0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B4Cu;
        // 0x2a0b50: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0B54u;
        goto label_2a0b54;
    }
    ctx->pc = 0x2A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B54u);
    ctx->pc = 0x2A0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B4Cu;
    // 0x2a0b50: 0xae600090  sw          $zero, 0x90($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A05B0u, 0x2A0B4Cu, 0x2A0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B54u;
label_2a0b54:
    // 0x2a0b54: 0x8e790144  lw          $t9, 0x144($s3)
    ctx->pc = 0x2a0b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
label_2a0b58:
    // 0x2a0b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b5c:
    // 0x2a0b5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a0b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a0b60:
    // 0x2a0b60: 0x320f809  jalr        $t9
label_2a0b64:
    if (ctx->pc == 0x2A0B64u) {
        ctx->pc = 0x2A0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B60u;
        // 0x2a0b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0B68u;
        goto label_2a0b68;
    }
    ctx->pc = 0x2A0B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0B68u);
        ctx->pc = 0x2A0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B60u;
        // 0x2a0b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0B60u, 0x2A0B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0B68u;
label_2a0b68:
    // 0x2a0b68: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
label_2a0b6c:
    // 0x2a0b6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a0b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b70:
    // 0x2a0b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a0b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b74:
    // 0x2a0b74: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2a0b78:
    if (ctx->pc == 0x2A0B78u) {
        ctx->pc = 0x2A0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B74u;
        // 0x2a0b78: 0x24e76be0  addiu       $a3, $a3, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0B7Cu;
        goto label_2a0b7c;
    }
    ctx->pc = 0x2A0B74u;
    {
        const bool branch_taken_0x2a0b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B74u;
        // 0x2a0b78: 0x24e76be0  addiu       $a3, $a3, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b74) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0B7Cu;
label_2a0b7c:
    // 0x2a0b7c: 0x0  nop
    ctx->pc = 0x2a0b7cu;
    // NOP
label_2a0b80:
    // 0x2a0b80: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2a0b84:
    // 0x2a0b84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a0b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b88:
    // 0x2a0b88: 0x10000023  b           . + 4 + (0x23 << 2)
label_2a0b8c:
    if (ctx->pc == 0x2A0B8Cu) {
        ctx->pc = 0x2A0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B88u;
        // 0x2a0b8c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0B90u;
        goto label_2a0b90;
    }
    ctx->pc = 0x2A0B88u;
    {
        const bool branch_taken_0x2a0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B88u;
        // 0x2a0b8c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b88) {
            ctx->pc = 0x2A0C18u;
            goto label_2a0c18;
        }
    }
    ctx->pc = 0x2A0B90u;
label_2a0b90:
    // 0x2a0b90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a0b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b94:
    // 0x2a0b94: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_2a0b98:
    // 0x2a0b98: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_2a0b9c:
    // 0x2a0b9c: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2a0b9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2a0ba0:
    // 0x2a0ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ba4:
    // 0x2a0ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ba8:
    // 0x2a0ba8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a0ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a0bac:
    // 0x2a0bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0bb0:
    // 0x2a0bb0: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2a0bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_2a0bb4:
    // 0x2a0bb4: 0x78e60010  lq          $a2, 0x10($a3)
    ctx->pc = 0x2a0bb4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2a0bb8:
    // 0x2a0bb8: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x2a0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
label_2a0bbc:
    // 0x2a0bbc: 0x78e60020  lq          $a2, 0x20($a3)
    ctx->pc = 0x2a0bbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_2a0bc0:
    // 0x2a0bc0: 0x7c460020  sq          $a2, 0x20($v0)
    ctx->pc = 0x2a0bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 6));
label_2a0bc4:
    // 0x2a0bc4: 0x78e60030  lq          $a2, 0x30($a3)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_2a0bc8:
    // 0x2a0bc8: 0x7c460030  sq          $a2, 0x30($v0)
    ctx->pc = 0x2a0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 6));
label_2a0bcc:
    // 0x2a0bcc: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x2a0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_2a0bd0:
    // 0x2a0bd0: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2a0bd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2a0bd4:
    // 0x2a0bd4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2a0bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_2a0bd8:
    // 0x2a0bd8: 0x78e50010  lq          $a1, 0x10($a3)
    ctx->pc = 0x2a0bd8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2a0bdc:
    // 0x2a0bdc: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2a0bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
label_2a0be0:
    // 0x2a0be0: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x2a0be0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_2a0be4:
    // 0x2a0be4: 0x7c450020  sq          $a1, 0x20($v0)
    ctx->pc = 0x2a0be4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 5));
label_2a0be8:
    // 0x2a0be8: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2a0be8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_2a0bec:
    // 0x2a0bec: 0x7c450030  sq          $a1, 0x30($v0)
    ctx->pc = 0x2a0becu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 5));
label_2a0bf0:
    // 0x2a0bf0: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2a0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2a0bf4:
    // 0x2a0bf4: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2a0bf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2a0bf8:
    // 0x2a0bf8: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2a0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_2a0bfc:
    // 0x2a0bfc: 0x78e50010  lq          $a1, 0x10($a3)
    ctx->pc = 0x2a0bfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2a0c00:
    // 0x2a0c00: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2a0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
label_2a0c04:
    // 0x2a0c04: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x2a0c04u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_2a0c08:
    // 0x2a0c08: 0x7c450020  sq          $a1, 0x20($v0)
    ctx->pc = 0x2a0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 5));
label_2a0c0c:
    // 0x2a0c0c: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2a0c0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_2a0c10:
    // 0x2a0c10: 0x7c450030  sq          $a1, 0x30($v0)
    ctx->pc = 0x2a0c10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 5));
label_2a0c14:
    // 0x2a0c14: 0x0  nop
    ctx->pc = 0x2a0c14u;
    // NOP
label_2a0c18:
    // 0x2a0c18: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x2a0c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2a0c1c:
    // 0x2a0c1c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2a0c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a0c20:
    // 0x2a0c20: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_2a0c24:
    if (ctx->pc == 0x2A0C24u) {
        ctx->pc = 0x2A0C28u;
        goto label_2a0c28;
    }
    ctx->pc = 0x2A0C20u;
    {
        const bool branch_taken_0x2a0c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c20) {
            ctx->pc = 0x2A0B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0b90;
        }
    }
    ctx->pc = 0x2A0C28u;
label_2a0c28:
    // 0x2a0c28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a0c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2a0c2c:
    // 0x2a0c2c: 0x0  nop
    ctx->pc = 0x2a0c2cu;
    // NOP
label_2a0c30:
    // 0x2a0c30: 0x1900ffd3  blez        $t0, . + 4 + (-0x2D << 2)
label_2a0c34:
    if (ctx->pc == 0x2A0C34u) {
        ctx->pc = 0x2A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C30u;
        // 0x2a0c34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0C38u;
        goto label_2a0c38;
    }
    ctx->pc = 0x2A0C30u;
    {
        const bool branch_taken_0x2a0c30 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C30u;
        // 0x2a0c34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c30) {
            ctx->pc = 0x2A0B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0b80;
        }
    }
    ctx->pc = 0x2A0C38u;
label_2a0c38:
    // 0x2a0c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a0c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a0c3c:
    // 0x2a0c3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0c40:
    // 0x2a0c40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0c44:
    // 0x2a0c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0c48:
    // 0x2a0c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0c4c:
    // 0x2a0c4c: 0x3e00008  jr          $ra
label_2a0c50:
    if (ctx->pc == 0x2A0C50u) {
        ctx->pc = 0x2A0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C4Cu;
        // 0x2a0c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0C54u;
        goto label_fallthrough_0x2a0c4c;
    }
    ctx->pc = 0x2A0C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C4Cu;
        // 0x2a0c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a0c4c:
    ctx->pc = 0x2A0C54u;
}
