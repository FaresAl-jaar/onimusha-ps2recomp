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

// Function: sub_00326B30
// Address: 0x326b30 - 0x326cf4
void sub_00326B30_0x326b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B30_0x326b30");
#endif

    switch (ctx->pc) {
        case 0x326b30u: goto label_326b30;
        case 0x326b34u: goto label_326b34;
        case 0x326b38u: goto label_326b38;
        case 0x326b3cu: goto label_326b3c;
        case 0x326b40u: goto label_326b40;
        case 0x326b44u: goto label_326b44;
        case 0x326b48u: goto label_326b48;
        case 0x326b4cu: goto label_326b4c;
        case 0x326b50u: goto label_326b50;
        case 0x326b54u: goto label_326b54;
        case 0x326b58u: goto label_326b58;
        case 0x326b5cu: goto label_326b5c;
        case 0x326b60u: goto label_326b60;
        case 0x326b64u: goto label_326b64;
        case 0x326b68u: goto label_326b68;
        case 0x326b6cu: goto label_326b6c;
        case 0x326b70u: goto label_326b70;
        case 0x326b74u: goto label_326b74;
        case 0x326b78u: goto label_326b78;
        case 0x326b7cu: goto label_326b7c;
        case 0x326b80u: goto label_326b80;
        case 0x326b84u: goto label_326b84;
        case 0x326b88u: goto label_326b88;
        case 0x326b8cu: goto label_326b8c;
        case 0x326b90u: goto label_326b90;
        case 0x326b94u: goto label_326b94;
        case 0x326b98u: goto label_326b98;
        case 0x326b9cu: goto label_326b9c;
        case 0x326ba0u: goto label_326ba0;
        case 0x326ba4u: goto label_326ba4;
        case 0x326ba8u: goto label_326ba8;
        case 0x326bacu: goto label_326bac;
        case 0x326bb0u: goto label_326bb0;
        case 0x326bb4u: goto label_326bb4;
        case 0x326bb8u: goto label_326bb8;
        case 0x326bbcu: goto label_326bbc;
        case 0x326bc0u: goto label_326bc0;
        case 0x326bc4u: goto label_326bc4;
        case 0x326bc8u: goto label_326bc8;
        case 0x326bccu: goto label_326bcc;
        case 0x326bd0u: goto label_326bd0;
        case 0x326bd4u: goto label_326bd4;
        case 0x326bd8u: goto label_326bd8;
        case 0x326bdcu: goto label_326bdc;
        case 0x326be0u: goto label_326be0;
        case 0x326be4u: goto label_326be4;
        case 0x326be8u: goto label_326be8;
        case 0x326becu: goto label_326bec;
        case 0x326bf0u: goto label_326bf0;
        case 0x326bf4u: goto label_326bf4;
        case 0x326bf8u: goto label_326bf8;
        case 0x326bfcu: goto label_326bfc;
        case 0x326c00u: goto label_326c00;
        case 0x326c04u: goto label_326c04;
        case 0x326c08u: goto label_326c08;
        case 0x326c0cu: goto label_326c0c;
        case 0x326c10u: goto label_326c10;
        case 0x326c14u: goto label_326c14;
        case 0x326c18u: goto label_326c18;
        case 0x326c1cu: goto label_326c1c;
        case 0x326c20u: goto label_326c20;
        case 0x326c24u: goto label_326c24;
        case 0x326c28u: goto label_326c28;
        case 0x326c2cu: goto label_326c2c;
        case 0x326c30u: goto label_326c30;
        case 0x326c34u: goto label_326c34;
        case 0x326c38u: goto label_326c38;
        case 0x326c3cu: goto label_326c3c;
        case 0x326c40u: goto label_326c40;
        case 0x326c44u: goto label_326c44;
        case 0x326c48u: goto label_326c48;
        case 0x326c4cu: goto label_326c4c;
        case 0x326c50u: goto label_326c50;
        case 0x326c54u: goto label_326c54;
        case 0x326c58u: goto label_326c58;
        case 0x326c5cu: goto label_326c5c;
        case 0x326c60u: goto label_326c60;
        case 0x326c64u: goto label_326c64;
        case 0x326c68u: goto label_326c68;
        case 0x326c6cu: goto label_326c6c;
        case 0x326c70u: goto label_326c70;
        case 0x326c74u: goto label_326c74;
        case 0x326c78u: goto label_326c78;
        case 0x326c7cu: goto label_326c7c;
        case 0x326c80u: goto label_326c80;
        case 0x326c84u: goto label_326c84;
        case 0x326c88u: goto label_326c88;
        case 0x326c8cu: goto label_326c8c;
        case 0x326c90u: goto label_326c90;
        case 0x326c94u: goto label_326c94;
        case 0x326c98u: goto label_326c98;
        case 0x326c9cu: goto label_326c9c;
        case 0x326ca0u: goto label_326ca0;
        case 0x326ca4u: goto label_326ca4;
        case 0x326ca8u: goto label_326ca8;
        case 0x326cacu: goto label_326cac;
        case 0x326cb0u: goto label_326cb0;
        case 0x326cb4u: goto label_326cb4;
        case 0x326cb8u: goto label_326cb8;
        case 0x326cbcu: goto label_326cbc;
        case 0x326cc0u: goto label_326cc0;
        case 0x326cc4u: goto label_326cc4;
        case 0x326cc8u: goto label_326cc8;
        case 0x326cccu: goto label_326ccc;
        case 0x326cd0u: goto label_326cd0;
        case 0x326cd4u: goto label_326cd4;
        case 0x326cd8u: goto label_326cd8;
        case 0x326cdcu: goto label_326cdc;
        case 0x326ce0u: goto label_326ce0;
        case 0x326ce4u: goto label_326ce4;
        case 0x326ce8u: goto label_326ce8;
        case 0x326cecu: goto label_326cec;
        case 0x326cf0u: goto label_326cf0;
        default: break;
    }

    ctx->pc = 0x326b30u;

