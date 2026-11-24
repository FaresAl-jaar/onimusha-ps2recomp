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

// Function: sub_003C9310
// Address: 0x3c9310 - 0x3c9748
void sub_003C9310_0x3c9310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9310_0x3c9310");
#endif

    switch (ctx->pc) {
        case 0x3c94e0u: goto label_3c94e0;
        case 0x3c9518u: goto label_3c9518;
        case 0x3c9588u: goto label_3c9588;
        case 0x3c95b0u: goto label_3c95b0;
        case 0x3c95f8u: goto label_3c95f8;
        case 0x3c9610u: goto label_3c9610;
        case 0x3c96d8u: goto label_3c96d8;
        case 0x3c96ecu: goto label_3c96ec;
        case 0x3c9704u: goto label_3c9704;
        case 0x3c9730u: goto label_3c9730;
        default: break;
    }

    ctx->pc = 0x3c9310u;

    // 0x3c9310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c9314: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c9314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3c9318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c931c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9324: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3c9324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3c9328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c9328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c932c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3c932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c9330: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3c9330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3c9334: 0x90842b25  lbu         $a0, 0x2B25($a0)
    ctx->pc = 0x3c9334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11045)));
    // 0x3c9338: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3C9338u;
    {
        const bool branch_taken_0x3c9338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9338u;
        // 0x3c933c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9338) {
            ctx->pc = 0x3C9420u;
            goto label_3c9420;
        }
    }
    ctx->pc = 0x3C9340u;
    // 0x3c9340: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3C9340u;
    {
        const bool branch_taken_0x3c9340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9340) {
            ctx->pc = 0x3C93F8u;
            goto label_3c93f8;
        }
    }
    ctx->pc = 0x3C9348u;
    // 0x3c9348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9348u;
    {
        const bool branch_taken_0x3c9348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9348) {
            ctx->pc = 0x3C9358u;
            goto label_3c9358;
        }
    }
    ctx->pc = 0x3C9350u;
    // 0x3c9350: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3C9350u;
    {
        const bool branch_taken_0x3c9350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9350) {
            ctx->pc = 0x3C94D8u;
            goto label_3c94d8;
        }
    }
    ctx->pc = 0x3C9358u;
label_3c9358:
    // 0x3c9358: 0x92020640  lbu         $v0, 0x640($s0)
    ctx->pc = 0x3c9358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x3c935c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C935Cu;
    {
        const bool branch_taken_0x3c935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c935c) {
            ctx->pc = 0x3C93A8u;
            goto label_3c93a8;
        }
    }
    ctx->pc = 0x3C9364u;
    // 0x3c9364: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x3c9364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c9368: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3c9368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3c936c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C936Cu;
    {
        const bool branch_taken_0x3c936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C936Cu;
        // 0x3c9370: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c936c) {
            ctx->pc = 0x3C9380u;
            goto label_3c9380;
        }
    }
    ctx->pc = 0x3C9374u;
    // 0x3c9374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9374u;
    {
        const bool branch_taken_0x3c9374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9374u;
        // 0x3c9378: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9374) {
            ctx->pc = 0x3C9388u;
            goto label_3c9388;
        }
    }
    ctx->pc = 0x3C937Cu;
    // 0x3c937c: 0x0  nop
    ctx->pc = 0x3c937cu;
    // NOP
label_3c9380:
    // 0x3c9380: 0xa600078c  sh          $zero, 0x78C($s0)
    ctx->pc = 0x3c9380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c9384: 0x0  nop
    ctx->pc = 0x3c9384u;
    // NOP
label_3c9388:
    // 0x3c9388: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x3c9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x3c938c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C938Cu;
    {
        const bool branch_taken_0x3c938c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c938c) {
            ctx->pc = 0x3C93E0u;
            goto label_3c93e0;
        }
    }
    ctx->pc = 0x3C9394u;
    // 0x3c9394: 0x8e022b28  lw          $v0, 0x2B28($s0)
    ctx->pc = 0x3c9394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3c9398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c939c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C939Cu;
    {
        const bool branch_taken_0x3c939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C939Cu;
        // 0x3c93a0: 0xae022b28  sw          $v0, 0x2B28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c939c) {
            ctx->pc = 0x3C93E0u;
            goto label_3c93e0;
        }
    }
    ctx->pc = 0x3C93A4u;
    // 0x3c93a4: 0x0  nop
    ctx->pc = 0x3c93a4u;
    // NOP
