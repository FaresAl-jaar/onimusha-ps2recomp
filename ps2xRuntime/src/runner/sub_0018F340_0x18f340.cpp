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

// Function: sub_0018F340
// Address: 0x18f340 - 0x18f4bc
void sub_0018F340_0x18f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F340_0x18f340");
#endif

    switch (ctx->pc) {
        case 0x18f44cu: goto label_18f44c;
        default: break;
    }

    ctx->pc = 0x18f340u;

    // 0x18f340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f358: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x18f358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x18f35c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f360: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x18f364: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F364u;
    {
        const bool branch_taken_0x18f364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F364u;
        // 0x18f368: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f364) {
            ctx->pc = 0x18F390u;
            goto label_18f390;
        }
    }
    ctx->pc = 0x18F36Cu;
    // 0x18f36c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x18f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18f370: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F370u;
    {
        const bool branch_taken_0x18f370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F370u;
        // 0x18f374: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f370) {
            ctx->pc = 0x18F390u;
            goto label_18f390;
        }
    }
    ctx->pc = 0x18F378u;
    // 0x18f378: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F378u;
    {
        const bool branch_taken_0x18f378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18f378) {
            ctx->pc = 0x18F390u;
            goto label_18f390;
        }
    }
    ctx->pc = 0x18F380u;
    // 0x18f380: 0x640800ff  daddiu      $t0, $zero, 0xFF
    ctx->pc = 0x18f380u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x18f384: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x18f384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f388: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18f388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f38c: 0x0  nop
    ctx->pc = 0x18f38cu;
    // NOP
label_18f390:
    // 0x18f390: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x18f390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18f394: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x18f394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18f398: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x18f398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f39c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18f3a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18f3a4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x18f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18f3a8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18f3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18f3ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f3b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18f3b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f3b8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x18F3B8u;
    {
        const bool branch_taken_0x18f3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B8u;
        // 0x18f3bc: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3b8) {
            ctx->pc = 0x18F458u;
            goto label_18f458;
        }
    }
    ctx->pc = 0x18F3C0u;
    // 0x18f3c0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C0u;
        // 0x18f3c4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F3D4u;
            goto label_18f3d4;
        }
    }
    ctx->pc = 0x18F3C8u;
    // 0x18f3c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18f3c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f3cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F3CCu;
    {
        const bool branch_taken_0x18f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3CCu;
        // 0x18f3d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3cc) {
            ctx->pc = 0x18F3ECu;
            goto label_18f3ec;
        }
    }
    ctx->pc = 0x18F3D4u;
label_18f3d4:
    // 0x18f3d4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x18f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x18f3d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18f3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18f3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f3e0: 0x0  nop
    ctx->pc = 0x18f3e0u;
    // NOP
    // 0x18f3e4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x18f3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18f3e8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x18f3e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_18f3ec:
    // 0x18f3ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x18f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f3f0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x18f3f4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x18f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x18f3f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18f3fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18f3fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f404: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18f404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18f408: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18f408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18f40c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f410: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18F410u;
    {
        const bool branch_taken_0x18f410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f410) {
            ctx->pc = 0x18F428u;
            goto label_18f428;
        }
    }
    ctx->pc = 0x18F418u;
    // 0x18f418: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f41c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x18f41cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18f420: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F420u;
        // 0x18f424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F444u;
            goto label_18f444;
        }
    }
    ctx->pc = 0x18F428u;
label_18f428:
    // 0x18f428: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18f428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18f42c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18f430: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f434: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x18f434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18f438: 0x0  nop
    ctx->pc = 0x18f438u;
    // NOP
    // 0x18f43c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x18f43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x18f440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f444:
    // 0x18f444: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x18F444u;
    SET_GPR_U32(ctx, 31, 0x18F44Cu);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x18F444u, 0x18F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F44Cu;
label_18f44c:
    // 0x18f44c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F44Cu;
    {
        const bool branch_taken_0x18f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F44Cu;
        // 0x18f450: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f44c) {
            ctx->pc = 0x18F460u;
            goto label_18f460;
        }
    }
    ctx->pc = 0x18F454u;
    // 0x18f454: 0x0  nop
    ctx->pc = 0x18f454u;
    // NOP
label_18f458:
    // 0x18f458: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18f458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f45c: 0x0  nop
    ctx->pc = 0x18f45cu;
    // NOP
label_18f460:
    // 0x18f460: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x18f460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x18f464: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x18f464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x18f468: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x18f468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x18f46c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F46Cu;
    {
        const bool branch_taken_0x18f46c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x18F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F46Cu;
        // 0x18f470: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f46c) {
            ctx->pc = 0x18F488u;
            goto label_18f488;
        }
    }
    ctx->pc = 0x18F474u;
    // 0x18f474: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x18f474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x18f478: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x18f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x18f47c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18F47Cu;
    {
        const bool branch_taken_0x18f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F47Cu;
        // 0x18f480: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f47c) {
            ctx->pc = 0x18F4A8u;
            goto label_18f4a8;
        }
    }
    ctx->pc = 0x18F484u;
    // 0x18f484: 0x0  nop
    ctx->pc = 0x18f484u;
    // NOP
label_18f488:
    // 0x18f488: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18f48c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18f48cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18f490: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x18f490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f494: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x18f494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x18f498: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18f49c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18f49cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18f4a0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x18f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x18f4a4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x18f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_18f4a8:
    // 0x18f4a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18F4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B4u;
        // 0x18f4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F4BCu;
}
