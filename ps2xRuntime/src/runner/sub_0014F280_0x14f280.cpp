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

// Function: sub_0014F280
// Address: 0x14f280 - 0x14f708
void sub_0014F280_0x14f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F280_0x14f280");
#endif

    switch (ctx->pc) {
        case 0x14f340u: goto label_14f340;
        case 0x14f378u: goto label_14f378;
        default: break;
    }

    ctx->pc = 0x14f280u;

    // 0x14f280: 0x90a400e4  lbu         $a0, 0xE4($a1)
    ctx->pc = 0x14f280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14f284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f288: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F288u;
    {
        const bool branch_taken_0x14f288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14f288) {
            ctx->pc = 0x14F2F8u;
            goto label_14f2f8;
        }
    }
    ctx->pc = 0x14F290u;
    // 0x14f290: 0x90c200e4  lbu         $v0, 0xE4($a2)
    ctx->pc = 0x14f290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x14f294: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F294u;
    {
        const bool branch_taken_0x14f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14f294) {
            ctx->pc = 0x14F2F8u;
            goto label_14f2f8;
        }
    }
    ctx->pc = 0x14F29Cu;
    // 0x14f29c: 0x8ca200ec  lw          $v0, 0xEC($a1)
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14f2a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F2A0u;
    {
        const bool branch_taken_0x14f2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2a0) {
            ctx->pc = 0x14F2F8u;
            goto label_14f2f8;
        }
    }
    ctx->pc = 0x14F2A8u;
    // 0x14f2a8: 0x8cc300ec  lw          $v1, 0xEC($a2)
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x14f2ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14F2ACu;
    {
        const bool branch_taken_0x14f2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2ac) {
            ctx->pc = 0x14F2F8u;
            goto label_14f2f8;
        }
    }
    ctx->pc = 0x14F2B4u;
    // 0x14f2b4: 0xc44300a0  lwc1        $f3, 0xA0($v0)
    ctx->pc = 0x14f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f2b8: 0xc46200a0  lwc1        $f2, 0xA0($v1)
    ctx->pc = 0x14f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f2bc: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x14f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f2c0: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x14f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2c4: 0xc4450070  lwc1        $f5, 0x70($v0)
    ctx->pc = 0x14f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14f2c8: 0xc4640070  lwc1        $f4, 0x70($v1)
    ctx->pc = 0x14f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f2cc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x14f2ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14f2d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14f2d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f2d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14f2d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14f2d8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x14f2d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x14f2dc: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x14f2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x14f2e0: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x14f2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x14f2e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f2e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F2E8u;
    {
        const bool branch_taken_0x14f2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f2e8) {
            ctx->pc = 0x14F2F8u;
            goto label_14f2f8;
        }
    }
    ctx->pc = 0x14F2F0u;
    // 0x14f2f0: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x14F2F0u;
    {
        const bool branch_taken_0x14f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2F0u;
        // 0x14f2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2f0) {
            ctx->pc = 0x14F700u;
            goto label_14f700;
        }
    }
    ctx->pc = 0x14F2F8u;
