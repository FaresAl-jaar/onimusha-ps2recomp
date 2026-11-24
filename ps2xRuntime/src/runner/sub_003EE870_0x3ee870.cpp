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

// Function: sub_003EE870
// Address: 0x3ee870 - 0x3eec4c
void sub_003EE870_0x3ee870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE870_0x3ee870");
#endif

    switch (ctx->pc) {
        case 0x3ee960u: goto label_3ee960;
        case 0x3ee970u: goto label_3ee970;
        case 0x3ee980u: goto label_3ee980;
        case 0x3ee98cu: goto label_3ee98c;
        case 0x3ee9c4u: goto label_3ee9c4;
        case 0x3ee9d0u: goto label_3ee9d0;
        case 0x3ee9e0u: goto label_3ee9e0;
        case 0x3eea20u: goto label_3eea20;
        case 0x3eeadcu: goto label_3eeadc;
        case 0x3eeaf0u: goto label_3eeaf0;
        case 0x3eeb00u: goto label_3eeb00;
        case 0x3eeb10u: goto label_3eeb10;
        case 0x3eeb18u: goto label_3eeb18;
        case 0x3eeb28u: goto label_3eeb28;
        case 0x3eebf8u: goto label_3eebf8;
        case 0x3eec08u: goto label_3eec08;
        default: break;
    }

    ctx->pc = 0x3ee870u;

    // 0x3ee870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ee870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ee874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ee874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ee878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ee878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ee87c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ee87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ee880: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ee880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ee884: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3ee884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3ee888: 0x102000eb  beqz        $at, . + 4 + (0xEB << 2)
    ctx->pc = 0x3EE888u;
    {
        const bool branch_taken_0x3ee888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE888u;
        // 0x3ee88c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee888) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EE890u;
    // 0x3ee890: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3ee890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3ee894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ee894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ee898: 0x24845990  addiu       $a0, $a0, 0x5990
    ctx->pc = 0x3ee898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
    // 0x3ee89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee8a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ee8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee8a4: 0x600008  jr          $v1
    ctx->pc = 0x3EE8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EE8B0u: goto label_3ee8b0;
            case 0x3EE9C8u: goto label_3ee9c8;
            case 0x3EEA38u: goto label_3eea38;
            case 0x3EEB10u: goto label_3eeb10;
            case 0x3EEB88u: goto label_3eeb88;
            case 0x3EEBF0u: goto label_3eebf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE8A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EE8ACu;
    // 0x3ee8ac: 0x0  nop
    ctx->pc = 0x3ee8acu;
    // NOP
label_3ee8b0:
    // 0x3ee8b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ee8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ee8b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3ee8b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3ee8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee8bc: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x3ee8bcu;
    { uint32_t bits = FAST_READ32(0x660070u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ee8c0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3ee8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3ee8c4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3ee8c4u;
    { uint32_t bits = FAST_READ32(0x660074u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ee8c8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x3ee8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3ee8cc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3ee8ccu;
    { uint32_t bits = FAST_READ32(0x660078u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ee8d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3ee8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee8d4: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x3ee8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x3ee8d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ee8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee8dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ee8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ee8e0: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x3ee8e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ee8e4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ee8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ee8e8: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x3ee8e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ee8ec: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3ee8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ee8f0: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x3ee8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ee8f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee8f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ee8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee8fc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee900: 0xa60807f2  sh          $t0, 0x7F2($s0)
    ctx->pc = 0x3ee900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 8));
    // 0x3ee904: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ee908: 0xa20707f5  sb          $a3, 0x7F5($s0)
    ctx->pc = 0x3ee908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ee90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee910: 0xae0607ec  sw          $a2, 0x7EC($s0)
    ctx->pc = 0x3ee910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 6));
    // 0x3ee914: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ee914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee918: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ee918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ee91c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ee91cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ee920: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ee924: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee928: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE928u;
    {
        const bool branch_taken_0x3ee928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee928) {
            ctx->pc = 0x3EE940u;
            goto label_3ee940;
        }
    }
    ctx->pc = 0x3EE930u;
    // 0x3ee930: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee934: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ee934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ee938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EE938u;
    {
        const bool branch_taken_0x3ee938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE938u;
        // 0x3ee93c: 0xa6022b30  sh          $v0, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee938) {
            ctx->pc = 0x3EE958u;
            goto label_3ee958;
        }
    }
    ctx->pc = 0x3EE940u;
label_3ee940:
    // 0x3ee940: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ee940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ee944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee948: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ee948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ee94c: 0x0  nop
    ctx->pc = 0x3ee94cu;
    // NOP
    // 0x3ee950: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ee950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ee954: 0xa6022b30  sh          $v0, 0x2B30($s0)
    ctx->pc = 0x3ee954u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
label_3ee958:
    // 0x3ee958: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE958u;
    SET_GPR_U32(ctx, 31, 0x3EE960u);
    ctx->pc = 0x3EE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE958u;
    // 0x3ee95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE958u, 0x3EE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE960u;
label_3ee960:
    // 0x3ee960: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3EE960u;
    {
        const bool branch_taken_0x3ee960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE960u;
        // 0x3ee964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee960) {
            ctx->pc = 0x3EE9C8u;
            goto label_3ee9c8;
        }
    }
    ctx->pc = 0x3EE968u;
    // 0x3ee968: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EE968u;
    SET_GPR_U32(ctx, 31, 0x3EE970u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EE968u, 0x3EE970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE970u;
label_3ee970:
    // 0x3ee970: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3ee970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ee974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ee974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee978: 0xc0aacc0  jal         func_2AB300
    ctx->pc = 0x3EE978u;
    SET_GPR_U32(ctx, 31, 0x3EE980u);
    ctx->pc = 0x3EE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE978u;
    // 0x3ee97c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB300u, 0x3EE978u, 0x3EE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE980u;
label_3ee980:
    // 0x3ee980: 0x8e042950  lw          $a0, 0x2950($s0)
    ctx->pc = 0x3ee980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    // 0x3ee984: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EE984u;
    SET_GPR_U32(ctx, 31, 0x3EE98Cu);
    ctx->pc = 0x3EE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE984u;
    // 0x3ee988: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EE984u, 0x3EE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE98Cu;
label_3ee98c:
    // 0x3ee98c: 0xae112950  sw          $s1, 0x2950($s0)
    ctx->pc = 0x3ee98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10576), GPR_U32(ctx, 17));
    // 0x3ee990: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ee990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ee994: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3ee994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ee998: 0x3c021b00  lui         $v0, 0x1B00
    ctx->pc = 0x3ee998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6912 << 16));
    // 0x3ee99c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ee99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ee9a0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ee9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3ee9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9a8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3ee9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ee9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ee9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ee9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ee9b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ee9b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EE9BCu;
    SET_GPR_U32(ctx, 31, 0x3EE9C4u);
    ctx->pc = 0x3EE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE9BCu;
    // 0x3ee9c0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EE9BCu, 0x3EE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9C4u;
