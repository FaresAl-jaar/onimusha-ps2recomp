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

// Function: sub_00182820
// Address: 0x182820 - 0x182940
void sub_00182820_0x182820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182820_0x182820");
#endif

    switch (ctx->pc) {
        case 0x182888u: goto label_182888;
        case 0x1828c8u: goto label_1828c8;
        default: break;
    }

    ctx->pc = 0x182820u;

    // 0x182820: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182824: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x182824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x182828: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x182828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18282c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x182830: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x182830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x182834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182838: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x182838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18283c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x18283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x182840: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x182844: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x182844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x182848: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x182848u;
    {
        const bool branch_taken_0x182848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182848u;
        // 0x18284c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182848) {
            ctx->pc = 0x182920u;
            goto label_182920;
        }
    }
    ctx->pc = 0x182850u;
    // 0x182850: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x182850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182858: 0x0  nop
    ctx->pc = 0x182858u;
    // NOP
    // 0x18285c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18285cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182860: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x182860u;
    {
        const bool branch_taken_0x182860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182860) {
            ctx->pc = 0x182920u;
            goto label_182920;
        }
    }
    ctx->pc = 0x182868u;
    // 0x182868: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x182868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18286c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18286cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182870: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x182870u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x182874: 0x0  nop
    ctx->pc = 0x182874u;
    // NOP
    // 0x182878: 0x0  nop
    ctx->pc = 0x182878u;
    // NOP
    // 0x18287c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18287Cu;
    {
        const bool branch_taken_0x18287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18287c) {
            ctx->pc = 0x1828F8u;
            goto label_1828f8;
        }
    }
    ctx->pc = 0x182884u;
    // 0x182884: 0x0  nop
    ctx->pc = 0x182884u;
    // NOP
label_182888:
    // 0x182888: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18288c: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x18288cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x182890: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x182890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x182894: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x182898: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18289c: 0x962300c6  lhu         $v1, 0xC6($s1)
    ctx->pc = 0x18289cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x1828a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1828a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1828a4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1828A4u;
    {
        const bool branch_taken_0x1828a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1828A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A4u;
        // 0x1828a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828a4) {
            ctx->pc = 0x1828F0u;
            goto label_1828f0;
        }
    }
    ctx->pc = 0x1828ACu;
    // 0x1828ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1828b0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1828b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1828b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1828b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1828bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1828bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828c0: 0xc06011c  jal         func_180470
    ctx->pc = 0x1828C0u;
    SET_GPR_U32(ctx, 31, 0x1828C8u);
    ctx->pc = 0x1828C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828C0u;
    // 0x1828c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x1828C0u, 0x1828C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828C8u;
label_1828c8:
    // 0x1828c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1828cc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1828ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1828d0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1828d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x1828d4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x1828d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1828d8: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1828d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1828dc: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1828dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1828e0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1828e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1828e4: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x1828e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1828e8: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x1828e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x1828ec: 0x0  nop
    ctx->pc = 0x1828ecu;
    // NOP
label_1828f0:
    // 0x1828f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1828f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1828f4: 0x0  nop
    ctx->pc = 0x1828f4u;
    // NOP
label_1828f8:
    // 0x1828f8: 0x9643006a  lhu         $v1, 0x6A($s2)
    ctx->pc = 0x1828f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x1828fc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1828fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x182900: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x182900u;
    {
        const bool branch_taken_0x182900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182900) {
            ctx->pc = 0x182888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182888;
        }
    }
    ctx->pc = 0x182908u;
    // 0x182908: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x182908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18290c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x182910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182914: 0x0  nop
    ctx->pc = 0x182914u;
    // NOP
    // 0x182918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18291c: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x18291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_182920:
    // 0x182920: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182924: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182928: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x182928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18292c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18292cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182930: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x182930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182934: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x182934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182938: 0x3e00008  jr          $ra
    ctx->pc = 0x182938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182938u;
        // 0x18293c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182940u;
}
