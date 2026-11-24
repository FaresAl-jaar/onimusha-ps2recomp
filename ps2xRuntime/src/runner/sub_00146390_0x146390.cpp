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

// Function: sub_00146390
// Address: 0x146390 - 0x146560
void sub_00146390_0x146390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146390_0x146390");
#endif

    switch (ctx->pc) {
        case 0x1463d8u: goto label_1463d8;
        case 0x1464a8u: goto label_1464a8;
        default: break;
    }

    ctx->pc = 0x146390u;

    // 0x146390: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x146394: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x146398: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x14639c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1463a0: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x1463A0u;
    {
        const bool branch_taken_0x1463a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1463a0) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x1463A8u;
    // 0x1463a8: 0x90830353  lbu         $v1, 0x353($a0)
    ctx->pc = 0x1463a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 851)));
    // 0x1463ac: 0x8c88034c  lw          $t0, 0x34C($a0)
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 844)));
    // 0x1463b0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1463b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1463b4: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x1463B4u;
    {
        const bool branch_taken_0x1463b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463B4u;
        // 0x1463b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463b4) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x1463BCu;
    // 0x1463bc: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1463c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1463c4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1463c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1463c8: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x1463cc: 0x3c0dbf80  lui         $t5, 0xBF80
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49024 << 16));
    // 0x1463d0: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x1463d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1463d8:
    // 0x1463d8: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x1463d8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1463dc: 0x15260058  bne         $t1, $a2, . + 4 + (0x58 << 2)
    ctx->pc = 0x1463DCu;
    {
        const bool branch_taken_0x1463dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x1463dc) {
            ctx->pc = 0x146540u;
            goto label_146540;
        }
    }
    ctx->pc = 0x1463E4u;
    // 0x1463e4: 0x91090001  lbu         $t1, 0x1($t0)
    ctx->pc = 0x1463e4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1463e8: 0x11250003  beq         $t1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1463E8u;
    {
        const bool branch_taken_0x1463e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x1463e8) {
            ctx->pc = 0x1463F8u;
            goto label_1463f8;
        }
    }
    ctx->pc = 0x1463F0u;
    // 0x1463f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1463F0u;
    {
        const bool branch_taken_0x1463f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1463f0) {
            ctx->pc = 0x146540u;
            goto label_146540;
        }
    }
    ctx->pc = 0x1463F8u;
label_1463f8:
    // 0x1463f8: 0x910e0002  lbu         $t6, 0x2($t0)
    ctx->pc = 0x1463f8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1463fc: 0x90890352  lbu         $t1, 0x352($a0)
    ctx->pc = 0x1463fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 850)));
    // 0x146400: 0x1c9082a  slt         $at, $t6, $t1
    ctx->pc = 0x146400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x146404: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x146404u;
    {
        const bool branch_taken_0x146404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x146408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146404u;
        // 0x146408: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146404) {
            ctx->pc = 0x146540u;
            goto label_146540;
        }
    }
    ctx->pc = 0x14640Cu;
    // 0x14640c: 0x8c890344  lw          $t1, 0x344($a0)
    ctx->pc = 0x14640cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x146410: 0x8c2ff004  lw          $t7, -0xFFC($at)
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x146414: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x146418: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x146418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x14641c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x146420: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x146420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x146424: 0xf7040  sll         $t6, $t7, 1
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x146428: 0xf57c2  srl         $t2, $t7, 31
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x14642c: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x14642cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x146430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x146434: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x146438: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x146438u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x14643c: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x14643cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x146440: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x146440u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x146444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x146448: 0x314f0007  andi        $t7, $t2, 0x7
    ctx->pc = 0x146448u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x14644c: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x14644cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x146450: 0xa7040  sll         $t6, $t2, 1
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x146454: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x146458: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x146458u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x14645c: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x146460: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x146460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x146464: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x146464u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x146468: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x146468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x14646c: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x146470: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x146470u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x146474: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x146474u;
    {
        const bool branch_taken_0x146474 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x146474) {
            ctx->pc = 0x146488u;
            goto label_146488;
        }
    }
    ctx->pc = 0x14647Cu;
    // 0x14647c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x14647cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146480u;
    {
        const bool branch_taken_0x146480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146480) {
            ctx->pc = 0x14648Cu;
            goto label_14648c;
        }
    }
    ctx->pc = 0x146488u;