label_3c93a8:
    // 0x3c93a8: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x3c93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x3c93ac: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3c93acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c93b0: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x3c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3c93b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C93B4u;
    {
        const bool branch_taken_0x3c93b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c93b4) {
            ctx->pc = 0x3C93D0u;
            goto label_3c93d0;
        }
    }
    ctx->pc = 0x3C93BCu;
    // 0x3c93bc: 0x8e022b28  lw          $v0, 0x2B28($s0)
    ctx->pc = 0x3c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3c93c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c93c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C93C4u;
    {
        const bool branch_taken_0x3c93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93C4u;
        // 0x3c93c8: 0xae022b28  sw          $v0, 0x2B28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c93c4) {
            ctx->pc = 0x3C93E0u;
            goto label_3c93e0;
        }
    }
    ctx->pc = 0x3C93CCu;
    // 0x3c93cc: 0x0  nop
    ctx->pc = 0x3c93ccu;
    // NOP
label_3c93d0:
    // 0x3c93d0: 0x8e032b28  lw          $v1, 0x2B28($s0)
    ctx->pc = 0x3c93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3c93d4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x3c93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x3c93d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c93dc: 0xae022b28  sw          $v0, 0x2B28($s0)
    ctx->pc = 0x3c93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
label_3c93e0:
    // 0x3c93e0: 0x8e022b28  lw          $v0, 0x2B28($s0)
    ctx->pc = 0x3c93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3c93e4: 0x2c4101f5  sltiu       $at, $v0, 0x1F5
    ctx->pc = 0x3c93e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
    // 0x3c93e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C93E8u;
    {
        const bool branch_taken_0x3c93e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93E8u;
        // 0x3c93ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c93e8) {
            ctx->pc = 0x3C93F8u;
            goto label_3c93f8;
        }
    }
    ctx->pc = 0x3C93F0u;
    // 0x3c93f0: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x3c93f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c93f4: 0xae002b28  sw          $zero, 0x2B28($s0)
    ctx->pc = 0x3c93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 0));
label_3c93f8:
    // 0x3c93f8: 0x8e0404cc  lw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c93f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c93fc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3c93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3c9400: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x3c9404: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c9404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c9408: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3c9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c940c: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c940cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x3c9410: 0x8e0304cc  lw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c9410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c9414: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c9414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9418: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3C9418u;
    {
        const bool branch_taken_0x3c9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9418u;
        // 0x3c941c: 0xae0204cc  sw          $v0, 0x4CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9418) {
            ctx->pc = 0x3C94D8u;
            goto label_3c94d8;
        }
    }
    ctx->pc = 0x3C9420u;
label_3c9420:
    // 0x3c9420: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c9420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3c9424: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c9424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c9428: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c9428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c942c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c9430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c9430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c9434: 0x0  nop
    ctx->pc = 0x3c9434u;
    // NOP
    // 0x3c9438: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c9438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c943c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c943cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9440: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9440u;
    {
        const bool branch_taken_0x3c9440 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9440u;
        // 0x3c9444: 0x96042b26  lhu         $a0, 0x2B26($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11046)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9440) {
            ctx->pc = 0x3C9458u;
            goto label_3c9458;
        }
    }
    ctx->pc = 0x3C9448u;
    // 0x3c9448: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c944c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c944cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c9450: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9450u;
    {
        const bool branch_taken_0x3c9450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9450u;
        // 0x3c9454: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9450) {
            ctx->pc = 0x3C9474u;
            goto label_3c9474;
        }
    }
    ctx->pc = 0x3C9458u;
label_3c9458:
    // 0x3c9458: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c9458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c945c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c945cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c9460: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c9464: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c9464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c9468: 0x0  nop
    ctx->pc = 0x3c9468u;
    // NOP
    // 0x3c946c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c9470: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x3c9470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c9474:
    // 0x3c9474: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C9474u;
    {
        const bool branch_taken_0x3c9474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9474u;
        // 0x3c9478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9474) {
            ctx->pc = 0x3C9490u;
            goto label_3c9490;
        }
    }
    ctx->pc = 0x3C947Cu;
    // 0x3c947c: 0xa20229d1  sb          $v0, 0x29D1($s0)
    ctx->pc = 0x3c947cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c9480: 0x96022b26  lhu         $v0, 0x2B26($s0)
    ctx->pc = 0x3c9480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x3c9484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c9484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c9488: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C9488u;
    {
        const bool branch_taken_0x3c9488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9488u;
        // 0x3c948c: 0xa6022b26  sh          $v0, 0x2B26($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11046), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9488) {
            ctx->pc = 0x3C94B0u;
            goto label_3c94b0;
        }
    }
    ctx->pc = 0x3C9490u;
