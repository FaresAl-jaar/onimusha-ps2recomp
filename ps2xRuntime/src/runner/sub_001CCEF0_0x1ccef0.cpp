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

// Function: sub_001CCEF0
// Address: 0x1ccef0 - 0x1cd010
void sub_001CCEF0_0x1ccef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCEF0_0x1ccef0");
#endif

    switch (ctx->pc) {
        case 0x1ccf58u: goto label_1ccf58;
        case 0x1ccf98u: goto label_1ccf98;
        default: break;
    }

    ctx->pc = 0x1ccef0u;

    // 0x1ccef0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ccef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ccef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ccef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ccef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ccef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ccefc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ccefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ccf00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ccf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ccf04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ccf08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccf08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ccf0c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1ccf10: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1ccf14: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1ccf18: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CCF18u;
    {
        const bool branch_taken_0x1ccf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF18u;
        // 0x1ccf1c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf18) {
            ctx->pc = 0x1CCFF0u;
            goto label_1ccff0;
        }
    }
    ctx->pc = 0x1CCF20u;
    // 0x1ccf20: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x1ccf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccf24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf28: 0x0  nop
    ctx->pc = 0x1ccf28u;
    // NOP
    // 0x1ccf2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ccf2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccf30: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CCF30u;
    {
        const bool branch_taken_0x1ccf30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccf30) {
            ctx->pc = 0x1CCFF0u;
            goto label_1ccff0;
        }
    }
    ctx->pc = 0x1CCF38u;
    // 0x1ccf38: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x1ccf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ccf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf40: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1ccf40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ccf44: 0x0  nop
    ctx->pc = 0x1ccf44u;
    // NOP
    // 0x1ccf48: 0x0  nop
    ctx->pc = 0x1ccf48u;
    // NOP
    // 0x1ccf4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CCF4Cu;
    {
        const bool branch_taken_0x1ccf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf4c) {
            ctx->pc = 0x1CCFC8u;
            goto label_1ccfc8;
        }
    }
    ctx->pc = 0x1CCF54u;
    // 0x1ccf54: 0x0  nop
    ctx->pc = 0x1ccf54u;
    // NOP
label_1ccf58:
    // 0x1ccf58: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ccf5c: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x1ccf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ccf60: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x1ccf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ccf64: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1ccf64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ccf68: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ccf6c: 0x962300c6  lhu         $v1, 0xC6($s1)
    ctx->pc = 0x1ccf6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x1ccf70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ccf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ccf74: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCF74u;
    {
        const bool branch_taken_0x1ccf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF74u;
        // 0x1ccf78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf74) {
            ctx->pc = 0x1CCFC0u;
            goto label_1ccfc0;
        }
    }
    ctx->pc = 0x1CCF7Cu;
    // 0x1ccf7c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ccf80: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1ccf84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ccf84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ccf88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccf8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf90: 0xc06011c  jal         func_180470
    ctx->pc = 0x1CCF90u;
    SET_GPR_U32(ctx, 31, 0x1CCF98u);
    ctx->pc = 0x1CCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF90u;
    // 0x1ccf94: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x1CCF90u, 0x1CCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF98u;
label_1ccf98:
    // 0x1ccf98: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ccf9c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1ccf9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccfa0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1ccfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x1ccfa4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x1ccfa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccfa8: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1ccfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1ccfac: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1ccfacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ccfb0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1ccfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1ccfb4: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x1ccfb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ccfb8: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x1ccfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x1ccfbc: 0x0  nop
    ctx->pc = 0x1ccfbcu;
    // NOP
label_1ccfc0:
    // 0x1ccfc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ccfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ccfc4: 0x0  nop
    ctx->pc = 0x1ccfc4u;
    // NOP
label_1ccfc8:
    // 0x1ccfc8: 0x9643006a  lhu         $v1, 0x6A($s2)
    ctx->pc = 0x1ccfc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x1ccfcc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1ccfccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ccfd0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CCFD0u;
    {
        const bool branch_taken_0x1ccfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccfd0) {
            ctx->pc = 0x1CCF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf58;
        }
    }
    ctx->pc = 0x1CCFD8u;
    // 0x1ccfd8: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x1ccfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccfdc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccfe4: 0x0  nop
    ctx->pc = 0x1ccfe4u;
    // NOP
    // 0x1ccfe8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ccfe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ccfec: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x1ccfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_1ccff0:
    // 0x1ccff0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ccff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccff4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ccff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ccff8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccffc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ccffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd000: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cd000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd008: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD008u;
        // 0x1cd00c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD010u;
}
