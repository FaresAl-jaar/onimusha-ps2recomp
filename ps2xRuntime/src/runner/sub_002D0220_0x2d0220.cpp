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

// Function: sub_002D0220
// Address: 0x2d0220 - 0x2d059c
void sub_002D0220_0x2d0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0220_0x2d0220");
#endif

    switch (ctx->pc) {
        case 0x2d027cu: goto label_2d027c;
        case 0x2d038cu: goto label_2d038c;
        case 0x2d0400u: goto label_2d0400;
        case 0x2d0428u: goto label_2d0428;
        case 0x2d0464u: goto label_2d0464;
        case 0x2d04a4u: goto label_2d04a4;
        default: break;
    }

    ctx->pc = 0x2d0220u;

    // 0x2d0220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d022c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0238: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2d0238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2d023c: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D023Cu;
    {
        const bool branch_taken_0x2d023c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D023Cu;
        // 0x2d0240: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d023c) {
            ctx->pc = 0x2D04B0u;
            goto label_2d04b0;
        }
    }
    ctx->pc = 0x2D0244u;
    // 0x2d0244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0248: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D0248u;
    {
        const bool branch_taken_0x2d0248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d0248) {
            ctx->pc = 0x2D0300u;
            goto label_2d0300;
        }
    }
    ctx->pc = 0x2D0250u;
    // 0x2d0250: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0250u;
    {
        const bool branch_taken_0x2d0250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0250) {
            ctx->pc = 0x2D0260u;
            goto label_2d0260;
        }
    }
    ctx->pc = 0x2D0258u;
    // 0x2d0258: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2D0258u;
    {
        const bool branch_taken_0x2d0258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0258) {
            ctx->pc = 0x2D04B8u;
            goto label_2d04b8;
        }
    }
    ctx->pc = 0x2D0260u;
label_2d0260:
    // 0x2d0260: 0x7a2307a0  lq          $v1, 0x7A0($s1)
    ctx->pc = 0x2d0260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1952)));
    // 0x2d0264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0268: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2d026c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d026cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0270: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d0270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0274: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2D0274u;
    SET_GPR_U32(ctx, 31, 0x2D027Cu);
    ctx->pc = 0x2D0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0274u;
    // 0x2d0278: 0x7e230090  sq          $v1, 0x90($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D0274u, 0x2D027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D027Cu;
label_2d027c:
    // 0x2d027c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2d027cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0280: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x2d0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x2d0284: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2d0284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0288: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d0288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d028c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x2d028cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d0290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0294: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x2d0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2d0298: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2d0298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d029c: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x2d029cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x2d02a0: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2d02a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d02a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d02a8: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x2d02a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d02ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d02acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d02b0: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x2d02b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d02b4: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x2d02b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d02b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d02bc: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x2d02bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d02c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d02c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d02c4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2d02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d02c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d02c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d02cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d02ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d02d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D02D0u;
    {
        const bool branch_taken_0x2d02d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d02d0) {
            ctx->pc = 0x2D02E8u;
            goto label_2d02e8;
        }
    }
    ctx->pc = 0x2D02D8u;
    // 0x2d02d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d02d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d02dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d02dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d02e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D02E0u;
    {
        const bool branch_taken_0x2d02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02E0u;
        // 0x2d02e4: 0xa6220828  sh          $v0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02e0) {
            ctx->pc = 0x2D0300u;
            goto label_2d0300;
        }
    }
    ctx->pc = 0x2D02E8u;
label_2d02e8:
    // 0x2d02e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d02e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d02ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d02ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d02f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d02f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d02f4: 0x0  nop
    ctx->pc = 0x2d02f4u;
    // NOP
    // 0x2d02f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d02f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d02fc: 0xa6220828  sh          $v0, 0x828($s1)
    ctx->pc = 0x2d02fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2d0300:
    // 0x2d0300: 0x922207d6  lbu         $v0, 0x7D6($s1)
    ctx->pc = 0x2d0300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x2d0304: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D0304u;
    {
        const bool branch_taken_0x2d0304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0304) {
            ctx->pc = 0x2D0410u;
            goto label_2d0410;
        }
    }
    ctx->pc = 0x2D030Cu;
    // 0x2d030c: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x2d030cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x2d0310: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D0310u;
    {
        const bool branch_taken_0x2d0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0310u;
        // 0x2d0314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0310) {
            ctx->pc = 0x2D0400u;
            goto label_2d0400;
        }
    }
    ctx->pc = 0x2D0318u;
    // 0x2d0318: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0318u;
    {
        const bool branch_taken_0x2d0318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0318u;
        // 0x2d031c: 0xa622082a  sh          $v0, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0318) {
            ctx->pc = 0x2D0398u;
            goto label_2d0398;
        }
    }
    ctx->pc = 0x2D0320u;
    // 0x2d0320: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d0320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0324: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d0328: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d0328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d032c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2d0330: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2d0330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2d0334: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d0338: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d0338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d033c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d033cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d0340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0344: 0x0  nop
    ctx->pc = 0x2d0344u;
    // NOP
    // 0x2d0348: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d0348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d034c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d034cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0350: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0350u;
    {
        const bool branch_taken_0x2d0350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0350) {
            ctx->pc = 0x2D0368u;
            goto label_2d0368;
        }
    }
    ctx->pc = 0x2D0358u;
    // 0x2d0358: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d035c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d035cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d0360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0360u;
    {
        const bool branch_taken_0x2d0360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0360u;
        // 0x2d0364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0360) {
            ctx->pc = 0x2D0384u;
            goto label_2d0384;
        }
    }
    ctx->pc = 0x2D0368u;