label_3c9490:
    // 0x3c9490: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3c9494: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c9498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9498u;
    {
        const bool branch_taken_0x3c9498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9498u;
        // 0x3c949c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9498) {
            ctx->pc = 0x3C94B0u;
            goto label_3c94b0;
        }
    }
    ctx->pc = 0x3C94A0u;
    // 0x3c94a0: 0xa20229d1  sb          $v0, 0x29D1($s0)
    ctx->pc = 0x3c94a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c94a4: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3c94a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3c94a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3c94a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3c94ac: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3c94acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
label_3c94b0:
    // 0x3c94b0: 0x8e0404cc  lw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c94b4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x3c94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x3c94b8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3c94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3c94bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c94bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c94c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c94c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c94c4: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x3c94c8: 0x8e0304cc  lw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c94cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3c94ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c94d0: 0xae0204cc  sw          $v0, 0x4CC($s0)
    ctx->pc = 0x3c94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 2));
    // 0x3c94d4: 0x0  nop
    ctx->pc = 0x3c94d4u;
    // NOP
label_3c94d8:
    // 0x3c94d8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3C94D8u;
    SET_GPR_U32(ctx, 31, 0x3C94E0u);
    ctx->pc = 0x3C94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94D8u;
    // 0x3c94dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3C94D8u, 0x3C94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94E0u;
label_3c94e0:
    // 0x3c94e0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3c94e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3c94e4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3c94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3c94e8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C94E8u;
    {
        const bool branch_taken_0x3c94e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94E8u;
        // 0x3c94ec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94e8) {
            ctx->pc = 0x3C9510u;
            goto label_3c9510;
        }
    }
    ctx->pc = 0x3C94F0u;
    // 0x3c94f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C94F0u;
    {
        const bool branch_taken_0x3c94f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c94f0) {
            ctx->pc = 0x3C9500u;
            goto label_3c9500;
        }
    }
    ctx->pc = 0x3C94F8u;
    // 0x3c94f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C94F8u;
    {
        const bool branch_taken_0x3c94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c94f8) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C9500u;
label_3c9500:
    // 0x3c9500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9504u;
    {
        const bool branch_taken_0x3c9504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9504u;
        // 0x3c9508: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9504) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C950Cu;
    // 0x3c950c: 0x0  nop
    ctx->pc = 0x3c950cu;
    // NOP
label_3c9510:
    // 0x3c9510: 0xc0f2388  jal         func_3C8E20
    ctx->pc = 0x3C9510u;
    SET_GPR_U32(ctx, 31, 0x3C9518u);
    ctx->pc = 0x3C9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9510u;
    // 0x3c9514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8E20u, 0x3C9510u, 0x3C9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9518u;
label_3c9518:
    // 0x3c9518: 0x83838cc4  lb          $v1, -0x733C($gp)
    ctx->pc = 0x3c9518u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937796)));
    // 0x3c951c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C951Cu;
    {
        const bool branch_taken_0x3c951c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c951c) {
            ctx->pc = 0x3C9548u;
            goto label_3c9548;
        }
    }
    ctx->pc = 0x3C9524u;
    // 0x3c9524: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3c9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c9528: 0x3c03c29c  lui         $v1, 0xC29C
    ctx->pc = 0x3c9528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49820 << 16));
    // 0x3c952c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x3c952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3c9530: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3c9530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3c9534: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c9534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c9538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c953c: 0xa3838cc4  sb          $v1, -0x733C($gp)
    ctx->pc = 0x3c953cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937796), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c9540: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3c9540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c9544: 0xe4202ec0  swc1        $f0, 0x2EC0($at)
    ctx->pc = 0x3c9544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x682EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x682EC0u, _value); } while (0); }