label_14f2f8:
    // 0x14f2f8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x14f2f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14f2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f300: 0x102000ff  beqz        $at, . + 4 + (0xFF << 2)
    ctx->pc = 0x14F300u;
    {
        const bool branch_taken_0x14f300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F300u;
        // 0x14f304: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f300) {
            ctx->pc = 0x14F700u;
            goto label_14f700;
        }
    }
    ctx->pc = 0x14F308u;
    // 0x14f308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14f308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f30c: 0x24c906b4  addiu       $t1, $a2, 0x6B4
    ctx->pc = 0x14f30cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1716));
    // 0x14f310: 0x24a806b4  addiu       $t0, $a1, 0x6B4
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
    // 0x14f314: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x14f318: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x14f31c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x14f31cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f320: 0x3c0b3dcc  lui         $t3, 0x3DCC
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)15820 << 16));
    // 0x14f324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f328: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14f32c: 0x3567cccd  ori         $a3, $t3, 0xCCCD
    ctx->pc = 0x14f32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)52429);
    // 0x14f330: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f334: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14f334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f338: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x14f33c: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x14f33cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14f340:
    // 0x14f340: 0x8ca700ec  lw          $a3, 0xEC($a1)
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14f344: 0xea7021  addu        $t6, $a3, $t2
    ctx->pc = 0x14f344u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14f348: 0x91c70000  lbu         $a3, 0x0($t6)
    ctx->pc = 0x14f348u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x14f34c: 0x10e000e6  beqz        $a3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F6E8u;
            goto label_14f6e8;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0xc5c40070  lwc1        $f4, 0x70($t6)
    ctx->pc = 0x14f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f358: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x14f358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f35c: 0x450100e2  bc1t        . + 4 + (0xE2 << 2)
    ctx->pc = 0x14F35Cu;
    {
        const bool branch_taken_0x14f35c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f35c) {
            ctx->pc = 0x14F6E8u;
            goto label_14f6e8;
        }
    }
    ctx->pc = 0x14F364u;
    // 0x14f364: 0x90c700e4  lbu         $a3, 0xE4($a2)
    ctx->pc = 0x14f364u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x14f368: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x14f368u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14f36c: 0x102000de  beqz        $at, . + 4 + (0xDE << 2)
    ctx->pc = 0x14F36Cu;
    {
        const bool branch_taken_0x14f36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F36Cu;
        // 0x14f370: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f36c) {
            ctx->pc = 0x14F6E8u;
            goto label_14f6e8;
        }
    }
    ctx->pc = 0x14F374u;
    // 0x14f374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f378:
    // 0x14f378: 0x8ccd00ec  lw          $t5, 0xEC($a2)
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x14f37c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x14f380: 0x91b80000  lbu         $t8, 0x0($t5)
    ctx->pc = 0x14f380u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14f384: 0x130000d2  beqz        $t8, . + 4 + (0xD2 << 2)
    ctx->pc = 0x14F384u;
    {
        const bool branch_taken_0x14f384 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f384) {
            ctx->pc = 0x14F6D0u;
            goto label_14f6d0;
        }
    }
    ctx->pc = 0x14F38Cu;
    // 0x14f38c: 0xc5a90070  lwc1        $f9, 0x70($t5)
    ctx->pc = 0x14f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x14f390: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x14f390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f394: 0x450100ce  bc1t        . + 4 + (0xCE << 2)
    ctx->pc = 0x14F394u;
    {
        const bool branch_taken_0x14f394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f394) {
            ctx->pc = 0x14F6D0u;
            goto label_14f6d0;
        }
    }
    ctx->pc = 0x14F39Cu;
    // 0x14f39c: 0xc5c600a4  lwc1        $f6, 0xA4($t6)
    ctx->pc = 0x14f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14f3a0: 0xc5a500a4  lwc1        $f5, 0xA4($t5)
    ctx->pc = 0x14f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14f3a4: 0xc5c70074  lwc1        $f7, 0x74($t6)
    ctx->pc = 0x14f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14f3a8: 0xc5a80074  lwc1        $f8, 0x74($t5)
    ctx->pc = 0x14f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14f3ac: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x14f3acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x14f3b0: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x14f3b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x14f3b4: 0x46053940  add.s       $f5, $f7, $f5
    ctx->pc = 0x14f3b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x14f3b8: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x14f3b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x14f3bc: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x14f3bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x14f3c0: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x14f3c0u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x14f3c4: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x14f3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f3c8: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F6D0u;
            goto label_14f6d0;
        }
    }
    ctx->pc = 0x14F3D0u;
    // 0x14f3d0: 0xc5c700a0  lwc1        $f7, 0xA0($t6)
    ctx->pc = 0x14f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14f3d4: 0xc5a600a0  lwc1        $f6, 0xA0($t5)
    ctx->pc = 0x14f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14f3d8: 0xc5c80070  lwc1        $f8, 0x70($t6)
    ctx->pc = 0x14f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14f3dc: 0xc5c500a8  lwc1        $f5, 0xA8($t6)
    ctx->pc = 0x14f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14f3e0: 0xc5a400a8  lwc1        $f4, 0xA8($t5)
    ctx->pc = 0x14f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f3e4: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x14f3e4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x14f3e8: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x14f3e8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x14f3ec: 0x46042981  sub.s       $f6, $f5, $f4
    ctx->pc = 0x14f3ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x14f3f0: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x14f3f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x14f3f4: 0x46084102  mul.s       $f4, $f8, $f8
    ctx->pc = 0x14f3f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x14f3f8: 0x4606315c  madd.s      $f5, $f6, $f6
    ctx->pc = 0x14f3f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x14f3fc: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x14f3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f400: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x14F400u;
    {
        const bool branch_taken_0x14f400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f400) {
            ctx->pc = 0x14F6D0u;
            goto label_14f6d0;
        }
    }
    ctx->pc = 0x14F408u;
    // 0x14f408: 0x46012832  c.eq.s      $f5, $f1
    ctx->pc = 0x14f408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f40c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x14F40Cu;
    {
        const bool branch_taken_0x14f40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f40c) {
            ctx->pc = 0x14F438u;
            goto label_14f438;
        }
    }
    ctx->pc = 0x14F414u;
    // 0x14f414: 0x0  nop
    ctx->pc = 0x14f414u;
    // NOP
    // 0x14f418: 0x0  nop
    ctx->pc = 0x14f418u;
    // NOP
    // 0x14f41c: 0x46050104  c1          0x50104
    ctx->pc = 0x14f41cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[5]);
    // 0x14f420: 0x0  nop
    ctx->pc = 0x14f420u;
    // NOP
    // 0x14f424: 0x46044103  div.s       $f4, $f8, $f4
    ctx->pc = 0x14f424u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[8], ctx->f[4]); }
    // 0x14f428: 0x0  nop
    ctx->pc = 0x14f428u;
    // NOP
    // 0x14f42c: 0x0  nop
    ctx->pc = 0x14f42cu;
    // NOP
    // 0x14f430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F430u;
    {
        const bool branch_taken_0x14f430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F430u;
        // 0x14f434: 0x46002201  sub.s       $f8, $f4, $f0 (Delay Slot)
        ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f430) {
            ctx->pc = 0x14F440u;
            goto label_14f440;
        }
    }
    ctx->pc = 0x14F438u;
