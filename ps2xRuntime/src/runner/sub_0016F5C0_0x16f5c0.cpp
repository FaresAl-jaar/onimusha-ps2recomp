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

// Function: sub_0016F5C0
// Address: 0x16f5c0 - 0x16f8d4
void sub_0016F5C0_0x16f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F5C0_0x16f5c0");
#endif

    switch (ctx->pc) {
        case 0x16f670u: goto label_16f670;
        case 0x16f698u: goto label_16f698;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f87cu: goto label_16f87c;
        default: break;
    }

    ctx->pc = 0x16f5c0u;

    // 0x16f5c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16f5c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16f5c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f5cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f5d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f5d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f5d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f5dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f5e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f5e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f5e8: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16f5e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16f5ec: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16f5f0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F5F0u;
    {
        const bool branch_taken_0x16f5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F0u;
        // 0x16f5f4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5f0) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F5F8u;
    // 0x16f5f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f5fc: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x16f5fcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f600: 0xc6c40058  lwc1        $f4, 0x58($s6)
    ctx->pc = 0x16f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f604: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x16f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f608: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f60c: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x16f60cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f610: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16f610u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16f614: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f618: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16f618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16f61c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x16f61cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16f620: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16f620u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f624: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x16f624u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16f628: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f62c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F62Cu;
    {
        const bool branch_taken_0x16f62c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F62Cu;
        // 0x16f630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f62c) {
            ctx->pc = 0x16F638u;
            goto label_16f638;
        }
    }
    ctx->pc = 0x16F634u;
    // 0x16f634: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16f634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f638:
    // 0x16f638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16f638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16f63c: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x16F63Cu;
    {
        const bool branch_taken_0x16f63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f63c) {
            ctx->pc = 0x16F8A8u;
            goto label_16f8a8;
        }
    }
    ctx->pc = 0x16F644u;
    // 0x16f644: 0x0  nop
    ctx->pc = 0x16f644u;
    // NOP
label_16f648:
    // 0x16f648: 0x8ec60034  lw          $a2, 0x34($s6)
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x16f64c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f650: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x16f650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f654: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x16f654u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16f658: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f65c: 0x24d70010  addiu       $s7, $a2, 0x10
    ctx->pc = 0x16f65cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16f660: 0x84c60008  lh          $a2, 0x8($a2)
    ctx->pc = 0x16f660u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16f664: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x16f664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x16f668: 0x10c30089  beq         $a2, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x16F668u;
    {
        const bool branch_taken_0x16f668 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F668u;
        // 0x16f66c: 0xa49824  and         $s3, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f668) {
            ctx->pc = 0x16F890u;
            goto label_16f890;
        }
    }
    ctx->pc = 0x16F670u;
label_16f670:
    // 0x16f670: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x16f674: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16f678: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16f678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f67c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f680: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16f684: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x16f684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16f688: 0x345202a0  ori         $s2, $v0, 0x2A0
    ctx->pc = 0x16f688u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16f68c: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x16f68cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16f690: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x16f690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f694: 0x0  nop
    ctx->pc = 0x16f694u;
    // NOP
label_16f698:
    // 0x16f698: 0x86c8002c  lh          $t0, 0x2C($s6)
    ctx->pc = 0x16f698u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x16f69c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16f6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x16f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16f6a8: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16f6ac: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16F6ACu;
    SET_GPR_U32(ctx, 31, 0x16F6B4u);
    ctx->pc = 0x16F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6ACu;
    // 0x16f6b0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16F6ACu, 0x16F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6B4u;