label_326b30:
    // 0x326b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x326b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_326b34:
    // 0x326b34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x326b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_326b38:
    // 0x326b38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x326b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_326b3c:
    // 0x326b3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x326b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_326b40:
    // 0x326b40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x326b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326b44:
    // 0x326b44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x326b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_326b48:
    // 0x326b48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x326b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326b4c:
    // 0x326b4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_326b50:
    // 0x326b50: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x326b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_326b54:
    // 0x326b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_326b58:
    // 0x326b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326b5c:
    // 0x326b5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x326b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_326b60:
    // 0x326b60: 0xc0b2fe4  jal         func_2CBF90
label_326b64:
    if (ctx->pc == 0x326B64u) {
        ctx->pc = 0x326B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B60u;
        // 0x326b64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B68u;
        goto label_326b68;
    }
    ctx->pc = 0x326B60u;
    SET_GPR_U32(ctx, 31, 0x326B68u);
    ctx->pc = 0x326B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B60u;
    // 0x326b64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF90u, 0x326B60u, 0x326B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B68u;
label_326b68:
    // 0x326b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x326b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326b6c:
    // 0x326b6c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_326b70:
    if (ctx->pc == 0x326B70u) {
        ctx->pc = 0x326B74u;
        goto label_326b74;
    }
    ctx->pc = 0x326B6Cu;
    {
        const bool branch_taken_0x326b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b6c) {
            ctx->pc = 0x326B80u;
            goto label_326b80;
        }
    }
    ctx->pc = 0x326B74u;
label_326b74:
    // 0x326b74: 0x10000056  b           . + 4 + (0x56 << 2)
label_326b78:
    if (ctx->pc == 0x326B78u) {
        ctx->pc = 0x326B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B74u;
        // 0x326b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B7Cu;
        goto label_326b7c;
    }
    ctx->pc = 0x326B74u;
    {
        const bool branch_taken_0x326b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B74u;
        // 0x326b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b74) {
            ctx->pc = 0x326CD0u;
            goto label_326cd0;
        }
    }
    ctx->pc = 0x326B7Cu;
label_326b7c:
    // 0x326b7c: 0x0  nop
    ctx->pc = 0x326b7cu;
    // NOP
label_326b80:
    // 0x326b80: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x326b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_326b84:
    // 0x326b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326b88:
    // 0x326b88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x326b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_326b8c:
    // 0x326b8c: 0x320f809  jalr        $t9
label_326b90:
    if (ctx->pc == 0x326B90u) {
        ctx->pc = 0x326B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B8Cu;
        // 0x326b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326B94u;
        goto label_326b94;
    }
    ctx->pc = 0x326B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326B94u);
        ctx->pc = 0x326B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B8Cu;
        // 0x326b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B8Cu, 0x326B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326B94u;
label_326b94:
    // 0x326b94: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x326b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_326b98:
    // 0x326b98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x326b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326b9c:
    // 0x326b9c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x326b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_326ba0:
    // 0x326ba0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x326ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_326ba4:
    // 0x326ba4: 0xc0766dc  jal         func_1D9B70
label_326ba8:
    if (ctx->pc == 0x326BA8u) {
        ctx->pc = 0x326BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BA4u;
        // 0x326ba8: 0x7e020080  sq          $v0, 0x80($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BACu;
        goto label_326bac;
    }
    ctx->pc = 0x326BA4u;
    SET_GPR_U32(ctx, 31, 0x326BACu);
    ctx->pc = 0x326BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326BA4u;
    // 0x326ba8: 0x7e020080  sq          $v0, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x326BA4u, 0x326BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326BACu;
