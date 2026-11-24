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

// Function: sub_003BA4E0
// Address: 0x3ba4e0 - 0x3ba8d8
void sub_003BA4E0_0x3ba4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA4E0_0x3ba4e0");
#endif

    switch (ctx->pc) {
        case 0x3ba5ccu: goto label_3ba5cc;
        case 0x3ba5d8u: goto label_3ba5d8;
        case 0x3ba644u: goto label_3ba644;
        case 0x3ba6a8u: goto label_3ba6a8;
        case 0x3ba754u: goto label_3ba754;
        case 0x3ba770u: goto label_3ba770;
        case 0x3ba7b8u: goto label_3ba7b8;
        case 0x3ba7c8u: goto label_3ba7c8;
        case 0x3ba898u: goto label_3ba898;
        case 0x3ba8a8u: goto label_3ba8a8;
        default: break;
    }

    ctx->pc = 0x3ba4e0u;

    // 0x3ba4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba4e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ba4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ba4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ba4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba4f4: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3ba4f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ba4f8: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3BA4F8u;
    {
        const bool branch_taken_0x3ba4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA4F8u;
        // 0x3ba4fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba4f8) {
            ctx->pc = 0x3BA820u;
            goto label_3ba820;
        }
    }
    ctx->pc = 0x3BA500u;
    // 0x3ba500: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3BA500u;
    {
        const bool branch_taken_0x3ba500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ba500) {
            ctx->pc = 0x3BA5D0u;
            goto label_3ba5d0;
        }
    }
    ctx->pc = 0x3BA508u;
    // 0x3ba508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ba508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba50c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3BA50Cu;
    {
        const bool branch_taken_0x3ba50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ba50c) {
            ctx->pc = 0x3BA578u;
            goto label_3ba578;
        }
    }
    ctx->pc = 0x3BA514u;
    // 0x3ba514: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA514u;
    {
        const bool branch_taken_0x3ba514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba514) {
            ctx->pc = 0x3BA528u;
            goto label_3ba528;
        }
    }
    ctx->pc = 0x3BA51Cu;
    // 0x3ba51c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x3BA51Cu;
    {
        const bool branch_taken_0x3ba51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba51c) {
            ctx->pc = 0x3BA8C8u;
            goto label_3ba8c8;
        }
    }
    ctx->pc = 0x3BA524u;
    // 0x3ba524: 0x0  nop
    ctx->pc = 0x3ba524u;
    // NOP