label_2d0368:
    // 0x2d0368: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d036c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0370: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0374: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d0374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d0378: 0x0  nop
    ctx->pc = 0x2d0378u;
    // NOP
    // 0x2d037c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2d037cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2d0380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0384:
    // 0x2d0384: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x2D0384u;
    SET_GPR_U32(ctx, 31, 0x2D038Cu);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x2D0384u, 0x2D038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D038Cu;
label_2d038c:
    // 0x2d038c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D038Cu;
    {
        const bool branch_taken_0x2d038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d038c) {
            ctx->pc = 0x2D0400u;
            goto label_2d0400;
        }
    }
    ctx->pc = 0x2D0394u;
    // 0x2d0394: 0x0  nop
    ctx->pc = 0x2d0394u;
    // NOP
label_2d0398:
    // 0x2d0398: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d0398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d039c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d03a0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d03a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d03a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d03a8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2d03a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d03ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d03acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d03b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d03b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d03b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d03b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d03b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d03bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d03bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d03c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d03c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d03c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D03C4u;
    {
        const bool branch_taken_0x2d03c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d03c4) {
            ctx->pc = 0x2D03DCu;
            goto label_2d03dc;
        }
    }
    ctx->pc = 0x2D03CCu;
    // 0x2d03cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d03ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d03d0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d03d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d03d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D03D4u;
    {
        const bool branch_taken_0x2d03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03D4u;
        // 0x2d03d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03d4) {
            ctx->pc = 0x2D03F8u;
            goto label_2d03f8;
        }
    }
    ctx->pc = 0x2D03DCu;
label_2d03dc:
    // 0x2d03dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d03dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d03e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d03e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d03e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d03e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d03e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d03ec: 0x0  nop
    ctx->pc = 0x2d03ecu;
    // NOP
    // 0x2d03f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2d03f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2d03f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d03f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d03f8:
    // 0x2d03f8: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x2D03F8u;
    SET_GPR_U32(ctx, 31, 0x2D0400u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x2D03F8u, 0x2D0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0400u;
label_2d0400:
    // 0x2d0400: 0x96220826  lhu         $v0, 0x826($s1)
    ctx->pc = 0x2d0400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x2d0404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0408: 0xa6220826  sh          $v0, 0x826($s1)
    ctx->pc = 0x2d0408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d040c: 0x0  nop
    ctx->pc = 0x2d040cu;
    // NOP
label_2d0410:
    // 0x2d0410: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2d0414: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2d0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2d0418: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2d041c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0420: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2D0420u;
    SET_GPR_U32(ctx, 31, 0x2D0428u);
    ctx->pc = 0x2D0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0420u;
    // 0x2d0424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D0420u, 0x2D0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0428u;
label_2d0428:
    // 0x2d0428: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x2d0428u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d042c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2d0430: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2d0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2d0434: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2d0434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2d0438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d0438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d043c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2d0440: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x2d0440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
    // 0x2d0444: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d0444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0448: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d044c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d0450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d0454: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0458: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d045c: 0xc096928  jal         func_25A4A0
    ctx->pc = 0x2D045Cu;
    SET_GPR_U32(ctx, 31, 0x2D0464u);
    ctx->pc = 0x2D0460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D045Cu;
    // 0x2d0460: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4A0u, 0x2D045Cu, 0x2D0464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0464u;
label_2d0464:
    // 0x2d0464: 0xc62128f0  lwc1        $f1, 0x28F0($s1)
    ctx->pc = 0x2d0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0468: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2d0468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2d046c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d046cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0470: 0x0  nop
    ctx->pc = 0x2d0470u;
    // NOP
    // 0x2d0474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d0474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0478: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0478u;
    {
        const bool branch_taken_0x2d0478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0478u;
        // 0x2d047c: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0478) {
            ctx->pc = 0x2D0488u;
            goto label_2d0488;
        }
    }
    ctx->pc = 0x2D0480u;
    // 0x2d0480: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2d0480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2d0484: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2d0484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
