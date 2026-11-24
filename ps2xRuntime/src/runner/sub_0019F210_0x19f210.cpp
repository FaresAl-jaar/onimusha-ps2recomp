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

// Function: sub_0019F210
// Address: 0x19f210 - 0x19f518
void sub_0019F210_0x19f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F210_0x19f210");
#endif

    switch (ctx->pc) {
        case 0x19f258u: goto label_19f258;
        case 0x19f294u: goto label_19f294;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f360u: goto label_19f360;
        case 0x19f4a0u: goto label_19f4a0;
        default: break;
    }

    ctx->pc = 0x19f210u;

    // 0x19f210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19f214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19f218: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19f21c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19f220: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19f224: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19f224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f22c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19f22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f240: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x19f240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x19f244: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19f244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f248: 0x102000a7  beqz        $at, . + 4 + (0xA7 << 2)
    ctx->pc = 0x19F248u;
    {
        const bool branch_taken_0x19f248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F248u;
        // 0x19f24c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f248) {
            ctx->pc = 0x19F4E8u;
            goto label_19f4e8;
        }
    }
    ctx->pc = 0x19F250u;
    // 0x19f250: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19f250u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19f254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f258:
    // 0x19f258: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x19f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x19f25c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x19f260: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19f264: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19f264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x19f268: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x19F268u;
    {
        const bool branch_taken_0x19f268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f268) {
            ctx->pc = 0x19F4D0u;
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F270u;
    // 0x19f270: 0x8ec2007c  lw          $v0, 0x7C($s6)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x19f274: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19f274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19f278: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f27c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19f27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f280: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x19f284: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f288: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x19f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x19f28c: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x19F28Cu;
    SET_GPR_U32(ctx, 31, 0x19F294u);
    ctx->pc = 0x19F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F28Cu;
    // 0x19f290: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x19F28Cu, 0x19F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F294u;
label_19f294:
    // 0x19f294: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19f298: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x19f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
    // 0x19f29c: 0x9024cea4  lbu         $a0, -0x315C($at)
    ctx->pc = 0x19f29cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x19f2a0: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x19f2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x19f2a4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x19f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x19f2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2ac: 0x3c02cb80  lui         $v0, 0xCB80
    ctx->pc = 0x19f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52096 << 16));
    // 0x19f2b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f2b4: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x19f2b4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
    // 0x19f2b8: 0x46004186  mov.s       $f6, $f8
    ctx->pc = 0x19f2b8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[8]);
    // 0x19f2bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19f2c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f2c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f2c8: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x19f2c8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
    // 0x19f2cc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x19f2ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f2d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19f2d4: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x19f2d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f2d8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x19F2D8u;
    {
        const bool branch_taken_0x19f2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2D8u;
        // 0x19f2dc: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2d8) {
            ctx->pc = 0x19F348u;
            goto label_19f348;
        }
    }
    ctx->pc = 0x19F2E0u;
    // 0x19f2e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2e4: 0x0  nop
    ctx->pc = 0x19f2e4u;
    // NOP
label_19f2e8:
    // 0x19f2e8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f2ec: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x19f2ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f2f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2F0u;
    {
        const bool branch_taken_0x19f2f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f2f0) {
            ctx->pc = 0x19F300u;
            goto label_19f300;
        }
    }
    ctx->pc = 0x19F2F8u;
    // 0x19f2f8: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x19f2f8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
    // 0x19f2fc: 0x0  nop
    ctx->pc = 0x19f2fcu;
    // NOP
label_19f300:
    // 0x19f300: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x19f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f304: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x19f304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f308: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F308u;
    {
        const bool branch_taken_0x19f308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f308) {
            ctx->pc = 0x19F318u;
            goto label_19f318;
        }
    }
    ctx->pc = 0x19F310u;
    // 0x19f310: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x19f310u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x19f314: 0x0  nop
    ctx->pc = 0x19f314u;
    // NOP
label_19f318:
    // 0x19f318: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x19f318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f31c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F31Cu;
    {
        const bool branch_taken_0x19f31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f31c) {
            ctx->pc = 0x19F328u;
            goto label_19f328;
        }
    }
    ctx->pc = 0x19F324u;
    // 0x19f324: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x19f324u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_19f328:
    // 0x19f328: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x19f328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f32c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F32Cu;
    {
        const bool branch_taken_0x19f32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f32c) {
            ctx->pc = 0x19F338u;
            goto label_19f338;
        }
    }
    ctx->pc = 0x19F334u;
    // 0x19f334: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x19f334u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_19f338:
    // 0x19f338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19f33c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f340: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19F340u;
    {
        const bool branch_taken_0x19f340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F340u;
        // 0x19f344: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f340) {
            ctx->pc = 0x19F2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f2e8;
        }
    }
    ctx->pc = 0x19F348u;
label_19f348:
    // 0x19f348: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x19f348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f34c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x19F34Cu;
    {
        const bool branch_taken_0x19f34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F34Cu;
        // 0x19f350: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f34c) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F354u;
    // 0x19f354: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x19f358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f35c: 0x0  nop
    ctx->pc = 0x19f35cu;
    // NOP
label_19f360:
    // 0x19f360: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x19f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19f364: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f368: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x19f368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x19f36c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x19f36cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x19f370: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x19f370u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x19f374: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x19f374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f378: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F378u;
    {
        const bool branch_taken_0x19f378 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F378u;
        // 0x19f37c: 0x46000845  abs.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f378) {
            ctx->pc = 0x19F390u;
            goto label_19f390;
        }
    }
    ctx->pc = 0x19F380u;
    // 0x19f380: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x19f380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f384: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F384u;
    {
        const bool branch_taken_0x19f384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f384) {
            ctx->pc = 0x19F390u;
            goto label_19f390;
        }
    }
    ctx->pc = 0x19F38Cu;
    // 0x19f38c: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x19f38cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