label_3ba528:
    // 0x3ba528: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3ba528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba52c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ba52cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba530: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x3ba530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3ba534: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ba534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba538: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ba538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ba53c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3ba53cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ba540: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ba540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ba544: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3ba544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba548: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ba548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ba54c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3ba54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3ba550: 0x2463e0c0  addiu       $v1, $v1, -0x1F40
    ctx->pc = 0x3ba550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959296));
    // 0x3ba554: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ba554u;
    { uint32_t bits = FAST_READ32(0x65E0C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba558: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ba558u;
    { uint32_t bits = FAST_READ32(0x65E0C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba55c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ba55cu;
    { uint32_t bits = FAST_READ32(0x65E0C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba560: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3ba560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ba564: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3ba564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ba568: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3ba568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ba56c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba574: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ba574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ba578:
    // 0x3ba578: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ba578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ba57c: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3BA57Cu;
    {
        const bool branch_taken_0x3ba57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba57c) {
            ctx->pc = 0x3BA8C8u;
            goto label_3ba8c8;
        }
    }
    ctx->pc = 0x3BA584u;
    // 0x3ba584: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ba584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba588: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3ba588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3ba58c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ba58cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba590: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba594: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ba594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ba598: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3ba598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ba59c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3ba59cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba5a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3ba5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3ba5a4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3ba5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3ba5a8: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x3ba5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ba5ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3ba5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3ba5b0: 0xa6000828  sh          $zero, 0x828($s0)
    ctx->pc = 0x3ba5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ba5b4: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3ba5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba5b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ba5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ba5bc: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3ba5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ba5c0: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x3ba5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ba5c4: 0xc0f1ed4  jal         func_3C7B50
    ctx->pc = 0x3BA5C4u;
    SET_GPR_U32(ctx, 31, 0x3BA5CCu);
    ctx->pc = 0x3BA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA5C4u;
    // 0x3ba5c8: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7B50u, 0x3BA5C4u, 0x3BA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA5CCu;
label_3ba5cc:
    // 0x3ba5cc: 0x0  nop
    ctx->pc = 0x3ba5ccu;
    // NOP
label_3ba5d0:
    // 0x3ba5d0: 0xc0ee374  jal         func_3B8DD0
    ctx->pc = 0x3BA5D0u;
    SET_GPR_U32(ctx, 31, 0x3BA5D8u);
    ctx->pc = 0x3BA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA5D0u;
    // 0x3ba5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8DD0u, 0x3BA5D0u, 0x3BA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA5D8u;
label_3ba5d8:
    // 0x3ba5d8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3BA5D8u;
    {
        const bool branch_taken_0x3ba5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba5d8) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA5E0u;
    // 0x3ba5e0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3ba5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba5e4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ba5e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ba5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ba5ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ba5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ba5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba5f4: 0x0  nop
    ctx->pc = 0x3ba5f4u;
    // NOP
    // 0x3ba5f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ba5f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba5fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba5fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA600u;
    {
        const bool branch_taken_0x3ba600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA600u;
        // 0x3ba604: 0x96040826  lhu         $a0, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba600) {
            ctx->pc = 0x3BA618u;
            goto label_3ba618;
        }
    }
    ctx->pc = 0x3BA608u;
    // 0x3ba608: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba60c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba60cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA610u;
    {
        const bool branch_taken_0x3ba610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA610u;
        // 0x3ba614: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba610) {
            ctx->pc = 0x3BA634u;
            goto label_3ba634;
        }
    }
    ctx->pc = 0x3BA618u;
label_3ba618:
    // 0x3ba618: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba61c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba620: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba624: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba628: 0x0  nop
    ctx->pc = 0x3ba628u;
    // NOP
    // 0x3ba62c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ba62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ba630: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x3ba630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ba634:
    // 0x3ba634: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x3BA634u;
    {
        const bool branch_taken_0x3ba634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba634) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA63Cu;
    // 0x3ba63c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3BA63Cu;
    SET_GPR_U32(ctx, 31, 0x3BA644u);
    ctx->pc = 0x3BA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA63Cu;
    // 0x3ba640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3BA63Cu, 0x3BA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA644u;
label_3ba644:
    // 0x3ba644: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ba644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ba648: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ba648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3ba64c: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x3ba64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3ba650: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x3ba650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3ba654: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x3ba654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3ba658: 0x96022b46  lhu         $v0, 0x2B46($s0)
    ctx->pc = 0x3ba658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11078)));
    // 0x3ba65c: 0x0  nop
    ctx->pc = 0x3ba65cu;
    // NOP
    // 0x3ba660: 0x1810  mfhi        $v1
    ctx->pc = 0x3ba660u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3ba664: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3ba664u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3ba668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba66c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3ba66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ba670: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ba670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ba674: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ba674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3ba678: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3BA678u;
    {
        const bool branch_taken_0x3ba678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA678u;
        // 0x3ba67c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba678) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA680u;
    // 0x3ba680: 0x8e022b50  lw          $v0, 0x2B50($s0)
    ctx->pc = 0x3ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3ba684: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x3ba684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ba688: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BA688u;
    {
        const bool branch_taken_0x3ba688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba688) {
            ctx->pc = 0x3BA6B8u;
            goto label_3ba6b8;
        }
    }
    ctx->pc = 0x3BA690u;
    // 0x3ba690: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x3ba690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3ba694: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA694u;
    {
        const bool branch_taken_0x3ba694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba694) {
            ctx->pc = 0x3BA6B0u;
            goto label_3ba6b0;
        }
    }
    ctx->pc = 0x3BA69Cu;
    // 0x3ba69c: 0xa6050828  sh          $a1, 0x828($s0)
    ctx->pc = 0x3ba69cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ba6a0: 0xc0ef31c  jal         func_3BCC70
    ctx->pc = 0x3BA6A0u;
    SET_GPR_U32(ctx, 31, 0x3BA6A8u);
    ctx->pc = 0x3BA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA6A0u;
    // 0x3ba6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCC70u, 0x3BA6A0u, 0x3BA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA6A8u;
label_3ba6a8:
    // 0x3ba6a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA6A8u;
    {
        const bool branch_taken_0x3ba6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba6a8) {
            ctx->pc = 0x3BA6B8u;
            goto label_3ba6b8;
        }
    }
    ctx->pc = 0x3BA6B0u;
label_3ba6b0:
    // 0x3ba6b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ba6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ba6b4: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x3ba6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