label_3ee9c4:
    // 0x3ee9c4: 0x0  nop
    ctx->pc = 0x3ee9c4u;
    // NOP
label_3ee9c8:
    // 0x3ee9c8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE9C8u;
    SET_GPR_U32(ctx, 31, 0x3EE9D0u);
    ctx->pc = 0x3EE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE9C8u;
    // 0x3ee9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE9C8u, 0x3EE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9D0u;
label_3ee9d0:
    // 0x3ee9d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE9D0u;
    {
        const bool branch_taken_0x3ee9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9D0u;
        // 0x3ee9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9d0) {
            ctx->pc = 0x3EE9E8u;
            goto label_3ee9e8;
        }
    }
    ctx->pc = 0x3EE9D8u;
    // 0x3ee9d8: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EE9D8u;
    SET_GPR_U32(ctx, 31, 0x3EE9E0u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EE9D8u, 0x3EE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9E0u;
label_3ee9e0:
    // 0x3ee9e0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x3EE9E0u;
    {
        const bool branch_taken_0x3ee9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee9e0) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EE9E8u;
label_3ee9e8:
    // 0x3ee9e8: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee9e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ee9ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE9ECu;
    {
        const bool branch_taken_0x3ee9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee9ec) {
            ctx->pc = 0x3EEA00u;
            goto label_3eea00;
        }
    }
    ctx->pc = 0x3EE9F4u;
    // 0x3ee9f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ee9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ee9f8: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee9fc: 0x0  nop
    ctx->pc = 0x3ee9fcu;
    // NOP
