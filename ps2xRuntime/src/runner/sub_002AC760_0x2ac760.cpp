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

// Function: sub_002AC760
// Address: 0x2ac760 - 0x2aca88
void sub_002AC760_0x2ac760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC760_0x2ac760");
#endif

    switch (ctx->pc) {
        case 0x2ac8c0u: goto label_2ac8c0;
        case 0x2ac8e4u: goto label_2ac8e4;
        case 0x2ac90cu: goto label_2ac90c;
        case 0x2aca04u: goto label_2aca04;
        default: break;
    }

    ctx->pc = 0x2ac760u;

    // 0x2ac760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac76c: 0x8383897c  lb          $v1, -0x7684($gp)
    ctx->pc = 0x2ac76cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936956)));
    // 0x2ac770: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC770u;
    {
        const bool branch_taken_0x2ac770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC770u;
        // 0x2ac774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac770) {
            ctx->pc = 0x2AC7A0u;
            goto label_2ac7a0;
        }
    }
    ctx->pc = 0x2AC778u;
    // 0x2ac778: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2ac778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac77c: 0x3c03c29c  lui         $v1, 0xC29C
    ctx->pc = 0x2ac77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49820 << 16));
    // 0x2ac780: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2ac780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ac784: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2ac784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2ac788: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ac788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac790: 0xa383897c  sb          $v1, -0x7684($gp)
    ctx->pc = 0x2ac790u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936956), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac794: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ac794u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ac798: 0xe4207000  swc1        $f0, 0x7000($at)
    ctx->pc = 0x2ac798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x677000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x677000u, _value); } while (0); }
    // 0x2ac79c: 0x0  nop
    ctx->pc = 0x2ac79cu;
    // NOP
label_2ac7a0:
    // 0x2ac7a0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac7a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ac7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac7a8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2ac7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2ac7ac: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ac7b0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac7b4: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x2ac7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x2ac7b8: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ac7bc: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac7c0: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x2ac7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2ac7c4: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ac7c8: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac7cc: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2ac7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2ac7d0: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ac7d4: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac7d8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2ac7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2ac7dc: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ac7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ac7e0: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x2ac7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2ac7e4: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x2ac7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x2ac7e8: 0xae0406cc  sw          $a0, 0x6CC($s0)
    ctx->pc = 0x2ac7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 4));
    // 0x2ac7ec: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2ac7ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2ac7f0: 0x1083009b  beq         $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x2AC7F0u;
    {
        const bool branch_taken_0x2ac7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7F0u;
        // 0x2ac7f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7f0) {
            ctx->pc = 0x2ACA60u;
            goto label_2aca60;
        }
    }
    ctx->pc = 0x2AC7F8u;
    // 0x2ac7f8: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2AC7F8u;
    {
        const bool branch_taken_0x2ac7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac7f8) {
            ctx->pc = 0x2AC9E8u;
            goto label_2ac9e8;
        }
    }
    ctx->pc = 0x2AC800u;
    // 0x2ac800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac804: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2AC804u;
    {
        const bool branch_taken_0x2ac804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac804) {
            ctx->pc = 0x2AC8A8u;
            goto label_2ac8a8;
        }
    }
    ctx->pc = 0x2AC80Cu;
    // 0x2ac80c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC80Cu;
    {
        const bool branch_taken_0x2ac80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac80c) {
            ctx->pc = 0x2AC820u;
            goto label_2ac820;
        }
    }
    ctx->pc = 0x2AC814u;
    // 0x2ac814: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2AC814u;
    {
        const bool branch_taken_0x2ac814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac814) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2AC81Cu;
    // 0x2ac81c: 0x0  nop
    ctx->pc = 0x2ac81cu;
    // NOP
label_2ac820:
    // 0x2ac820: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ac820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ac824: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2ac824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac828: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2ac828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2ac82c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ac82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ac830: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2ac830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2ac834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac838: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ac838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ac83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac840: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ac840u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ac844: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ac844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ac848: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ac848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac84c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC84Cu;
    {
        const bool branch_taken_0x2ac84c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac84c) {
            ctx->pc = 0x2AC864u;
            goto label_2ac864;
        }
    }
    ctx->pc = 0x2AC854u;
    // 0x2ac854: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac858: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ac858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac85c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC85Cu;
    {
        const bool branch_taken_0x2ac85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC85Cu;
        // 0x2ac860: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac85c) {
            ctx->pc = 0x2AC880u;
            goto label_2ac880;
        }
    }
    ctx->pc = 0x2AC864u;