label_3ba6b8:
    // 0x3ba6b8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3ba6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x3ba6bc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3ba6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba6c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ba6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ba6c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ba6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ba6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba6cc: 0x0  nop
    ctx->pc = 0x3ba6ccu;
    // NOP
    // 0x3ba6d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ba6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba6d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba6d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA6D8u;
    {
        const bool branch_taken_0x3ba6d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba6d8) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA6E0u;
    // 0x3ba6e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba6e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba6e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ba6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ba6e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA6E8u;
    {
        const bool branch_taken_0x3ba6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba6e8) {
            ctx->pc = 0x3BA708u;
            goto label_3ba708;
        }
    }
    ctx->pc = 0x3BA6F0u;
label_3ba6f0:
    // 0x3ba6f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba6f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba6f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba6f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba6f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba6fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ba6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ba700: 0x0  nop
    ctx->pc = 0x3ba700u;
    // NOP
    // 0x3ba704: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ba704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3ba708:
    // 0x3ba708: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA708u;
    {
        const bool branch_taken_0x3ba708 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3BA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA708u;
        // 0x3ba70c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba708) {
            ctx->pc = 0x3BA71Cu;
            goto label_3ba71c;
        }
    }
    ctx->pc = 0x3BA710u;
    // 0x3ba710: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ba710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA714u;
    {
        const bool branch_taken_0x3ba714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA714u;
        // 0x3ba718: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba714) {
            ctx->pc = 0x3BA734u;
            goto label_3ba734;
        }
    }
    ctx->pc = 0x3BA71Cu;
label_3ba71c:
    // 0x3ba71c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ba71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3ba720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ba720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ba724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ba724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba728: 0x0  nop
    ctx->pc = 0x3ba728u;
    // NOP
    // 0x3ba72c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ba72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ba730: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ba730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ba734:
    // 0x3ba734: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x3ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x3ba738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba73c: 0x0  nop
    ctx->pc = 0x3ba73cu;
    // NOP
    // 0x3ba740: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3ba740u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ba744: 0x0  nop
    ctx->pc = 0x3ba744u;
    // NOP
    // 0x3ba748: 0x0  nop
    ctx->pc = 0x3ba748u;
    // NOP
    // 0x3ba74c: 0xc0f1ee4  jal         func_3C7B90
    ctx->pc = 0x3BA74Cu;
    SET_GPR_U32(ctx, 31, 0x3BA754u);
    ctx->pc = 0x3C7B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7B90u, 0x3BA74Cu, 0x3BA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA754u;
label_3ba754:
    // 0x3ba754: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x3ba754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x3ba758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba75c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3BA75Cu;
    {
        const bool branch_taken_0x3ba75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA75Cu;
        // 0x3ba760: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba75c) {
            ctx->pc = 0x3BA8C8u;
            goto label_3ba8c8;
        }
    }
    ctx->pc = 0x3BA764u;
    // 0x3ba764: 0x0  nop
    ctx->pc = 0x3ba764u;
    // NOP
label_3ba768:
    // 0x3ba768: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3BA768u;
    SET_GPR_U32(ctx, 31, 0x3BA770u);
    ctx->pc = 0x3BA76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA768u;
    // 0x3ba76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3BA768u, 0x3BA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA770u;
label_3ba770:
    // 0x3ba770: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3ba770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ba774: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ba774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3ba778: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x3ba778u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3ba77c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3ba77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3ba780: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3ba780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3ba784: 0x0  nop
    ctx->pc = 0x3ba784u;
    // NOP
    // 0x3ba788: 0x0  nop
    ctx->pc = 0x3ba788u;
    // NOP
    // 0x3ba78c: 0x1810  mfhi        $v1
    ctx->pc = 0x3ba78cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3ba790: 0x96022b46  lhu         $v0, 0x2B46($s0)
    ctx->pc = 0x3ba790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11078)));
    // 0x3ba794: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3ba794u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3ba798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ba798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ba79c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3ba79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ba7a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ba7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ba7a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ba7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3ba7a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA7A8u;
    {
        const bool branch_taken_0x3ba7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7A8u;
        // 0x3ba7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba7a8) {
            ctx->pc = 0x3BA7C0u;
            goto label_3ba7c0;
        }
    }
    ctx->pc = 0x3BA7B0u;
    // 0x3ba7b0: 0xc0eea38  jal         func_3BA8E0
    ctx->pc = 0x3BA7B0u;
    SET_GPR_U32(ctx, 31, 0x3BA7B8u);
    ctx->pc = 0x3BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA8E0u, 0x3BA7B0u, 0x3BA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA7B8u;
