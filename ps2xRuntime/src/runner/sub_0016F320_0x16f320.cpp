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

// Function: sub_0016F320
// Address: 0x16f320 - 0x16f5b4
void sub_0016F320_0x16f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F320_0x16f320");
#endif

    switch (ctx->pc) {
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f414u: goto label_16f414;
        case 0x16f55cu: goto label_16f55c;
        default: break;
    }

    ctx->pc = 0x16f320u;

    // 0x16f320: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16f324: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16f328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f32c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f330: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f334: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f348: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16f348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16f34c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16f350: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F350u;
    {
        const bool branch_taken_0x16f350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F350u;
        // 0x16f354: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f350) {
            ctx->pc = 0x16F3A8u;
            goto label_16f3a8;
        }
    }
    ctx->pc = 0x16F358u;
    // 0x16f358: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f35c: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x16f35cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f360: 0xc6c40058  lwc1        $f4, 0x58($s6)
    ctx->pc = 0x16f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f364: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x16f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f368: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f36c: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x16f36cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f370: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16f370u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16f374: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f378: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16f378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16f37c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x16f37cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16f380: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16f380u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f384: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x16f384u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16f388: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f38c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F38Cu;
    {
        const bool branch_taken_0x16f38c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F38Cu;
        // 0x16f390: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f38c) {
            ctx->pc = 0x16F398u;
            goto label_16f398;
        }
    }
    ctx->pc = 0x16F394u;
    // 0x16f394: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16f394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f398:
    // 0x16f398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16f39c: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x16F39Cu;
    {
        const bool branch_taken_0x16f39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f39c) {
            ctx->pc = 0x16F588u;
            goto label_16f588;
        }
    }
    ctx->pc = 0x16F3A4u;
    // 0x16f3a4: 0x0  nop
    ctx->pc = 0x16f3a4u;
    // NOP
label_16f3a8:
    // 0x16f3a8: 0x8ec60034  lw          $a2, 0x34($s6)
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x16f3ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f3b0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x16f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f3b4: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x16f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16f3b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f3bc: 0x24d70010  addiu       $s7, $a2, 0x10
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16f3c0: 0x84c60008  lh          $a2, 0x8($a2)
    ctx->pc = 0x16f3c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16f3c4: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x16f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x16f3c8: 0x10c30069  beq         $a2, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x16F3C8u;
    {
        const bool branch_taken_0x16f3c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3C8u;
        // 0x16f3cc: 0xa49824  and         $s3, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3c8) {
            ctx->pc = 0x16F570u;
            goto label_16f570;
        }
    }
    ctx->pc = 0x16F3D0u;
label_16f3d0:
    // 0x16f3d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16f3d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16f3d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16f3d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f3e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16f3e4: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x16f3e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16f3e8: 0x345202a0  ori         $s2, $v0, 0x2A0
    ctx->pc = 0x16f3e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16f3ec: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x16f3ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16f3f0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x16f3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3f4: 0x0  nop
    ctx->pc = 0x16f3f4u;
    // NOP
label_16f3f8:
    // 0x16f3f8: 0x86c8002c  lh          $t0, 0x2C($s6)
    ctx->pc = 0x16f3f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x16f3fc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16f3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16f400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f404: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16f408: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16f40c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16F40Cu;
    SET_GPR_U32(ctx, 31, 0x16F414u);
    ctx->pc = 0x16F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F40Cu;
    // 0x16f410: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16F40Cu, 0x16F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F414u;
label_16f414:
    // 0x16f414: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x16F414u;
    {
        const bool branch_taken_0x16f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f414) {
            ctx->pc = 0x16F560u;
            goto label_16f560;
        }
    }
    ctx->pc = 0x16F41Cu;
    // 0x16f41c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16f420: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x16f424: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x16f424u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16f428: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16f42c: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x16f42cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x16f430: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x16f430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16f434: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16F434u;
    {
        const bool branch_taken_0x16f434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F434u;
        // 0x16f438: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f434) {
            ctx->pc = 0x16F3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f3f8;
        }
    }
    ctx->pc = 0x16F43Cu;
    // 0x16f43c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f440: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16f440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16f444: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16f444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16f448: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16f448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16f44c: 0x3c026c18  lui         $v0, 0x6C18
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27672 << 16));
    // 0x16f450: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f454: 0x3442004a  ori         $v0, $v0, 0x4A
    ctx->pc = 0x16f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)74);
    // 0x16f458: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f45c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f460: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16f464: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16f468: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x16f46c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x16f46cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x16f470: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16f474: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x16f474u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f478: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f47c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16f480: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x16f480u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f484: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f488: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f488u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16f48c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x16f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x16f490: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f494: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f498: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x16f498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x16f49c: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f4a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16f4a4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16f4a8: 0xa0a2001b  sb          $v0, 0x1B($a1)
    ctx->pc = 0x16f4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f4ac: 0x8c220110  lw          $v0, 0x110($at)
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16f4b0: 0xa4a20020  sh          $v0, 0x20($a1)
    ctx->pc = 0x16f4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f4b8: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16f4bc: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x16f4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f4c4: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16f4c8: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x16f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x16f4cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f4d0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f4d4: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x16f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x16f4d8: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x16f4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x16f4dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16f4e0: 0xa0a2002b  sb          $v0, 0x2B($a1)
    ctx->pc = 0x16f4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f4e4: 0x8c220120  lw          $v0, 0x120($at)
    ctx->pc = 0x16f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 288)));
    // 0x16f4e8: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x16f4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f4f0: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16f4f4: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x16f4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f4fc: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16f500: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x16f500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x16f504: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f508: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x16f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x16f50c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x16f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x16f510: 0xa260000b  sb          $zero, 0xB($s3)
    ctx->pc = 0x16f510u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f514: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x16f514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f518: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16f51c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f524: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16f528: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16f528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f52c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16f530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16f534: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x16f534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x16f538: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x16f538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16f53c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f540: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16f544: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f548: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16f548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16f54c: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x16f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f550: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16f554: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16F554u;
    SET_GPR_U32(ctx, 31, 0x16F55Cu);
    ctx->pc = 0x16F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F554u;
    // 0x16f558: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16F554u, 0x16F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F55Cu;
label_16f55c:
    // 0x16f55c: 0x0  nop
    ctx->pc = 0x16f55cu;
    // NOP
label_16f560:
    // 0x16f560: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x16f564: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f568: 0x14c3ff99  bne         $a2, $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x16F568u;
    {
        const bool branch_taken_0x16f568 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f568) {
            ctx->pc = 0x16F3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f3d0;
        }
    }
    ctx->pc = 0x16F570u;
label_16f570:
    // 0x16f570: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x16f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x16f574: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f578: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f57c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16f580: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x16f580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16f584: 0x0  nop
    ctx->pc = 0x16f584u;
    // NOP
label_16f588:
    // 0x16f588: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16f588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f58c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f58cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f590: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f590u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f594: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f594u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f598: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f59c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f59cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f5a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f5a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16F5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5ACu;
        // 0x16f5b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F5B4u;
}