label_3eea00:
    // 0x3eea00: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eea00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eea04: 0x1c60008c  bgtz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3EEA04u;
    {
        const bool branch_taken_0x3eea04 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA04u;
        // 0x3eea08: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eea04) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEA0Cu;
    // 0x3eea0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3eea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3eea10: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eea10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eea14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eea18: 0xc0fb6f8  jal         func_3EDBE0
    ctx->pc = 0x3EEA18u;
    SET_GPR_U32(ctx, 31, 0x3EEA20u);
    ctx->pc = 0x3EEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEA18u;
    // 0x3eea1c: 0xa6022b2e  sh          $v0, 0x2B2E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBE0u, 0x3EEA18u, 0x3EEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEA20u;
label_3eea20:
    // 0x3eea20: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3eea20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3eea24: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x3eea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x3eea28: 0x346354f6  ori         $v1, $v1, 0x54F6
    ctx->pc = 0x3eea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21750);
    // 0x3eea2c: 0x7e042b90  sq          $a0, 0x2B90($s0)
    ctx->pc = 0x3eea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11152), GPR_VEC(ctx, 4));
    // 0x3eea30: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3EEA30u;
    {
        const bool branch_taken_0x3eea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA30u;
        // 0x3eea34: 0xae032b94  sw          $v1, 0x2B94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eea30) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEA38u;
label_3eea38:
    // 0x3eea38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3eea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eea3c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eea40: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eea40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eea44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eea48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3eea4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eea50: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eea54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eea54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eea58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eea5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eea60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eea60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eea64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eea64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eea68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eea68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eea6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEA6Cu;
    {
        const bool branch_taken_0x3eea6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eea6c) {
            ctx->pc = 0x3EEA84u;
            goto label_3eea84;
        }
    }
    ctx->pc = 0x3EEA74u;
    // 0x3eea74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eea74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eea78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eea78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eea7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEA7Cu;
    {
        const bool branch_taken_0x3eea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA7Cu;
        // 0x3eea80: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eea7c) {
            ctx->pc = 0x3EEAA0u;
            goto label_3eeaa0;
        }
    }
    ctx->pc = 0x3EEA84u;
label_3eea84:
    // 0x3eea84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eea84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eea88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eea8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eea8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eea90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eea90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eea94: 0x0  nop
    ctx->pc = 0x3eea94u;
    // NOP
    // 0x3eea98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eea9c: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eea9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3eeaa0:
    // 0x3eeaa0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x3eeaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x3eeaa4: 0x86052b2e  lh          $a1, 0x2B2E($s0)
    ctx->pc = 0x3eeaa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eeaa8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x3eeaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x3eeaac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3eeaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3eeab0: 0x51b00  sll         $v1, $a1, 12
    ctx->pc = 0x3eeab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x3eeab4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3eeab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eeab8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3eeab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3eeabc: 0x0  nop
    ctx->pc = 0x3eeabcu;
    // NOP
    // 0x3eeac0: 0x0  nop
    ctx->pc = 0x3eeac0u;
    // NOP
    // 0x3eeac4: 0x1010  mfhi        $v0
    ctx->pc = 0x3eeac4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3eeac8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3eeac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3eeacc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3eeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3eead0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3eead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3eead4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EEAD4u;
    SET_GPR_U32(ctx, 31, 0x3EEADCu);
    ctx->pc = 0x3EEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEAD4u;
    // 0x3eead8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EEAD4u, 0x3EEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEADCu;
label_3eeadc:
    // 0x3eeadc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3eeadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3eeae0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3eeae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3eeae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3eeae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3eeae8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EEAE8u;
    SET_GPR_U32(ctx, 31, 0x3EEAF0u);
    ctx->pc = 0x3EEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEAE8u;
    // 0x3eeaec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EEAE8u, 0x3EEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEAF0u;
label_3eeaf0:
    // 0x3eeaf0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3eeaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3eeaf4: 0x26052b90  addiu       $a1, $s0, 0x2B90
    ctx->pc = 0x3eeaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11152));
    // 0x3eeaf8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EEAF8u;
    SET_GPR_U32(ctx, 31, 0x3EEB00u);
    ctx->pc = 0x3EEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEAF8u;
    // 0x3eeafc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EEAF8u, 0x3EEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB00u;
label_3eeb00:
    // 0x3eeb00: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3eeb00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3eeb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eeb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeb08: 0xc0bc7a8  jal         func_2F1EA0
    ctx->pc = 0x3EEB08u;
    SET_GPR_U32(ctx, 31, 0x3EEB10u);
    ctx->pc = 0x3EEB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB08u;
    // 0x3eeb0c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EA0u, 0x3EEB08u, 0x3EEB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB10u;
label_3eeb10:
    // 0x3eeb10: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EEB10u;
    SET_GPR_U32(ctx, 31, 0x3EEB18u);
    ctx->pc = 0x3EEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEB10u;
    // 0x3eeb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EEB10u, 0x3EEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB18u;
label_3eeb18:
    // 0x3eeb18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEB18u;
    {
        const bool branch_taken_0x3eeb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB18u;
        // 0x3eeb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb18) {
            ctx->pc = 0x3EEB30u;
            goto label_3eeb30;
        }
    }
    ctx->pc = 0x3EEB20u;
    // 0x3eeb20: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EEB20u;
    SET_GPR_U32(ctx, 31, 0x3EEB28u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EEB20u, 0x3EEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB28u;
label_3eeb28:
    // 0x3eeb28: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3EEB28u;
    {
        const bool branch_taken_0x3eeb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb28) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEB30u;
label_3eeb30:
    // 0x3eeb30: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eeb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eeb34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB34u;
    {
        const bool branch_taken_0x3eeb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb34) {
            ctx->pc = 0x3EEB48u;
            goto label_3eeb48;
        }
    }
    ctx->pc = 0x3EEB3Cu;
    // 0x3eeb3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eeb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eeb40: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eeb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eeb44: 0x0  nop
    ctx->pc = 0x3eeb44u;
    // NOP
