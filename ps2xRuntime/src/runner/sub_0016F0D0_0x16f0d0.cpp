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

// Function: sub_0016F0D0
// Address: 0x16f0d0 - 0x16f314
void sub_0016F0D0_0x16f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F0D0_0x16f0d0");
#endif

    switch (ctx->pc) {
        case 0x16f180u: goto label_16f180;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f2b8u: goto label_16f2b8;
        default: break;
    }

    ctx->pc = 0x16f0d0u;

    // 0x16f0d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16f0d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16f0d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f0dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f0e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f0e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f0e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f0f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f0f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f0f8: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16f0f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16f0fc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16f100: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F100u;
    {
        const bool branch_taken_0x16f100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F100u;
        // 0x16f104: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f100) {
            ctx->pc = 0x16F158u;
            goto label_16f158;
        }
    }
    ctx->pc = 0x16F108u;
    // 0x16f108: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f10c: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x16f10cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f110: 0xc6c40058  lwc1        $f4, 0x58($s6)
    ctx->pc = 0x16f110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f114: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x16f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f118: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f11c: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x16f11cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f120: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16f120u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16f124: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f128: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16f128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16f12c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x16f12cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16f130: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16f130u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f134: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x16f134u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16f138: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f13c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F13Cu;
    {
        const bool branch_taken_0x16f13c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F13Cu;
        // 0x16f140: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f13c) {
            ctx->pc = 0x16F148u;
            goto label_16f148;
        }
    }
    ctx->pc = 0x16F144u;
    // 0x16f144: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16f144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f148:
    // 0x16f148: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16f148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16f14c: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x16F14Cu;
    {
        const bool branch_taken_0x16f14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f14c) {
            ctx->pc = 0x16F2E8u;
            goto label_16f2e8;
        }
    }
    ctx->pc = 0x16F154u;
    // 0x16f154: 0x0  nop
    ctx->pc = 0x16f154u;
    // NOP
label_16f158:
    // 0x16f158: 0x8ec60034  lw          $a2, 0x34($s6)
    ctx->pc = 0x16f158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x16f15c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f160: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x16f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f164: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x16f164u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16f168: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f16c: 0x24d70010  addiu       $s7, $a2, 0x10
    ctx->pc = 0x16f16cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16f170: 0x84c60008  lh          $a2, 0x8($a2)
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16f174: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x16f178: 0x10c30055  beq         $a2, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x16F178u;
    {
        const bool branch_taken_0x16f178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F178u;
        // 0x16f17c: 0xa49824  and         $s3, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f178) {
            ctx->pc = 0x16F2D0u;
            goto label_16f2d0;
        }
    }
    ctx->pc = 0x16F180u;
label_16f180:
    // 0x16f180: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x16f184: 0x2e2a821  addu        $s5, $s7, $v0
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16f188: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16f188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f18c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16f190: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x16f190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f194: 0x345202a0  ori         $s2, $v0, 0x2A0
    ctx->pc = 0x16f194u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16f198: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x16f198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16f19c: 0x0  nop
    ctx->pc = 0x16f19cu;
    // NOP
label_16f1a0:
    // 0x16f1a0: 0x86c8002c  lh          $t0, 0x2C($s6)
    ctx->pc = 0x16f1a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x16f1a4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16f1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1ac: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16f1b0: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16f1b4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16F1B4u;
    SET_GPR_U32(ctx, 31, 0x16F1BCu);
    ctx->pc = 0x16F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1B4u;
    // 0x16f1b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16F1B4u, 0x16F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F1BCu;
label_16f1bc:
    // 0x16f1bc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x16F1BCu;
    {
        const bool branch_taken_0x16f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f1bc) {
            ctx->pc = 0x16F2C0u;
            goto label_16f2c0;
        }
    }
    ctx->pc = 0x16F1C4u;
    // 0x16f1c4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16f1c8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16f1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x16f1cc: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x16f1ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16f1d0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16f1d4: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x16f1d4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x16f1d8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x16f1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16f1dc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16F1DCu;
    {
        const bool branch_taken_0x16f1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1DCu;
        // 0x16f1e0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1dc) {
            ctx->pc = 0x16F1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f1a0;
        }
    }
    ctx->pc = 0x16F1E4u;
    // 0x16f1e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16f1e8: 0x3c024820  lui         $v0, 0x4820
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18464 << 16));
    // 0x16f1ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x16f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x16f1f0: 0x34420049  ori         $v0, $v0, 0x49
    ctx->pc = 0x16f1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)73);
    // 0x16f1f4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f1f8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16f1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16f1fc: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f200: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16f204: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f208: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16f20c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16f210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f214: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x16f214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x16f218: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x16f218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x16f21c: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f220: 0xa2620023  sb          $v0, 0x23($s3)
    ctx->pc = 0x16f220u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f224: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x16f224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000100u));
    // 0x16f228: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f22c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16f230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f234: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f238: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16f23c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x16f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x16f240: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f240u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16f244: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x16f244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x16f248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f24c: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x16f24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000110u));
    // 0x16f250: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f254: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16f254u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16f258: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f25c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f260: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16f264: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x16f264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x16f268: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16f26c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x16f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x16f270: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f274: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x16f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f278: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16f27c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f280: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16f284: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16f284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f288: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16f288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16f28c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16f290: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f294: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x16f294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f29c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16f2a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f2a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16f2a8: 0xa262000f  sb          $v0, 0xF($s3)
    ctx->pc = 0x16f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f2ac: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16f2b0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16F2B0u;
    SET_GPR_U32(ctx, 31, 0x16F2B8u);
    ctx->pc = 0x16F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2B0u;
    // 0x16f2b4: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16F2B0u, 0x16F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F2B8u;
label_16f2b8:
    // 0x16f2b8: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x16f2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x16f2bc: 0x0  nop
    ctx->pc = 0x16f2bcu;
    // NOP
label_16f2c0:
    // 0x16f2c0: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x16f2c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f2c8: 0x14c3ffad  bne         $a2, $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x16F2C8u;
    {
        const bool branch_taken_0x16f2c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f2c8) {
            ctx->pc = 0x16F180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f180;
        }
    }
    ctx->pc = 0x16F2D0u;
label_16f2d0:
    // 0x16f2d0: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x16f2d4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f2d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f2dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16f2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16f2e0: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x16f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16f2e4: 0x0  nop
    ctx->pc = 0x16f2e4u;
    // NOP
label_16f2e8:
    // 0x16f2e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16f2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f2ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f2ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f2f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f2f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f2f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f2f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f2f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f2f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f2fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f30c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F30Cu;
        // 0x16f310: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F314u;
}