label_19f390:
    // 0x19f390: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f394: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19F394u;
    {
        const bool branch_taken_0x19f394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f394) {
            ctx->pc = 0x19F3B0u;
            goto label_19f3b0;
        }
    }
    ctx->pc = 0x19F39Cu;
    // 0x19f39c: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x19f39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f3a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F3A0u;
    {
        const bool branch_taken_0x19f3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f3a0) {
            ctx->pc = 0x19F3B0u;
            goto label_19f3b0;
        }
    }
    ctx->pc = 0x19F3A8u;
    // 0x19f3a8: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x19f3a8u;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
    // 0x19f3ac: 0x0  nop
    ctx->pc = 0x19f3acu;
    // NOP
label_19f3b0:
    // 0x19f3b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f3b4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x19f3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f3b8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19F3B8u;
    {
        const bool branch_taken_0x19f3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B8u;
        // 0x19f3bc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b8) {
            ctx->pc = 0x19F360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F3C0u;
label_19f3c0:
    // 0x19f3c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x19f3c4: 0x46062001  sub.s       $f0, $f4, $f6
    ctx->pc = 0x19f3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x19f3c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19f3cc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19f3ccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19f3d0: 0x46080083  div.s       $f2, $f0, $f8
    ctx->pc = 0x19f3d0u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x19f3d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19f3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f3dc: 0x0  nop
    ctx->pc = 0x19f3dcu;
    // NOP
    // 0x19f3e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19f3e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19f3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f3e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3E8u;
    {
        const bool branch_taken_0x19f3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f3e8) {
            ctx->pc = 0x19F400u;
            goto label_19f400;
        }
    }
    ctx->pc = 0x19F3F0u;
    // 0x19f3f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19f3f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19f3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f3f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F3F8u;
    {
        const bool branch_taken_0x19f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3F8u;
        // 0x19f3fc: 0x46051801  sub.s       $f0, $f3, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3f8) {
            ctx->pc = 0x19F41Cu;
            goto label_19f41c;
        }
    }
    ctx->pc = 0x19F400u;
label_19f400:
    // 0x19f400: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19f400u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19f404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19f40c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19f40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f410: 0x0  nop
    ctx->pc = 0x19f410u;
    // NOP
    // 0x19f414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f418: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x19f418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_19f41c:
    // 0x19f41c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x19f41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f420: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x19f424: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19f428: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19f428u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19f42c: 0x46070083  div.s       $f2, $f0, $f7
    ctx->pc = 0x19f42cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[7]); }
    // 0x19f430: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19f430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f438: 0x0  nop
    ctx->pc = 0x19f438u;
    // NOP
    // 0x19f43c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19f440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19f440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f444: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F444u;
    {
        const bool branch_taken_0x19f444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f444) {
            ctx->pc = 0x19F45Cu;
            goto label_19f45c;
        }
    }
    ctx->pc = 0x19F44Cu;
    // 0x19f44c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f44cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19f450: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19f450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F454u;
    {
        const bool branch_taken_0x19f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F454u;
        // 0x19f458: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f454) {
            ctx->pc = 0x19F478u;
            goto label_19f478;
        }
    }
    ctx->pc = 0x19F45Cu;
label_19f45c:
    // 0x19f45c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19f45cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19f460: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f464: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19f468: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19f468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f46c: 0x0  nop
    ctx->pc = 0x19f46cu;
    // NOP
    // 0x19f470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f474: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19f478:
    // 0x19f478: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f47c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x19f47cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19f480: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19f484: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x19f488: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x19f488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19f48c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19f48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19f490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f494: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19f498: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x19F498u;
    SET_GPR_U32(ctx, 31, 0x19F4A0u);
    ctx->pc = 0x19F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F498u;
    // 0x19f49c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x19F498u, 0x19F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4A0u;
label_19f4a0:
    // 0x19f4a0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19f4a4: 0x26a3000f  addiu       $v1, $s5, 0xF
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x19f4a8: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x19f4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19f4ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19f4b0: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f4b4: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4b8: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4bc: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4c0: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4c4: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4c8: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x19f4c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x19f4cc: 0x0  nop
    ctx->pc = 0x19f4ccu;
    // NOP
label_19f4d0:
    // 0x19f4d0: 0x96c20068  lhu         $v0, 0x68($s6)
    ctx->pc = 0x19f4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x19f4d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19f4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19f4d8: 0x26f70050  addiu       $s7, $s7, 0x50
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
    // 0x19f4dc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x19f4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f4e0: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x19F4E0u;
    {
        const bool branch_taken_0x19f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4E0u;
        // 0x19f4e4: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4e0) {
            ctx->pc = 0x19F258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f258;
        }
    }
    ctx->pc = 0x19F4E8u;
label_19f4e8:
    // 0x19f4e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x19f4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19f4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f4f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19f4f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f4f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f4f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f4f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f4f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f4fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f510: 0x3e00008  jr          $ra
    ctx->pc = 0x19F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F510u;
        // 0x19f514: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F518u;
}