label_146488:
    // 0x146488: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x146488u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14648c:
    // 0x14648c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x146490: 0x8c2acec0  lw          $t2, -0x3140($at)
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x146494: 0x14b5024  and         $t2, $t2, $t3
    ctx->pc = 0x146494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x146498: 0x15400011  bnez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x146498u;
    {
        const bool branch_taken_0x146498 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x146498) {
            ctx->pc = 0x1464E0u;
            goto label_1464e0;
        }
    }
    ctx->pc = 0x1464A0u;
    // 0x1464a0: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1464A0u;
    {
        const bool branch_taken_0x1464a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464a0) {
            ctx->pc = 0x1464E0u;
            goto label_1464e0;
        }
    }
    ctx->pc = 0x1464A8u;
label_1464a8:
    // 0x1464a8: 0x25eaffff  addiu       $t2, $t7, -0x1
    ctx->pc = 0x1464a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1464ac: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x1464acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464b0: 0x314fffff  andi        $t7, $t2, 0xFFFF
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1464b4: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1464b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1464bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1464bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1464c0: 0xe5200020  swc1        $f0, 0x20($t1)
    ctx->pc = 0x1464c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
    // 0x1464c4: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x1464c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464c8: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x1464c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1464ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1464d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1464d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1464d4: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1464D4u;
    {
        const bool branch_taken_0x1464d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1464D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464D4u;
        // 0x1464d8: 0xe5200024  swc1        $f0, 0x24($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464d4) {
            ctx->pc = 0x1464A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1464a8;
        }
    }
    ctx->pc = 0x1464DCu;
    // 0x1464dc: 0x0  nop
    ctx->pc = 0x1464dcu;
    // NOP
label_1464e0:
    // 0x1464e0: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x1464e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464e4: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1464e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1464e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1464ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1464ECu;
    {
        const bool branch_taken_0x1464ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1464ec) {
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x1464F4u;
    // 0x1464f4: 0xe5210020  swc1        $f1, 0x20($t1)
    ctx->pc = 0x1464f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
label_1464f8:
    // 0x1464f8: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x1464f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464fc: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1464fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146500: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x146500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146504: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x146504u;
    {
        const bool branch_taken_0x146504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146504) {
            ctx->pc = 0x146510u;
            goto label_146510;
        }
    }
    ctx->pc = 0x14650Cu;
    // 0x14650c: 0xe5210020  swc1        $f1, 0x20($t1)
    ctx->pc = 0x14650cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
label_146510:
    // 0x146510: 0xc5010024  lwc1        $f1, 0x24($t0)
    ctx->pc = 0x146510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146514: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x146514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146518: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x146518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14651c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14651Cu;
    {
        const bool branch_taken_0x14651c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14651c) {
            ctx->pc = 0x146528u;
            goto label_146528;
        }
    }
    ctx->pc = 0x146524u;
    // 0x146524: 0xe5210024  swc1        $f1, 0x24($t1)
    ctx->pc = 0x146524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 36), bits); }
label_146528:
    // 0x146528: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x146528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14652c: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x14652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146530: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x146530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146534: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x146534u;
    {
        const bool branch_taken_0x146534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146534) {
            ctx->pc = 0x146540u;
            goto label_146540;
        }
    }
    ctx->pc = 0x14653Cu;
    // 0x14653c: 0xe5210024  swc1        $f1, 0x24($t1)
    ctx->pc = 0x14653cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 36), bits); }
label_146540:
    // 0x146540: 0x90890353  lbu         $t1, 0x353($a0)
    ctx->pc = 0x146540u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 851)));
    // 0x146544: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x146544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x146548: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x146548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x14654c: 0xe9482a  slt         $t1, $a3, $t1
    ctx->pc = 0x14654cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x146550: 0x1520ffa1  bnez        $t1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x146550u;
    {
        const bool branch_taken_0x146550 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x146554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146550u;
        // 0x146554: 0x2508002c  addiu       $t0, $t0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146550) {
            ctx->pc = 0x1463D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1463d8;
        }
    }
    ctx->pc = 0x146558u;
label_146558:
    // 0x146558: 0x3e00008  jr          $ra
    ctx->pc = 0x146558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146560u;
}