label_14f438:
    // 0x14f438: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x14f438u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x14f43c: 0x0  nop
    ctx->pc = 0x14f43cu;
    // NOP
label_14f440:
    // 0x14f440: 0x8cb800e0  lw          $t8, 0xE0($a1)
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x14f444: 0x33180004  andi        $t8, $t8, 0x4
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x14f448: 0x17000005  bnez        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F460u;
            goto label_14f460;
        }
    }
    ctx->pc = 0x14F450u;
    // 0x14f450: 0x8cb80148  lw          $t8, 0x148($a1)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x14f454: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x14f454u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x14f458: 0x13000027  beqz        $t8, . + 4 + (0x27 << 2)
    ctx->pc = 0x14F458u;
    {
        const bool branch_taken_0x14f458 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f458) {
            ctx->pc = 0x14F4F8u;
            goto label_14f4f8;
        }
    }
    ctx->pc = 0x14F460u;
label_14f460:
    // 0x14f460: 0xc4c40020  lwc1        $f4, 0x20($a2)
    ctx->pc = 0x14f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f464: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x14f464u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x14f468: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x14f468u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x14f46c: 0xe4c40020  swc1        $f4, 0x20($a2)
    ctx->pc = 0x14f46cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x14f470: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x14f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f474: 0x46064142  mul.s       $f5, $f8, $f6
    ctx->pc = 0x14f474u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x14f478: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x14f478u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x14f47c: 0xe4c40028  swc1        $f4, 0x28($a2)
    ctx->pc = 0x14f47cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x14f480: 0xc5a400a0  lwc1        $f4, 0xA0($t5)
    ctx->pc = 0x14f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f484: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x14f484u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x14f488: 0xe5a400a0  swc1        $f4, 0xA0($t5)
    ctx->pc = 0x14f488u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x14f48c: 0xc5a400a8  lwc1        $f4, 0xA8($t5)
    ctx->pc = 0x14f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f490: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x14f490u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x14f494: 0xe5a400a8  swc1        $f4, 0xA8($t5)
    ctx->pc = 0x14f494u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 168), bits); }
    // 0x14f498: 0x90cd0000  lbu         $t5, 0x0($a2)
    ctx->pc = 0x14f498u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f49c: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x14f4a0: 0x2da10002  sltiu       $at, $t5, 0x2
    ctx->pc = 0x14f4a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f4a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F4A4u;
    {
        const bool branch_taken_0x14f4a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4A4u;
        // 0x14f4a8: 0x64180001  daddiu      $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4a4) {
            ctx->pc = 0x14F4B0u;
            goto label_14f4b0;
        }
    }
    ctx->pc = 0x14F4ACu;
    // 0x14f4ac: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x14f4acu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f4b0:
    // 0x14f4b0: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F4B0u;
    {
        const bool branch_taken_0x14f4b0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4b0) {
            ctx->pc = 0x14F4C8u;
            goto label_14f4c8;
        }
    }
    ctx->pc = 0x14F4B8u;
    // 0x14f4b8: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14f4bc: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x14f4bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x14f4c0: 0xad2d0000  sw          $t5, 0x0($t1)
    ctx->pc = 0x14f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 13));
    // 0x14f4c4: 0x0  nop
    ctx->pc = 0x14f4c4u;
    // NOP