label_3c9548:
    // 0x3c9548: 0x92042b24  lbu         $a0, 0x2B24($s0)
    ctx->pc = 0x3c9548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3c954c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c9550: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x3C9550u;
    {
        const bool branch_taken_0x3c9550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9550u;
        // 0x3c9554: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9550) {
            ctx->pc = 0x3C9738u;
            goto label_3c9738;
        }
    }
    ctx->pc = 0x3C9558u;
    // 0x3c9558: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3C9558u;
    {
        const bool branch_taken_0x3c9558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9558) {
            ctx->pc = 0x3C96B8u;
            goto label_3c96b8;
        }
    }
    ctx->pc = 0x3C9560u;
    // 0x3c9560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9564: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C9564u;
    {
        const bool branch_taken_0x3c9564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9564) {
            ctx->pc = 0x3C9580u;
            goto label_3c9580;
        }
    }
    ctx->pc = 0x3C956Cu;
    // 0x3c956c: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x3C956Cu;
    {
        const bool branch_taken_0x3c956c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c956c) {
            ctx->pc = 0x3C9738u;
            goto label_3c9738;
        }
    }
    ctx->pc = 0x3C9574u;
    // 0x3c9574: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3C9574u;
    {
        const bool branch_taken_0x3c9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9574) {
            ctx->pc = 0x3C9738u;
            goto label_3c9738;
        }
    }
    ctx->pc = 0x3C957Cu;
    // 0x3c957c: 0x0  nop
    ctx->pc = 0x3c957cu;
    // NOP
label_3c9580:
    // 0x3c9580: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x3C9580u;
    SET_GPR_U32(ctx, 31, 0x3C9588u);
    ctx->pc = 0x3C9584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9580u;
    // 0x3c9584: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x3C9580u, 0x3C9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9588u;
label_3c9588:
    // 0x3c9588: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c9588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c958c: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9590: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3c9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3c9594: 0x78630430  lq          $v1, 0x430($v1)
    ctx->pc = 0x3c9594u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 1072)));
    // 0x3c9598: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x3c9598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x3c959c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3c959cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3c95a0: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x3c95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x3c95a4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3c95a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c95a8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3C95A8u;
    SET_GPR_U32(ctx, 31, 0x3C95B0u);
    ctx->pc = 0x3C95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C95A8u;
    // 0x3c95ac: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3C95A8u, 0x3C95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C95B0u;