label_3eeb48:
    // 0x3eeb48: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eeb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eeb4c: 0x1c60003a  bgtz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3EEB4Cu;
    {
        const bool branch_taken_0x3eeb4c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eeb4c) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEB54u;
    // 0x3eeb54: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eeb54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eeb58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eeb5c: 0xa6032b2e  sh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eeb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eeb60: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eeb60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eeb64: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB64u;
    {
        const bool branch_taken_0x3eeb64 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB64u;
        // 0x3eeb68: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb64) {
            ctx->pc = 0x3EEB78u;
            goto label_3eeb78;
        }
    }
    ctx->pc = 0x3EEB6Cu;
    // 0x3eeb6c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3EEB6Cu;
    {
        const bool branch_taken_0x3eeb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB6Cu;
        // 0x3eeb70: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb6c) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEB74u;
    // 0x3eeb74: 0x0  nop
    ctx->pc = 0x3eeb74u;
    // NOP
label_3eeb78:
    // 0x3eeb78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eeb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eeb7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3EEB7Cu;
    {
        const bool branch_taken_0x3eeb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB7Cu;
        // 0x3eeb80: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb7c) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEB84u;
    // 0x3eeb84: 0x0  nop
    ctx->pc = 0x3eeb84u;
    // NOP
label_3eeb88:
    // 0x3eeb88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eeb8c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eeb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eeb90: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eeb94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eeb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eeb98: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3eeb9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eeb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eeba0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eeba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eeba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eeba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eeba8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eeba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eebac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eebacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eebb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eebb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eebb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eebb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eebb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eebb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eebbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEBBCu;
    {
        const bool branch_taken_0x3eebbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eebbc) {
            ctx->pc = 0x3EEBD4u;
            goto label_3eebd4;
        }
    }
    ctx->pc = 0x3EEBC4u;
    // 0x3eebc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eebc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eebc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eebc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eebcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEBCCu;
    {
        const bool branch_taken_0x3eebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBCCu;
        // 0x3eebd0: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eebcc) {
            ctx->pc = 0x3EEBF0u;
            goto label_3eebf0;
        }
    }
    ctx->pc = 0x3EEBD4u;
label_3eebd4:
    // 0x3eebd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eebd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eebd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eebdc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eebdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eebe0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eebe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eebe4: 0x0  nop
    ctx->pc = 0x3eebe4u;
    // NOP
    // 0x3eebe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eebe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eebec: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eebecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3eebf0:
    // 0x3eebf0: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EEBF0u;
    SET_GPR_U32(ctx, 31, 0x3EEBF8u);
    ctx->pc = 0x3EEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEBF0u;
    // 0x3eebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EEBF0u, 0x3EEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEBF8u;
label_3eebf8:
    // 0x3eebf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEBF8u;
    {
        const bool branch_taken_0x3eebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBF8u;
        // 0x3eebfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eebf8) {
            ctx->pc = 0x3EEC10u;
            goto label_3eec10;
        }
    }
    ctx->pc = 0x3EEC00u;
    // 0x3eec00: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EEC00u;
    SET_GPR_U32(ctx, 31, 0x3EEC08u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EEC00u, 0x3EEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC08u;
label_3eec08:
    // 0x3eec08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EEC08u;
    {
        const bool branch_taken_0x3eec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eec08) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEC10u;
label_3eec10:
    // 0x3eec10: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eec10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eec14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEC14u;
    {
        const bool branch_taken_0x3eec14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eec14) {
            ctx->pc = 0x3EEC28u;
            goto label_3eec28;
        }
    }
    ctx->pc = 0x3EEC1Cu;
    // 0x3eec1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eec20: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eec20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eec24: 0x0  nop
    ctx->pc = 0x3eec24u;
    // NOP
label_3eec28:
    // 0x3eec28: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eec28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eec2c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EEC2Cu;
    {
        const bool branch_taken_0x3eec2c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC2Cu;
        // 0x3eec30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eec2c) {
            ctx->pc = 0x3EEC38u;
            goto label_3eec38;
        }
    }
    ctx->pc = 0x3EEC34u;
    // 0x3eec34: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3eec34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eec38:
    // 0x3eec38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eec3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3eec3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eec40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eec40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eec44: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC44u;
        // 0x3eec48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEC4Cu;
}