label_2ac864:
    // 0x2ac864: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ac864u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac868: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ac868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac86c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac86cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac870: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ac870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac874: 0x0  nop
    ctx->pc = 0x2ac874u;
    // NOP
    // 0x2ac878: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ac878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ac87c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ac87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ac880:
    // 0x2ac880: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ac884: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ac884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac888: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ac888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac88c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ac88cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac890: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2ac890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2ac894: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2ac894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac89c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ac89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ac8a0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x2ac8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac8a4: 0x0  nop
    ctx->pc = 0x2ac8a4u;
    // NOP
label_2ac8a8:
    // 0x2ac8a8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac8ac: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x2ac8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2ac8b0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ac8b4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ac8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ac8b8: 0xc096908  jal         func_25A420
    ctx->pc = 0x2AC8B8u;
    SET_GPR_U32(ctx, 31, 0x2AC8C0u);
    ctx->pc = 0x2AC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8B8u;
    // 0x2ac8bc: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2AC8B8u, 0x2AC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8C0u;
label_2ac8c0:
    // 0x2ac8c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac8c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac8c8: 0x0  nop
    ctx->pc = 0x2ac8c8u;
    // NOP
    // 0x2ac8cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ac8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac8d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC8D0u;
    {
        const bool branch_taken_0x2ac8d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8D0u;
        // 0x2ac8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8d0) {
            ctx->pc = 0x2AC8F0u;
            goto label_2ac8f0;
        }
    }
    ctx->pc = 0x2AC8D8u;
    // 0x2ac8d8: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x2ac8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2ac8dc: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x2AC8DCu;
    SET_GPR_U32(ctx, 31, 0x2AC8E4u);
    ctx->pc = 0x2AC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8DCu;
    // 0x2ac8e0: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x2AC8DCu, 0x2AC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8E4u;
label_2ac8e4:
    // 0x2ac8e4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2AC8E4u;
    {
        const bool branch_taken_0x2ac8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac8e4) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2AC8ECu;
    // 0x2ac8ec: 0x0  nop
    ctx->pc = 0x2ac8ecu;
    // NOP
label_2ac8f0:
    // 0x2ac8f0: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2ac8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2ac8f4: 0xc42c7000  lwc1        $f12, 0x7000($at)
    ctx->pc = 0x2ac8f4u;
    { uint32_t bits = FAST_READ32(0x677000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac8f8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2ac8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ac8fc: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x2ac8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x2ac900: 0x26060880  addiu       $a2, $s0, 0x880
    ctx->pc = 0x2ac900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x2ac904: 0xc096848  jal         func_25A120
    ctx->pc = 0x2AC904u;
    SET_GPR_U32(ctx, 31, 0x2AC90Cu);
    ctx->pc = 0x2AC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC904u;
    // 0x2ac908: 0x26070890  addiu       $a3, $s0, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A120u, 0x2AC904u, 0x2AC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC90Cu;
label_2ac90c:
    // 0x2ac90c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2ac910: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac914: 0x0  nop
    ctx->pc = 0x2ac914u;
    // NOP
    // 0x2ac918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ac918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac91c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC91Cu;
    {
        const bool branch_taken_0x2ac91c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac91c) {
            ctx->pc = 0x2AC934u;
            goto label_2ac934;
        }
    }
    ctx->pc = 0x2AC924u;
    // 0x2ac924: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ac928: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac92c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC92Cu;
    {
        const bool branch_taken_0x2ac92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC92Cu;
        // 0x2ac930: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac92c) {
            ctx->pc = 0x2AC950u;
            goto label_2ac950;
        }
    }
    ctx->pc = 0x2AC934u;