label_2d0488:
    // 0x2d0488: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0488u;
    {
        const bool branch_taken_0x2d0488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0488) {
            ctx->pc = 0x2D04B8u;
            goto label_2d04b8;
        }
    }
    ctx->pc = 0x2D0490u;
    // 0x2d0490: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2d0490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2d0494: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0494u;
    {
        const bool branch_taken_0x2d0494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0494u;
        // 0x2d0498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0494) {
            ctx->pc = 0x2D04B8u;
            goto label_2d04b8;
        }
    }
    ctx->pc = 0x2D049Cu;
    // 0x2d049c: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x2D049Cu;
    SET_GPR_U32(ctx, 31, 0x2D04A4u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x2D049Cu, 0x2D04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04A4u;
label_2d04a4:
    // 0x2d04a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D04A4u;
    {
        const bool branch_taken_0x2d04a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d04a4) {
            ctx->pc = 0x2D04B8u;
            goto label_2d04b8;
        }
    }
    ctx->pc = 0x2D04ACu;
    // 0x2d04ac: 0x0  nop
    ctx->pc = 0x2d04acu;
    // NOP
label_2d04b0:
    // 0x2d04b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D04B0u;
    {
        const bool branch_taken_0x2d04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d04b0) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D04B8u;
label_2d04b8:
    // 0x2d04b8: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x2d04b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x2d04bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D04BCu;
    {
        const bool branch_taken_0x2d04bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04BCu;
        // 0x2d04c0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04bc) {
            ctx->pc = 0x2D04D0u;
            goto label_2d04d0;
        }
    }
    ctx->pc = 0x2D04C4u;
    // 0x2d04c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D04C4u;
    {
        const bool branch_taken_0x2d04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04C4u;
        // 0x2d04c8: 0xa62307f0  sh          $v1, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04c4) {
            ctx->pc = 0x2D04D8u;
            goto label_2d04d8;
        }
    }
    ctx->pc = 0x2D04CCu;
    // 0x2d04cc: 0x0  nop
    ctx->pc = 0x2d04ccu;
    // NOP
label_2d04d0:
    // 0x2d04d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d04d4: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x2d04d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2d04d8:
    // 0x2d04d8: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D04D8u;
    {
        const bool branch_taken_0x2d04d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d04d8) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D04E0u;
    // 0x2d04e0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d04e4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2d04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2d04e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d04e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d04ec: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2d04ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2d04f0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2d04f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2d04f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d04f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d04f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d04fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d04fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0500: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d0500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d0504: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d0504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d0508: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d050c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D050Cu;
    {
        const bool branch_taken_0x2d050c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D050Cu;
        // 0x2d0510: 0x96250826  lhu         $a1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d050c) {
            ctx->pc = 0x2D0524u;
            goto label_2d0524;
        }
    }
    ctx->pc = 0x2D0514u;
    // 0x2d0514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0518: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d0518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d051c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D051Cu;
    {
        const bool branch_taken_0x2d051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D051Cu;
        // 0x2d0520: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d051c) {
            ctx->pc = 0x2D0540u;
            goto label_2d0540;
        }
    }
    ctx->pc = 0x2D0524u;
label_2d0524:
    // 0x2d0524: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0524u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d0528: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d0528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d052c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d052cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0530: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d0530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d0534: 0x0  nop
    ctx->pc = 0x2d0534u;
    // NOP
    // 0x2d0538: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d0538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d053c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2d053cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2d0540:
    // 0x2d0540: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0540u;
    {
        const bool branch_taken_0x2d0540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0540) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D0548u;
    // 0x2d0548: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2d0548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d054c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0550: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0550u;
    {
        const bool branch_taken_0x2d0550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d0550) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D0558u;
    // 0x2d0558: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x2d0558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x2d055c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2d055cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2d0560: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0560u;
    {
        const bool branch_taken_0x2d0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0560) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D0568u;
    // 0x2d0568: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x2d0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x2d056c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2d056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2d0570: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0570u;
    {
        const bool branch_taken_0x2d0570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0570u;
        // 0x2d0574: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0570) {
            ctx->pc = 0x2D0580u;
            goto label_2d0580;
        }
    }
    ctx->pc = 0x2D0578u;
    // 0x2d0578: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x2d0578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d057c: 0x0  nop
    ctx->pc = 0x2d057cu;
    // NOP
label_2d0580:
    // 0x2d0580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0584: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2d0584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2d0588:
    // 0x2d0588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d058c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d058cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0594: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0594u;
        // 0x2d0598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D059Cu;
}
