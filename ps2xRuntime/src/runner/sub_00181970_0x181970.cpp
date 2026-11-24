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

// Function: sub_00181970
// Address: 0x181970 - 0x181a90
void sub_00181970_0x181970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181970_0x181970");
#endif

    switch (ctx->pc) {
        case 0x1819d8u: goto label_1819d8;
        case 0x181a18u: goto label_181a18;
        default: break;
    }

    ctx->pc = 0x181970u;

    // 0x181970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x181974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x181974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x181978: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x181978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18197c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x181980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x181984: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181988: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x181988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18198c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x181990: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x181990u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x181994: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x181998: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x181998u;
    {
        const bool branch_taken_0x181998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181998) {
            ctx->pc = 0x181A70u;
            goto label_181a70;
        }
    }
    ctx->pc = 0x1819A0u;
    // 0x1819a0: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x1819a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1819a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1819a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1819a8: 0x0  nop
    ctx->pc = 0x1819a8u;
    // NOP
    // 0x1819ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1819acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1819b0: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1819B0u;
    {
        const bool branch_taken_0x1819b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1819b0) {
            ctx->pc = 0x181A70u;
            goto label_181a70;
        }
    }
    ctx->pc = 0x1819B8u;
    // 0x1819b8: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x1819b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1819bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819c0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1819c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1819c4: 0x0  nop
    ctx->pc = 0x1819c4u;
    // NOP
    // 0x1819c8: 0x0  nop
    ctx->pc = 0x1819c8u;
    // NOP
    // 0x1819cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1819CCu;
    {
        const bool branch_taken_0x1819cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819cc) {
            ctx->pc = 0x181A48u;
            goto label_181a48;
        }
    }
    ctx->pc = 0x1819D4u;
    // 0x1819d4: 0x0  nop
    ctx->pc = 0x1819d4u;
    // NOP
label_1819d8:
    // 0x1819d8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1819dc: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x1819dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1819e0: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1819e4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1819e8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1819ec: 0x962300c6  lhu         $v1, 0xC6($s1)
    ctx->pc = 0x1819ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x1819f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1819f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1819f4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1819F4u;
    {
        const bool branch_taken_0x1819f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F4u;
        // 0x1819f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819f4) {
            ctx->pc = 0x181A40u;
            goto label_181a40;
        }
    }
    ctx->pc = 0x1819FCu;
    // 0x1819fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1819fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x181a00: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x181a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x181a04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x181a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181a08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181a0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a10: 0xc06011c  jal         func_180470
    ctx->pc = 0x181A10u;
    SET_GPR_U32(ctx, 31, 0x181A18u);
    ctx->pc = 0x181A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A10u;
    // 0x181a14: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x181A10u, 0x181A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A18u;
label_181a18:
    // 0x181a18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x181a1c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x181a1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181a20: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x181a20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x181a24: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x181a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x181a28: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x181a28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x181a2c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x181a2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x181a30: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x181a30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x181a34: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x181a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x181a38: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x181a38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x181a3c: 0x0  nop
    ctx->pc = 0x181a3cu;
    // NOP
label_181a40:
    // 0x181a40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x181a44: 0x0  nop
    ctx->pc = 0x181a44u;
    // NOP
label_181a48:
    // 0x181a48: 0x9643006a  lhu         $v1, 0x6A($s2)
    ctx->pc = 0x181a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x181a4c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x181a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x181a50: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x181A50u;
    {
        const bool branch_taken_0x181a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181a50) {
            ctx->pc = 0x1819D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1819d8;
        }
    }
    ctx->pc = 0x181A58u;
    // 0x181a58: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x181a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x181a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x181a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181a64: 0x0  nop
    ctx->pc = 0x181a64u;
    // NOP
    // 0x181a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x181a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181a6c: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x181a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_181a70:
    // 0x181a70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x181a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181a74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x181a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181a78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x181a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x181a7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x181a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181a80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x181a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181a88: 0x3e00008  jr          $ra
    ctx->pc = 0x181A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A88u;
        // 0x181a8c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A90u;
}