label_326bac:
    // 0x326bac: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x326bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_326bb0:
    // 0x326bb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x326bb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_326bb4:
    // 0x326bb4: 0xc076690  jal         func_1D9A40
label_326bb8:
    if (ctx->pc == 0x326BB8u) {
        ctx->pc = 0x326BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BB4u;
        // 0x326bb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BBCu;
        goto label_326bbc;
    }
    ctx->pc = 0x326BB4u;
    SET_GPR_U32(ctx, 31, 0x326BBCu);
    ctx->pc = 0x326BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326BB4u;
    // 0x326bb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x326BB4u, 0x326BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326BBCu;
label_326bbc:
    // 0x326bbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x326bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_326bc0:
    // 0x326bc0: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x326bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
label_326bc4:
    // 0x326bc4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x326bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_326bc8:
    // 0x326bc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x326bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_326bcc:
    // 0x326bcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x326bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_326bd0:
    // 0x326bd0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_326bd4:
    if (ctx->pc == 0x326BD4u) {
        ctx->pc = 0x326BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BD0u;
        // 0x326bd4: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BD8u;
        goto label_326bd8;
    }
    ctx->pc = 0x326BD0u;
    {
        const bool branch_taken_0x326bd0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x326BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BD0u;
        // 0x326bd4: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bd0) {
            ctx->pc = 0x326BE4u;
            goto label_326be4;
        }
    }
    ctx->pc = 0x326BD8u;
label_326bd8:
    // 0x326bd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x326bd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_326bdc:
    // 0x326bdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_326be0:
    if (ctx->pc == 0x326BE0u) {
        ctx->pc = 0x326BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BDCu;
        // 0x326be0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BE4u;
        goto label_326be4;
    }
    ctx->pc = 0x326BDCu;
    {
        const bool branch_taken_0x326bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BDCu;
        // 0x326be0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bdc) {
            ctx->pc = 0x326C00u;
            goto label_326c00;
        }
    }
    ctx->pc = 0x326BE4u;
label_326be4:
    // 0x326be4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x326be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_326be8:
    // 0x326be8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x326be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_326bec:
    // 0x326bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x326becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_326bf0:
    // 0x326bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_326bf4:
    // 0x326bf4: 0x0  nop
    ctx->pc = 0x326bf4u;
    // NOP
label_326bf8:
    // 0x326bf8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x326bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_326bfc:
    // 0x326bfc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x326bfcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_326c00:
    // 0x326c00: 0xa20004ec  sb          $zero, 0x4EC($s0)
    ctx->pc = 0x326c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1260), (uint8_t)GPR_U32(ctx, 0));
label_326c04:
    // 0x326c04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x326c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_326c08:
    // 0x326c08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x326c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_326c0c:
    // 0x326c0c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x326c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_326c10:
    // 0x326c10: 0xc0a930c  jal         func_2A4C30
label_326c14:
    if (ctx->pc == 0x326C14u) {
        ctx->pc = 0x326C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C10u;
        // 0x326c14: 0xa60004ea  sh          $zero, 0x4EA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1258), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C18u;
        goto label_326c18;
    }
    ctx->pc = 0x326C10u;
    SET_GPR_U32(ctx, 31, 0x326C18u);
    ctx->pc = 0x326C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C10u;
    // 0x326c14: 0xa60004ea  sh          $zero, 0x4EA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1258), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4C30u, 0x326C10u, 0x326C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C18u;
label_326c18:
    // 0x326c18: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_326c1c:
    if (ctx->pc == 0x326C1Cu) {
        ctx->pc = 0x326C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C18u;
        // 0x326c1c: 0xae0204e4  sw          $v0, 0x4E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C20u;
        goto label_326c20;
    }
    ctx->pc = 0x326C18u;
    {
        const bool branch_taken_0x326c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C18u;
        // 0x326c1c: 0xae0204e4  sw          $v0, 0x4E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c18) {
            ctx->pc = 0x326C88u;
            goto label_326c88;
        }
    }
    ctx->pc = 0x326C20u;
label_326c20:
    // 0x326c20: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x326c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_326c24:
    // 0x326c24: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x326c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_326c28:
    // 0x326c28: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x326c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_326c2c:
    // 0x326c2c: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x326c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_326c30:
    // 0x326c30: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x326c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_326c34:
    // 0x326c34: 0x0  nop
    ctx->pc = 0x326c34u;
    // NOP
label_326c38:
    // 0x326c38: 0x0  nop
    ctx->pc = 0x326c38u;
    // NOP