label_3c95b0:
    // 0x3c95b0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3c95b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c95b4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3c95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3c95b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3c95b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3c95bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3c95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3c95c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c95c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c95c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c95c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c95c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c95c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c95cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c95ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c95d0: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c95d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c95d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c95d8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x3c95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3c95dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c95dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c95e0: 0x0  nop
    ctx->pc = 0x3c95e0u;
    // NOP
    // 0x3c95e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3c95e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c95e8: 0x0  nop
    ctx->pc = 0x3c95e8u;
    // NOP
    // 0x3c95ec: 0x0  nop
    ctx->pc = 0x3c95ecu;
    // NOP
    // 0x3c95f0: 0xc096784  jal         func_259E10
    ctx->pc = 0x3C95F0u;
    SET_GPR_U32(ctx, 31, 0x3C95F8u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3C95F0u, 0x3C95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C95F8u;
label_3c95f8:
    // 0x3c95f8: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x3c95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c95fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3c95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3c9600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c9600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c9604: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x3c9604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x3c9608: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C9608u;
    SET_GPR_U32(ctx, 31, 0x3C9610u);
    ctx->pc = 0x3C960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9608u;
    // 0x3c960c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C9608u, 0x3C9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9610u;
label_3c9610:
    // 0x3c9610: 0x8e062b20  lw          $a2, 0x2B20($s0)
    ctx->pc = 0x3c9610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9614: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c9618: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x3c9618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
    // 0x3c961c: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x3c961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x3c9620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c9620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c9624: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3c9624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3c9628: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3c9628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3c962c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3c962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3c9630: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c9630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c9634: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3c9634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3c9638: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c963c: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x3c963cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x3c9640: 0xc4212ec0  lwc1        $f1, 0x2EC0($at)
    ctx->pc = 0x3c9640u;
    { uint32_t bits = FAST_READ32(0x682EC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c9644: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c9644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9648: 0xe44100a4  swc1        $f1, 0xA4($v0)
    ctx->pc = 0x3c9648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x3c964c: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9650: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x3c9650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x3c9654: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c9654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9658: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x3c9658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x3c965c: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9660: 0xa44500c0  sh          $a1, 0xC0($v0)
    ctx->pc = 0x3c9660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c9664: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c9664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9668: 0xa44400c2  sh          $a0, 0xC2($v0)
    ctx->pc = 0x3c9668u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c966c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c9670: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c9670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c9674: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c9674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9678: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9678u;
    {
        const bool branch_taken_0x3c9678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c9678) {
            ctx->pc = 0x3C9690u;
            goto label_3c9690;
        }
    }
    ctx->pc = 0x3C9680u;
    // 0x3c9680: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c9684: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c9684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c9688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9688u;
    {
        const bool branch_taken_0x3c9688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9688u;
        // 0x3c968c: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9688) {
            ctx->pc = 0x3C96ACu;
            goto label_3c96ac;
        }
    }
    ctx->pc = 0x3C9690u;
label_3c9690:
    // 0x3c9690: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c9690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c9694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c9694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c9698: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c969c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c969cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c96a0: 0x0  nop
    ctx->pc = 0x3c96a0u;
    // NOP
    // 0x3c96a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c96a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c96a8: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x3c96a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_3c96ac:
    // 0x3c96ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c96acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c96b0: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x3c96b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c96b4: 0x0  nop
    ctx->pc = 0x3c96b4u;
    // NOP
label_3c96b8:
    // 0x3c96b8: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x3c96b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3c96bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C96BCu;
    {
        const bool branch_taken_0x3c96bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c96bc) {
            ctx->pc = 0x3C9720u;
            goto label_3c9720;
        }
    }
    ctx->pc = 0x3C96C4u;
    // 0x3c96c4: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c96c8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x3c96c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3c96cc: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3c96ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3c96d0: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x3C96D0u;
    SET_GPR_U32(ctx, 31, 0x3C96D8u);
    ctx->pc = 0x3C96D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96D0u;
    // 0x3c96d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x3C96D0u, 0x3C96D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96D8u;
label_3c96d8:
    // 0x3c96d8: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c96dc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3c96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3c96e0: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x3c96e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3c96e4: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x3C96E4u;
    SET_GPR_U32(ctx, 31, 0x3C96ECu);
    ctx->pc = 0x3C96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96E4u;
    // 0x3c96e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x3C96E4u, 0x3C96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C96ECu;
label_3c96ec:
    // 0x3c96ec: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x3c96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c96f0: 0x844200c4  lh          $v0, 0xC4($v0)
    ctx->pc = 0x3c96f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x3c96f4: 0x2442ff1d  addiu       $v0, $v0, -0xE3
    ctx->pc = 0x3c96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967069));
    // 0x3c96f8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3c96f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c96fc: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3C96FCu;
    SET_GPR_U32(ctx, 31, 0x3C9704u);
    ctx->pc = 0x3C9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C96FCu;
    // 0x3c9700: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3C96FCu, 0x3C9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9704u;
label_3c9704:
    // 0x3c9704: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x3c9704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9708: 0xa46200c4  sh          $v0, 0xC4($v1)
    ctx->pc = 0x3c9708u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c970c: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3c970cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3c9710: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c9710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c9714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9714u;
    {
        const bool branch_taken_0x3c9714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9714u;
        // 0x3c9718: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9714) {
            ctx->pc = 0x3C9738u;
            goto label_3c9738;
        }
    }
    ctx->pc = 0x3C971Cu;
    // 0x3c971c: 0x0  nop
    ctx->pc = 0x3c971cu;
    // NOP
label_3c9720:
    // 0x3c9720: 0x8e052b20  lw          $a1, 0x2B20($s0)
    ctx->pc = 0x3c9720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3c9724: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c9724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c9728: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x3C9728u;
    SET_GPR_U32(ctx, 31, 0x3C9730u);
    ctx->pc = 0x3C972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9728u;
    // 0x3c972c: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x3C9728u, 0x3C9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9730u;
label_3c9730:
    // 0x3c9730: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x3c9730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9734: 0x0  nop
    ctx->pc = 0x3c9734u;
    // NOP
label_3c9738:
    // 0x3c9738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c9738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c973c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c973cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9740: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9740u;
        // 0x3c9744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9748u;
}