label_14f4c8:
    // 0x14f4c8: 0x90ad0000  lbu         $t5, 0x0($a1)
    ctx->pc = 0x14f4c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f4cc: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x14f4d0: 0x2da10002  sltiu       $at, $t5, 0x2
    ctx->pc = 0x14f4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f4d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F4D4u;
    {
        const bool branch_taken_0x14f4d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4D4u;
        // 0x14f4d8: 0x64180001  daddiu      $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4d4) {
            ctx->pc = 0x14F4E0u;
            goto label_14f4e0;
        }
    }
    ctx->pc = 0x14F4DCu;
    // 0x14f4dc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x14f4dcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f4e0:
    // 0x14f4e0: 0x13000079  beqz        $t8, . + 4 + (0x79 << 2)
    ctx->pc = 0x14F4E0u;
    {
        const bool branch_taken_0x14f4e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4e0) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F4E8u;
    // 0x14f4e8: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x14f4e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14f4ec: 0x35ad0400  ori         $t5, $t5, 0x400
    ctx->pc = 0x14f4ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1024);
    // 0x14f4f0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x14F4F0u;
    {
        const bool branch_taken_0x14f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F0u;
        // 0x14f4f4: 0xad0d0000  sw          $t5, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f0) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F4F8u;
label_14f4f8:
    // 0x14f4f8: 0x8cd800e0  lw          $t8, 0xE0($a2)
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x14f4fc: 0x33180004  andi        $t8, $t8, 0x4
    ctx->pc = 0x14f4fcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x14f500: 0x17000005  bnez        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F500u;
    {
        const bool branch_taken_0x14f500 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f500) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F508u;
    // 0x14f508: 0x8cd80148  lw          $t8, 0x148($a2)
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x14f50c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x14f50cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x14f510: 0x13000027  beqz        $t8, . + 4 + (0x27 << 2)
    ctx->pc = 0x14F510u;
    {
        const bool branch_taken_0x14f510 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f510) {
            ctx->pc = 0x14F5B0u;
            goto label_14f5b0;
        }
    }
    ctx->pc = 0x14F518u;
label_14f518:
    // 0x14f518: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f51c: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x14f51cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x14f520: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f520u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f524: 0xe4a40020  swc1        $f4, 0x20($a1)
    ctx->pc = 0x14f524u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x14f528: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x14f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f52c: 0x46064142  mul.s       $f5, $f8, $f6
    ctx->pc = 0x14f52cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x14f530: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f530u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f534: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x14f534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x14f538: 0xc5c400a0  lwc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f53c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f53cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f540: 0xe5c400a0  swc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 160), bits); }
    // 0x14f544: 0xc5c400a8  lwc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f548: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f548u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f54c: 0xe5c400a8  swc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f54cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 168), bits); }
    // 0x14f550: 0x90ad0000  lbu         $t5, 0x0($a1)
    ctx->pc = 0x14f550u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f554: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x14f558: 0x2da10002  sltiu       $at, $t5, 0x2
    ctx->pc = 0x14f558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f55c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F55Cu;
    {
        const bool branch_taken_0x14f55c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F55Cu;
        // 0x14f560: 0x64180001  daddiu      $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f55c) {
            ctx->pc = 0x14F568u;
            goto label_14f568;
        }
    }
    ctx->pc = 0x14F564u;
    // 0x14f564: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x14f564u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f568:
    // 0x14f568: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F568u;
    {
        const bool branch_taken_0x14f568 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f568) {
            ctx->pc = 0x14F580u;
            goto label_14f580;
        }
    }
    ctx->pc = 0x14F570u;
    // 0x14f570: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x14f570u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14f574: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x14f574u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x14f578: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x14f578u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x14f57c: 0x0  nop
    ctx->pc = 0x14f57cu;
    // NOP