label_326c3c:
    // 0x326c3c: 0x1010  mfhi        $v0
    ctx->pc = 0x326c3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_326c40:
    // 0x326c40: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x326c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_326c44:
    // 0x326c44: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x326c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_326c48:
    // 0x326c48: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_326c4c:
    // 0x326c4c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x326c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_326c50:
    // 0x326c50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_326c54:
    if (ctx->pc == 0x326C54u) {
        ctx->pc = 0x326C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C50u;
        // 0x326c54: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C58u;
        goto label_326c58;
    }
    ctx->pc = 0x326C50u;
    {
        const bool branch_taken_0x326c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C50u;
        // 0x326c54: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c50) {
            ctx->pc = 0x326C60u;
            goto label_326c60;
        }
    }
    ctx->pc = 0x326C58u;
label_326c58:
    // 0x326c58: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x326c58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326c5c:
    // 0x326c5c: 0x0  nop
    ctx->pc = 0x326c5cu;
    // NOP
label_326c60:
    // 0x326c60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_326c64:
    if (ctx->pc == 0x326C64u) {
        ctx->pc = 0x326C68u;
        goto label_326c68;
    }
    ctx->pc = 0x326C60u;
    {
        const bool branch_taken_0x326c60 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x326c60) {
            ctx->pc = 0x326C70u;
            goto label_326c70;
        }
    }
    ctx->pc = 0x326C68u;
label_326c68:
    // 0x326c68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x326c68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326c6c:
    // 0x326c6c: 0x0  nop
    ctx->pc = 0x326c6cu;
    // NOP
label_326c70:
    // 0x326c70: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x326c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_326c74:
    // 0x326c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_326c78:
    // 0x326c78: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x326c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
label_326c7c:
    // 0x326c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_326c80:
    // 0x326c80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x326c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_326c84:
    // 0x326c84: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x326c84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_326c88:
    // 0x326c88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x326c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_326c8c:
    // 0x326c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x326c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_326c90:
    // 0x326c90: 0x0  nop
    ctx->pc = 0x326c90u;
    // NOP
label_326c94:
    // 0x326c94: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x326c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_326c98:
    // 0x326c98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_326c9c:
    if (ctx->pc == 0x326C9Cu) {
        ctx->pc = 0x326CA0u;
        goto label_326ca0;
    }
    ctx->pc = 0x326C98u;
    {
        const bool branch_taken_0x326c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x326c98) {
            ctx->pc = 0x326CB0u;
            goto label_326cb0;
        }
    }
    ctx->pc = 0x326CA0u;
label_326ca0:
    // 0x326ca0: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x326ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
label_326ca4:
    // 0x326ca4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x326ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_326ca8:
    // 0x326ca8: 0x10000008  b           . + 4 + (0x8 << 2)
label_326cac:
    if (ctx->pc == 0x326CACu) {
        ctx->pc = 0x326CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CA8u;
        // 0x326cac: 0xa60304e8  sh          $v1, 0x4E8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CB0u;
        goto label_326cb0;
    }
    ctx->pc = 0x326CA8u;
    {
        const bool branch_taken_0x326ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CA8u;
        // 0x326cac: 0xa60304e8  sh          $v1, 0x4E8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ca8) {
            ctx->pc = 0x326CCCu;
            goto label_326ccc;
        }
    }
    ctx->pc = 0x326CB0u;
label_326cb0:
    // 0x326cb0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x326cb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_326cb4:
    // 0x326cb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x326cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_326cb8:
    // 0x326cb8: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x326cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
label_326cbc:
    // 0x326cbc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x326cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_326cc0:
    // 0x326cc0: 0x0  nop
    ctx->pc = 0x326cc0u;
    // NOP
label_326cc4:
    // 0x326cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x326cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_326cc8:
    // 0x326cc8: 0xa60304e8  sh          $v1, 0x4E8($s0)
    ctx->pc = 0x326cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1256), (uint16_t)GPR_U32(ctx, 3));
label_326ccc:
    // 0x326ccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326cd0:
    // 0x326cd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x326cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_326cd4:
    // 0x326cd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x326cd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_326cd8:
    // 0x326cd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x326cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_326cdc:
    // 0x326cdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x326cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_326ce0:
    // 0x326ce0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x326ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_326ce4:
    // 0x326ce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_326ce8:
    // 0x326ce8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_326cec:
    // 0x326cec: 0x3e00008  jr          $ra
label_326cf0:
    if (ctx->pc == 0x326CF0u) {
        ctx->pc = 0x326CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CECu;
        // 0x326cf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CF4u;
        goto label_fallthrough_0x326cec;
    }
    ctx->pc = 0x326CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CECu;
        // 0x326cf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x326cec:
    ctx->pc = 0x326CF4u;
}