label_2ac934:
    // 0x2ac934: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ac934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac938: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ac938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac93c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ac940: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac944: 0x0  nop
    ctx->pc = 0x2ac944u;
    // NOP
    // 0x2ac948: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ac948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ac94c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2ac94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2ac950:
    // 0x2ac950: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2ac950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ac954: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x2ac954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x2ac958: 0xa6050828  sh          $a1, 0x828($s0)
    ctx->pc = 0x2ac958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac95c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2ac960: 0xa605082c  sh          $a1, 0x82C($s0)
    ctx->pc = 0x2ac960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac964: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2ac964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2ac968: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2ac968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac96c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2ac96cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ac970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac974: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ac974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2ac978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac97c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ac97cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ac980: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ac980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ac984: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ac984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac988: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC988u;
    {
        const bool branch_taken_0x2ac988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac988) {
            ctx->pc = 0x2AC9A0u;
            goto label_2ac9a0;
        }
    }
    ctx->pc = 0x2AC990u;
    // 0x2ac990: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac994: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ac994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ac998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC998u;
    {
        const bool branch_taken_0x2ac998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC998u;
        // 0x2ac99c: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac998) {
            ctx->pc = 0x2AC9BCu;
            goto label_2ac9bc;
        }
    }
    ctx->pc = 0x2AC9A0u;
label_2ac9a0:
    // 0x2ac9a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ac9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac9a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ac9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac9a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac9ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ac9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ac9b0: 0x0  nop
    ctx->pc = 0x2ac9b0u;
    // NOP
    // 0x2ac9b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2ac9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ac9b8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ac9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ac9bc:
    // 0x2ac9bc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2ac9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ac9c0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ac9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac9c4: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2ac9c8: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ac9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac9cc: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2ac9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ac9d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ac9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac9d4: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ac9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2ac9d8: 0x7a040870  lq          $a0, 0x870($s0)
    ctx->pc = 0x2ac9d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x2ac9dc: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2ac9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x2ac9e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2AC9E0u;
    {
        const bool branch_taken_0x2ac9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9E0u;
        // 0x2ac9e4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9e0) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2AC9E8u;
label_2ac9e8:
    // 0x2ac9e8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2ac9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ac9ec: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ac9f0: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2ac9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ac9f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ac9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9f8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ac9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ac9fc: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2AC9FCu;
    SET_GPR_U32(ctx, 31, 0x2ACA04u);
    ctx->pc = 0x2ACA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9FCu;
    // 0x2aca00: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2AC9FCu, 0x2ACA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA04u;
label_2aca04:
    // 0x2aca04: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2aca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2aca08: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2aca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aca0c: 0xc4207000  lwc1        $f0, 0x7000($at)
    ctx->pc = 0x2aca0cu;
    { uint32_t bits = FAST_READ32(0x677000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aca10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2aca10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aca14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2aca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2aca18: 0x96040828  lhu         $a0, 0x828($s0)
    ctx->pc = 0x2aca18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2aca1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2aca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2aca20: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ACA20u;
    {
        const bool branch_taken_0x2aca20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA20u;
        // 0x2aca24: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca20) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2ACA28u;
    // 0x2aca28: 0x7a060890  lq          $a2, 0x890($s0)
    ctx->pc = 0x2aca28u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x2aca2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2aca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2aca30: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2aca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2aca34: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2aca38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aca3c: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x2aca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
    // 0x2aca40: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2aca40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aca44: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2aca44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aca48: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2aca48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2aca4c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2aca4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aca50: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2aca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2aca54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACA54u;
    {
        const bool branch_taken_0x2aca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA54u;
        // 0x2aca58: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca54) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2ACA5Cu;
    // 0x2aca5c: 0x0  nop
    ctx->pc = 0x2aca5cu;
    // NOP
label_2aca60:
    // 0x2aca60: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2aca60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2aca64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACA64u;
    {
        const bool branch_taken_0x2aca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA64u;
        // 0x2aca68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca64) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2ACA6Cu;
    // 0x2aca6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACA6Cu;
    {
        const bool branch_taken_0x2aca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA6Cu;
        // 0x2aca70: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca6c) {
            ctx->pc = 0x2ACA78u;
            goto label_2aca78;
        }
    }
    ctx->pc = 0x2ACA74u;
    // 0x2aca74: 0x0  nop
    ctx->pc = 0x2aca74u;
    // NOP
label_2aca78:
    // 0x2aca78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aca7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aca80: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA80u;
        // 0x2aca84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA88u;
}