label_16f6b4:
    // 0x16f6b4: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x16F6B4u;
    {
        const bool branch_taken_0x16f6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6b4) {
            ctx->pc = 0x16F880u;
            goto label_16f880;
        }
    }
    ctx->pc = 0x16F6BCu;
    // 0x16f6bc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16f6c0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x16f6c4: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x16f6c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16f6c8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16f6cc: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x16f6ccu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x16f6d0: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x16f6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16f6d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16F6D4u;
    {
        const bool branch_taken_0x16f6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6D4u;
        // 0x16f6d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6d4) {
            ctx->pc = 0x16F698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f698;
        }
    }
    ctx->pc = 0x16F6DCu;
    // 0x16f6dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f6e0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16f6e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16f6e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16f6ec: 0x3c026c28  lui         $v0, 0x6C28
    ctx->pc = 0x16f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27688 << 16));
    // 0x16f6f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f6f4: 0x3442004a  ori         $v0, $v0, 0x4A
    ctx->pc = 0x16f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)74);
    // 0x16f6f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6fc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f700: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16f704: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x16f704u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16f708: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x16f708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x16f70c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x16f710: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16f714: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x16f714u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f718: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f71c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16f720: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x16f720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f724: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f728: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f728u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16f72c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x16f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x16f730: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f734: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f738: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x16f738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x16f73c: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f744: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16f744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16f748: 0xa0a2001b  sb          $v0, 0x1B($a1)
    ctx->pc = 0x16f748u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f74c: 0x8c220110  lw          $v0, 0x110($at)
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16f750: 0xa4a20020  sh          $v0, 0x20($a1)
    ctx->pc = 0x16f750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f754: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f758: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16f758u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16f75c: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x16f75cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f760: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f764: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16f764u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16f768: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x16f768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x16f76c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f770: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f774: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x16f774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x16f778: 0x92a30006  lbu         $v1, 0x6($s5)
    ctx->pc = 0x16f778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f77c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x16f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16f780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f784: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16f784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16f788: 0xa0a2002b  sb          $v0, 0x2B($a1)
    ctx->pc = 0x16f788u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f78c: 0x8c220120  lw          $v0, 0x120($at)
    ctx->pc = 0x16f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 288)));
    // 0x16f790: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x16f790u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f794: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f798: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16f79c: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x16f79cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f7a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f7a4: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16f7a8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f7ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f7b0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f7b4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x16f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x16f7b8: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f7bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16f7c0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16f7c4: 0xa262000b  sb          $v0, 0xB($s3)
    ctx->pc = 0x16f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f7c8: 0x8c220130  lw          $v0, 0x130($at)
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 304)));
    // 0x16f7cc: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x16f7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f7d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f7d4: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16f7d8: 0xa6620012  sh          $v0, 0x12($s3)
    ctx->pc = 0x16f7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f7dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f7e0: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16f7e4: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x16f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x16f7e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f7ec: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f7f0: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x16f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x16f7f4: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f7f8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x16f7fc: 0xa262001b  sb          $v0, 0x1B($s3)
    ctx->pc = 0x16f7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f800: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
    // 0x16f804: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x16f804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x16f808: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x16f808u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f80c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f810: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16f810u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16f814: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x16f814u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f818: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f81c: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16f820: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f828: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f82c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x16f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x16f830: 0xa260000b  sb          $zero, 0xB($s3)
    ctx->pc = 0x16f830u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f834: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x16f834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f838: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x16f838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16f83c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f844: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16f848: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16f848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f84c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16f850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16f854: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x16f854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x16f858: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x16f858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f85c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f860: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16f864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f868: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16f868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16f86c: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x16f86cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f870: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16f874: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16F874u;
    SET_GPR_U32(ctx, 31, 0x16F87Cu);
    ctx->pc = 0x16F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F874u;
    // 0x16f878: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16F874u, 0x16F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F87Cu;
label_16f87c:
    // 0x16f87c: 0x0  nop
    ctx->pc = 0x16f87cu;
    // NOP
label_16f880:
    // 0x16f880: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x16f880u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x16f884: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f888: 0x14c3ff79  bne         $a2, $v1, . + 4 + (-0x87 << 2)
    ctx->pc = 0x16F888u;
    {
        const bool branch_taken_0x16f888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f888) {
            ctx->pc = 0x16F670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f670;
        }
    }
    ctx->pc = 0x16F890u;
label_16f890:
    // 0x16f890: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x16f894: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16f894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f89c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16f89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16f8a0: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x16f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16f8a4: 0x0  nop
    ctx->pc = 0x16f8a4u;
    // NOP
label_16f8a8:
    // 0x16f8a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16f8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f8ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f8acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f8b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f8b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f8b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f8b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f8b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f8bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f8c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f8c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f8c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f8c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8CCu;
        // 0x16f8d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8D4u;
}