label_14f580:
    // 0x14f580: 0x90cd0000  lbu         $t5, 0x0($a2)
    ctx->pc = 0x14f580u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f584: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x14f584u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x14f588: 0x2da10002  sltiu       $at, $t5, 0x2
    ctx->pc = 0x14f588u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f58c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F58Cu;
    {
        const bool branch_taken_0x14f58c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F58Cu;
        // 0x14f590: 0x64180001  daddiu      $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f58c) {
            ctx->pc = 0x14F598u;
            goto label_14f598;
        }
    }
    ctx->pc = 0x14F594u;
    // 0x14f594: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x14f594u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f598:
    // 0x14f598: 0x1300004b  beqz        $t8, . + 4 + (0x4B << 2)
    ctx->pc = 0x14F598u;
    {
        const bool branch_taken_0x14f598 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f598) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F5A0u;
    // 0x14f5a0: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14f5a4: 0x35ad0400  ori         $t5, $t5, 0x400
    ctx->pc = 0x14f5a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1024);
    // 0x14f5a8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x14F5A8u;
    {
        const bool branch_taken_0x14f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5A8u;
        // 0x14f5ac: 0xad2d0000  sw          $t5, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5a8) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F5B0u;
label_14f5b0:
    // 0x14f5b0: 0xc4a500e8  lwc1        $f5, 0xE8($a1)
    ctx->pc = 0x14f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14f5b4: 0xc4c400e8  lwc1        $f4, 0xE8($a2)
    ctx->pc = 0x14f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f5b8: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x14f5b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x14f5bc: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x14f5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f5c0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14F5C0u;
    {
        const bool branch_taken_0x14f5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f5c0) {
            ctx->pc = 0x14F608u;
            goto label_14f608;
        }
    }
    ctx->pc = 0x14F5C8u;
    // 0x14f5c8: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f5cc: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x14f5ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x14f5d0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f5d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f5d4: 0xe4a40020  swc1        $f4, 0x20($a1)
    ctx->pc = 0x14f5d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x14f5d8: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x14f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f5dc: 0x46064142  mul.s       $f5, $f8, $f6
    ctx->pc = 0x14f5dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x14f5e0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f5e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f5e4: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x14f5e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x14f5e8: 0xc5c400a0  lwc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f5ec: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f5ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f5f0: 0xe5c400a0  swc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f5f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 160), bits); }
    // 0x14f5f4: 0xc5c400a8  lwc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f5f8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f5f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f5fc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14F5FCu;
    {
        const bool branch_taken_0x14f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5FCu;
        // 0x14f600: 0xe5c400a8  swc1        $f4, 0xA8($t6) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5fc) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F604u;
    // 0x14f604: 0x0  nop
    ctx->pc = 0x14f604u;
    // NOP
label_14f608:
    // 0x14f608: 0x90b80001  lbu         $t8, 0x1($a1)
    ctx->pc = 0x14f608u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14f60c: 0x170f0020  bne         $t8, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F60Cu;
    {
        const bool branch_taken_0x14f60c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 15));
        ctx->pc = 0x14F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F60Cu;
        // 0x14f610: 0x46074282  mul.s       $f10, $f8, $f7 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f60c) {
            ctx->pc = 0x14F690u;
            goto label_14f690;
        }
    }
    ctx->pc = 0x14F614u;
    // 0x14f614: 0xc4c40020  lwc1        $f4, 0x20($a2)
    ctx->pc = 0x14f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f618: 0x460a2a42  mul.s       $f9, $f5, $f10
    ctx->pc = 0x14f618u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x14f61c: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x14f61cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x14f620: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x14f620u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x14f624: 0xe4c40020  swc1        $f4, 0x20($a2)
    ctx->pc = 0x14f624u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x14f628: 0x460829c2  mul.s       $f7, $f5, $f8
    ctx->pc = 0x14f628u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x14f62c: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x14f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f630: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x14f630u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x14f634: 0x460a2982  mul.s       $f6, $f5, $f10
    ctx->pc = 0x14f634u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x14f638: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x14f638u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x14f63c: 0xe4c40028  swc1        $f4, 0x28($a2)
    ctx->pc = 0x14f63cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x14f640: 0xc5a400a0  lwc1        $f4, 0xA0($t5)
    ctx->pc = 0x14f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f644: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x14f644u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x14f648: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x14f648u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x14f64c: 0xe5a400a0  swc1        $f4, 0xA0($t5)
    ctx->pc = 0x14f64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x14f650: 0xc5a400a8  lwc1        $f4, 0xA8($t5)
    ctx->pc = 0x14f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f654: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x14f654u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x14f658: 0xe5a400a8  swc1        $f4, 0xA8($t5)
    ctx->pc = 0x14f658u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 168), bits); }
    // 0x14f65c: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f660: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x14f660u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x14f664: 0xe4a40020  swc1        $f4, 0x20($a1)
    ctx->pc = 0x14f664u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x14f668: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x14f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f66c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f66cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f670: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x14f670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x14f674: 0xc5c400a0  lwc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f678: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x14f678u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x14f67c: 0xe5c400a0  swc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f67cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 160), bits); }
    // 0x14f680: 0xc5c400a8  lwc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f684: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f684u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f688: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14F688u;
    {
        const bool branch_taken_0x14f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F688u;
        // 0x14f68c: 0xe5c400a8  swc1        $f4, 0xA8($t6) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f688) {
            ctx->pc = 0x14F6C8u;
            goto label_14f6c8;
        }
    }
    ctx->pc = 0x14F690u;