label_3ba7b8:
    // 0x3ba7b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA7B8u;
    {
        const bool branch_taken_0x3ba7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba7b8) {
            ctx->pc = 0x3BA7C8u;
            goto label_3ba7c8;
        }
    }
    ctx->pc = 0x3BA7C0u;
label_3ba7c0:
    // 0x3ba7c0: 0xc0f1f10  jal         func_3C7C40
    ctx->pc = 0x3BA7C0u;
    SET_GPR_U32(ctx, 31, 0x3BA7C8u);
    ctx->pc = 0x3BA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA7C0u;
    // 0x3ba7c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7C40u, 0x3BA7C0u, 0x3BA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA7C8u;
label_3ba7c8:
    // 0x3ba7c8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3ba7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3ba7cc: 0x2484c250  addiu       $a0, $a0, -0x3DB0
    ctx->pc = 0x3ba7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951504));
    // 0x3ba7d0: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x3ba7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3ba7d4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3ba7d4u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba7d8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ba7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ba7dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3ba7dcu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba7e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3ba7e0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba7e4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3ba7e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ba7e8: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ba7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ba7ec: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3ba7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ba7f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ba7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ba7f4: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3ba7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ba7f8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ba7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba7fc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ba7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba800: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3ba800u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ba804: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3ba804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba808: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3ba808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3ba80c: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3ba80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba810: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba814: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba818: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ba818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba81c: 0x0  nop
    ctx->pc = 0x3ba81cu;
    // NOP
label_3ba820:
    // 0x3ba820: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ba820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ba824: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3BA824u;
    {
        const bool branch_taken_0x3ba824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba824) {
            ctx->pc = 0x3BA8C8u;
            goto label_3ba8c8;
        }
    }
    ctx->pc = 0x3BA82Cu;
    // 0x3ba82c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ba82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba830: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ba830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ba834: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ba834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ba838: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ba838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ba83c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ba83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ba840: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ba840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ba844: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ba844u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ba848: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ba848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba850: 0x0  nop
    ctx->pc = 0x3ba850u;
    // NOP
    // 0x3ba854: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ba854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ba858: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba85c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA85Cu;
    {
        const bool branch_taken_0x3ba85c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba85c) {
            ctx->pc = 0x3BA874u;
            goto label_3ba874;
        }
    }
    ctx->pc = 0x3BA864u;
    // 0x3ba864: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba868: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba86c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA86Cu;
    {
        const bool branch_taken_0x3ba86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA86Cu;
        // 0x3ba870: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba86c) {
            ctx->pc = 0x3BA890u;
            goto label_3ba890;
        }
    }
    ctx->pc = 0x3BA874u;
label_3ba874:
    // 0x3ba874: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba878: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba87c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba87cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba880: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba884: 0x0  nop
    ctx->pc = 0x3ba884u;
    // NOP
    // 0x3ba888: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ba888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ba88c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3ba88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ba890:
    // 0x3ba890: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x3BA890u;
    SET_GPR_U32(ctx, 31, 0x3BA898u);
    ctx->pc = 0x3BA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA890u;
    // 0x3ba894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x3BA890u, 0x3BA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA898u;
label_3ba898:
    // 0x3ba898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba8a0: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BA8A0u;
    SET_GPR_U32(ctx, 31, 0x3BA8A8u);
    ctx->pc = 0x3BA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA8A0u;
    // 0x3ba8a4: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BA8A0u, 0x3BA8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA8A8u;
label_3ba8a8:
    // 0x3ba8a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA8A8u;
    {
        const bool branch_taken_0x3ba8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8A8u;
        // 0x3ba8ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8a8) {
            ctx->pc = 0x3BA8B8u;
            goto label_3ba8b8;
        }
    }
    ctx->pc = 0x3BA8B0u;
    // 0x3ba8b0: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3ba8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba8b4: 0x0  nop
    ctx->pc = 0x3ba8b4u;
    // NOP
label_3ba8b8:
    // 0x3ba8b8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba8c0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ba8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba8c4: 0x0  nop
    ctx->pc = 0x3ba8c4u;
    // NOP
label_3ba8c8:
    // 0x3ba8c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8D0u;
        // 0x3ba8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA8D8u;
}