label_14f690:
    // 0x14f690: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f694: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x14f694u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x14f698: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f698u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f69c: 0xe4a40020  swc1        $f4, 0x20($a1)
    ctx->pc = 0x14f69cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x14f6a0: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x14f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f6a4: 0x46064142  mul.s       $f5, $f8, $f6
    ctx->pc = 0x14f6a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x14f6a8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f6a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f6ac: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x14f6acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x14f6b0: 0xc5c400a0  lwc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f6b4: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x14f6b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x14f6b8: 0xe5c400a0  swc1        $f4, 0xA0($t6)
    ctx->pc = 0x14f6b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 160), bits); }
    // 0x14f6bc: 0xc5c400a8  lwc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f6c0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x14f6c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x14f6c4: 0xe5c400a8  swc1        $f4, 0xA8($t6)
    ctx->pc = 0x14f6c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 168), bits); }
label_14f6c8:
    // 0x14f6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14f6cc: 0x0  nop
    ctx->pc = 0x14f6ccu;
    // NOP
label_14f6d0:
    // 0x14f6d0: 0x90cd00e4  lbu         $t5, 0xE4($a2)
    ctx->pc = 0x14f6d0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x14f6d4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14f6d8: 0x16d682b  sltu        $t5, $t3, $t5
    ctx->pc = 0x14f6d8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x14f6dc: 0x15a0ff26  bnez        $t5, . + 4 + (-0xDA << 2)
    ctx->pc = 0x14F6DCu;
    {
        const bool branch_taken_0x14f6dc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6DCu;
        // 0x14f6e0: 0x24e700f0  addiu       $a3, $a3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6dc) {
            ctx->pc = 0x14F378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f378;
        }
    }
    ctx->pc = 0x14F6E4u;
    // 0x14f6e4: 0x0  nop
    ctx->pc = 0x14f6e4u;
    // NOP
label_14f6e8:
    // 0x14f6e8: 0x90a700e4  lbu         $a3, 0xE4($a1)
    ctx->pc = 0x14f6e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14f6ec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x14f6f0: 0x187382b  sltu        $a3, $t4, $a3
    ctx->pc = 0x14f6f0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14f6f4: 0x14e0ff12  bnez        $a3, . + 4 + (-0xEE << 2)
    ctx->pc = 0x14F6F4u;
    {
        const bool branch_taken_0x14f6f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6F4u;
        // 0x14f6f8: 0x254a00f0  addiu       $t2, $t2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6f4) {
            ctx->pc = 0x14F340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f340;
        }
    }
    ctx->pc = 0x14F6FCu;
    // 0x14f6fc: 0x0  nop
    ctx->pc = 0x14f6fcu;
    // NOP
label_14f700:
    // 0x14f700: 0x3e00008  jr          $ra
    ctx->pc = 0x14F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F708u;
}
