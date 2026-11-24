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

// Function: sub_003EB430
// Address: 0x3eb430 - 0x3ebc34
void sub_003EB430_0x3eb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB430_0x3eb430");
#endif

    switch (ctx->pc) {
        case 0x3eb4a8u: goto label_3eb4a8;
        case 0x3eb53cu: goto label_3eb53c;
        case 0x3eb548u: goto label_3eb548;
        case 0x3eb564u: goto label_3eb564;
        case 0x3eb6c0u: goto label_3eb6c0;
        case 0x3eb6fcu: goto label_3eb6fc;
        case 0x3eb87cu: goto label_3eb87c;
        case 0x3eb8f4u: goto label_3eb8f4;
        case 0x3eba8cu: goto label_3eba8c;
        case 0x3ebb04u: goto label_3ebb04;
        case 0x3ebb18u: goto label_3ebb18;
        default: break;
    }

    ctx->pc = 0x3eb430u;

    // 0x3eb430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eb430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3eb434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3eb434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3eb438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eb438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3eb43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eb43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eb440: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eb440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eb444: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x3eb444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3eb448: 0x102001f5  beqz        $at, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x3EB448u;
    {
        const bool branch_taken_0x3eb448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB448u;
        // 0x3eb44c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb448) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB450u;
    // 0x3eb450: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eb450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eb454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eb454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eb458: 0x24a54e60  addiu       $a1, $a1, 0x4E60
    ctx->pc = 0x3eb458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20064));
    // 0x3eb45c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eb460: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb464: 0x600008  jr          $v1
    ctx->pc = 0x3EB464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EB470u: goto label_3eb470;
            case 0x3EB4B0u: goto label_3eb4b0;
            case 0x3EB5D0u: goto label_3eb5d0;
            case 0x3EB638u: goto label_3eb638;
            case 0x3EB7C0u: goto label_3eb7c0;
            case 0x3EB7D0u: goto label_3eb7d0;
            case 0x3EB9D0u: goto label_3eb9d0;
            case 0x3EB9E0u: goto label_3eb9e0;
            case 0x3EBC08u: goto label_3ebc08;
            case 0x3EBC10u: goto label_3ebc10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EB46Cu;
    // 0x3eb46c: 0x0  nop
    ctx->pc = 0x3eb46cu;
    // NOP
label_3eb470:
    // 0x3eb470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3eb470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb474: 0xa2062b3f  sb          $a2, 0x2B3F($s0)
    ctx->pc = 0x3eb474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11071), (uint8_t)GPR_U32(ctx, 6));
    // 0x3eb478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb47c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb480: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x3eb480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3eb484: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb488: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eb488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb48c: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3eb48cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3eb490: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3eb490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3eb494: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3eb494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb498: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3eb498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3eb49c: 0xa2060821  sb          $a2, 0x821($s0)
    ctx->pc = 0x3eb49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3eb4a0: 0xc0fa2f8  jal         func_3E8BE0
    ctx->pc = 0x3EB4A0u;
    SET_GPR_U32(ctx, 31, 0x3EB4A8u);
    ctx->pc = 0x3EB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB4A0u;
    // 0x3eb4a4: 0xa6002b22  sh          $zero, 0x2B22($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8BE0u, 0x3EB4A0u, 0x3EB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB4A8u;
label_3eb4a8:
    // 0x3eb4a8: 0xa2002b2c  sb          $zero, 0x2B2C($s0)
    ctx->pc = 0x3eb4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11052), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb4ac: 0xa2002b2d  sb          $zero, 0x2B2D($s0)
    ctx->pc = 0x3eb4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 0));
label_3eb4b0:
    // 0x3eb4b0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb4b4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eb4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eb4b8: 0x86052b22  lh          $a1, 0x2B22($s0)
    ctx->pc = 0x3eb4b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb4bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eb4bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb4c0: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x3eb4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x3eb4c4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3eb4c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb4c8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb4d0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3eb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3eb4d4: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb4d8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb4dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb4dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb4e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb4e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb4e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb4e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB4E8u;
    {
        const bool branch_taken_0x3eb4e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4E8u;
        // 0x3eb4ec: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4e8) {
            ctx->pc = 0x3EB500u;
            goto label_3eb500;
        }
    }
    ctx->pc = 0x3EB4F0u;
    // 0x3eb4f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb4f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb4f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB4F8u;
    {
        const bool branch_taken_0x3eb4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb4f8) {
            ctx->pc = 0x3EB518u;
            goto label_3eb518;
        }
    }
    ctx->pc = 0x3EB500u;
label_3eb500:
    // 0x3eb500: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb504: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb508: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb50c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb510: 0x0  nop
    ctx->pc = 0x3eb510u;
    // NOP
    // 0x3eb514: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3eb518:
    // 0x3eb518: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EB518u;
    {
        const bool branch_taken_0x3eb518 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3eb518) {
            ctx->pc = 0x3EB568u;
            goto label_3eb568;
        }
    }
    ctx->pc = 0x3EB520u;
    // 0x3eb520: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3eb520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3eb524: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3eb524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3eb528: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x3eb528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3eb52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb530: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3eb530u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x660050u));
    // 0x3eb534: 0xc0fa318  jal         func_3E8C60
    ctx->pc = 0x3EB534u;
    SET_GPR_U32(ctx, 31, 0x3EB53Cu);
    ctx->pc = 0x3EB538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB534u;
    // 0x3eb538: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8C60u, 0x3EB534u, 0x3EB53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB53Cu;
label_3eb53c:
    // 0x3eb53c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb540: 0xc0fa31c  jal         func_3E8C70
    ctx->pc = 0x3EB540u;
    SET_GPR_U32(ctx, 31, 0x3EB548u);
    ctx->pc = 0x3EB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB540u;
    // 0x3eb544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8C70u, 0x3EB540u, 0x3EB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB548u;
label_3eb548:
    // 0x3eb548: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3eb548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3eb54c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3eb54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb550: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x3eb550u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3eb554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eb554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb558: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x3eb558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3eb55c: 0xc0bc7c0  jal         func_2F1F00
    ctx->pc = 0x3EB55Cu;
    SET_GPR_U32(ctx, 31, 0x3EB564u);
    ctx->pc = 0x3EB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB55Cu;
    // 0x3eb560: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F00u, 0x3EB55Cu, 0x3EB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB564u;
label_3eb564:
    // 0x3eb564: 0xae022b28  sw          $v0, 0x2B28($s0)
    ctx->pc = 0x3eb564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
label_3eb568:
    // 0x3eb568: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3eb568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3eb56c: 0x106001ac  beqz        $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x3EB56Cu;
    {
        const bool branch_taken_0x3eb56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB56Cu;
        // 0x3eb570: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb56c) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB574u;
    // 0x3eb574: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x3eb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3eb578: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb57c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3eb57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb580: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb588: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb58c: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x3eb58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb590: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3eb590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3eb594: 0xa20607f5  sb          $a2, 0x7F5($s0)
    ctx->pc = 0x3eb594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3eb598: 0xae0507ec  sw          $a1, 0x7EC($s0)
    ctx->pc = 0x3eb598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 5));
    // 0x3eb59c: 0x8e032b28  lw          $v1, 0x2B28($s0)
    ctx->pc = 0x3eb59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3eb5a0: 0x1460019f  bnez        $v1, . + 4 + (0x19F << 2)
    ctx->pc = 0x3EB5A0u;
    {
        const bool branch_taken_0x3eb5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb5a0) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB5A8u;
    // 0x3eb5a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb5ac: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x3eb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3eb5b0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb5b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb5b8: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3eb5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3eb5bc: 0xa20607f5  sb          $a2, 0x7F5($s0)
    ctx->pc = 0x3eb5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3eb5c0: 0xae0507ec  sw          $a1, 0x7EC($s0)
    ctx->pc = 0x3eb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 5));
    // 0x3eb5c4: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x3EB5C4u;
    {
        const bool branch_taken_0x3eb5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5C4u;
        // 0x3eb5c8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5c4) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB5CCu;
    // 0x3eb5cc: 0x0  nop
    ctx->pc = 0x3eb5ccu;
    // NOP
label_3eb5d0:
    // 0x3eb5d0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3eb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3eb5d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb5d8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3eb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb5dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb5e0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3eb5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3eb5e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eb5e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb5e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb5f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb5f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb5f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb5f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb5f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb5fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB5FCu;
    {
        const bool branch_taken_0x3eb5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eb5fc) {
            ctx->pc = 0x3EB614u;
            goto label_3eb614;
        }
    }
    ctx->pc = 0x3EB604u;
    // 0x3eb604: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb608: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb60c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB60Cu;
    {
        const bool branch_taken_0x3eb60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB60Cu;
        // 0x3eb610: 0xa6042b22  sh          $a0, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb60c) {
            ctx->pc = 0x3EB630u;
            goto label_3eb630;
        }
    }
    ctx->pc = 0x3EB614u;
label_3eb614:
    // 0x3eb614: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb61c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb620: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb624: 0x0  nop
    ctx->pc = 0x3eb624u;
    // NOP
    // 0x3eb628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eb62c: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x3eb62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_3eb630:
    // 0x3eb630: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eb634: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3eb638:
    // 0x3eb638: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb63c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB63Cu;
    {
        const bool branch_taken_0x3eb63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb63c) {
            ctx->pc = 0x3EB650u;
            goto label_3eb650;
        }
    }
    ctx->pc = 0x3EB644u;
    // 0x3eb644: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb648: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb64c: 0x0  nop
    ctx->pc = 0x3eb64cu;
    // NOP
label_3eb650:
    // 0x3eb650: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3eb650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3eb654: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb658: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb65c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eb65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb660: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3eb660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eb664: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb668: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb66c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eb66cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb674: 0x0  nop
    ctx->pc = 0x3eb674u;
    // NOP
    // 0x3eb678: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb67c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb680: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB680u;
    {
        const bool branch_taken_0x3eb680 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB680u;
        // 0x3eb684: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb680) {
            ctx->pc = 0x3EB698u;
            goto label_3eb698;
        }
    }
    ctx->pc = 0x3EB688u;
    // 0x3eb688: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb68c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb68cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB690u;
    {
        const bool branch_taken_0x3eb690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb690) {
            ctx->pc = 0x3EB6B0u;
            goto label_3eb6b0;
        }
    }
    ctx->pc = 0x3EB698u;
label_3eb698:
    // 0x3eb698: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb69c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb6a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb6a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb6a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb6a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb6a8: 0x0  nop
    ctx->pc = 0x3eb6a8u;
    // NOP
    // 0x3eb6ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3eb6b0:
    // 0x3eb6b0: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3EB6B0u;
    {
        const bool branch_taken_0x3eb6b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3eb6b0) {
            ctx->pc = 0x3EB6E8u;
            goto label_3eb6e8;
        }
    }
    ctx->pc = 0x3EB6B8u;
    // 0x3eb6b8: 0xc0c0890  jal         func_302240
    ctx->pc = 0x3EB6B8u;
    SET_GPR_U32(ctx, 31, 0x3EB6C0u);
    ctx->pc = 0x3EB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6B8u;
    // 0x3eb6bc: 0x8e042b28  lw          $a0, 0x2B28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x3EB6B8u, 0x3EB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6C0u;
label_3eb6c0:
    // 0x3eb6c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EB6C0u;
    {
        const bool branch_taken_0x3eb6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6c0) {
            ctx->pc = 0x3EB6E8u;
            goto label_3eb6e8;
        }
    }
    ctx->pc = 0x3EB6C8u;
    // 0x3eb6c8: 0x9043053a  lbu         $v1, 0x53A($v0)
    ctx->pc = 0x3eb6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x3eb6cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB6CCu;
    {
        const bool branch_taken_0x3eb6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6CCu;
        // 0x3eb6d0: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6cc) {
            ctx->pc = 0x3EB6E0u;
            goto label_3eb6e0;
        }
    }
    ctx->pc = 0x3EB6D4u;
    // 0x3eb6d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB6D4u;
    {
        const bool branch_taken_0x3eb6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6D4u;
        // 0x3eb6d8: 0xa043053a  sb          $v1, 0x53A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6d4) {
            ctx->pc = 0x3EB6E8u;
            goto label_3eb6e8;
        }
    }
    ctx->pc = 0x3EB6DCu;
    // 0x3eb6dc: 0x0  nop
    ctx->pc = 0x3eb6dcu;
    // NOP
label_3eb6e0:
    // 0x3eb6e0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x3eb6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3eb6e4: 0xa043053a  sb          $v1, 0x53A($v0)
    ctx->pc = 0x3eb6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 3));
label_3eb6e8:
    // 0x3eb6e8: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb6ec: 0x1c60014c  bgtz        $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x3EB6ECu;
    {
        const bool branch_taken_0x3eb6ec = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eb6ec) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB6F4u;
    // 0x3eb6f4: 0xc0c0890  jal         func_302240
    ctx->pc = 0x3EB6F4u;
    SET_GPR_U32(ctx, 31, 0x3EB6FCu);
    ctx->pc = 0x3EB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6F4u;
    // 0x3eb6f8: 0x8e042b28  lw          $a0, 0x2B28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x3EB6F4u, 0x3EB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6FCu;
label_3eb6fc:
    // 0x3eb6fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3EB6FCu;
    {
        const bool branch_taken_0x3eb6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6fc) {
            ctx->pc = 0x3EB748u;
            goto label_3eb748;
        }
    }
    ctx->pc = 0x3EB704u;
    // 0x3eb704: 0x9044053a  lbu         $a0, 0x53A($v0)
    ctx->pc = 0x3eb704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x3eb708: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x3eb708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x3eb70c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3EB70Cu;
    {
        const bool branch_taken_0x3eb70c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3eb70c) {
            ctx->pc = 0x3EB748u;
            goto label_3eb748;
        }
    }
    ctx->pc = 0x3EB714u;
    // 0x3eb714: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb718: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3eb718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3eb71c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb720: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eb720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb724: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3eb724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb728: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb72c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eb72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb730: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb734: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3eb734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3eb738: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3eb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3eb73c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x3EB73Cu;
    {
        const bool branch_taken_0x3eb73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB73Cu;
        // 0x3eb740: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb73c) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB744u;
    // 0x3eb744: 0x0  nop
    ctx->pc = 0x3eb744u;
    // NOP
label_3eb748:
    // 0x3eb748: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EB748u;
    {
        const bool branch_taken_0x3eb748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb748) {
            ctx->pc = 0x3EB790u;
            goto label_3eb790;
        }
    }
    ctx->pc = 0x3EB750u;
    // 0x3eb750: 0x9044053a  lbu         $a0, 0x53A($v0)
    ctx->pc = 0x3eb750u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x3eb754: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x3eb754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3eb758: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EB758u;
    {
        const bool branch_taken_0x3eb758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3eb758) {
            ctx->pc = 0x3EB790u;
            goto label_3eb790;
        }
    }
    ctx->pc = 0x3EB760u;
    // 0x3eb760: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb764: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3eb764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3eb768: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb76c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb770: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3eb770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb774: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb778: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eb778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb77c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb780: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3eb780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3eb784: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eb784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eb788: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x3EB788u;
    {
        const bool branch_taken_0x3eb788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB788u;
        // 0x3eb78c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb788) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB790u;
label_3eb790:
    // 0x3eb790: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb794: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb798: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3eb798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3eb79c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3eb79cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb7a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb7a4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3eb7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb7a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb7ac: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3eb7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb7b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3eb7b4: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3eb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3eb7b8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x3EB7B8u;
    {
        const bool branch_taken_0x3eb7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7B8u;
        // 0x3eb7bc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7b8) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB7C0u;
label_3eb7c0:
    // 0x3eb7c0: 0xa6002b22  sh          $zero, 0x2B22($s0)
    ctx->pc = 0x3eb7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 0));
    // 0x3eb7c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3eb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eb7c8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb7cc: 0x0  nop
    ctx->pc = 0x3eb7ccu;
    // NOP
label_3eb7d0:
    // 0x3eb7d0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3eb7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3eb7d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EB7D4u;
    {
        const bool branch_taken_0x3eb7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb7d4) {
            ctx->pc = 0x3EB800u;
            goto label_3eb800;
        }
    }
    ctx->pc = 0x3EB7DCu;
    // 0x3eb7dc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb7e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb7e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eb7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb7e8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb7ec: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3eb7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3eb7f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb7f4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eb7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb7f8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3eb7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3eb7fc: 0x0  nop
    ctx->pc = 0x3eb7fcu;
    // NOP
label_3eb800:
    // 0x3eb800: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eb800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb804: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eb804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eb808: 0x86052b22  lh          $a1, 0x2B22($s0)
    ctx->pc = 0x3eb808u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eb80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb810: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3eb810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x3eb814: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3eb814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb818: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb81c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb820: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3eb820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3eb824: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb828: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb82c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb82cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb830: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb834: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb838: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB838u;
    {
        const bool branch_taken_0x3eb838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB838u;
        // 0x3eb83c: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb838) {
            ctx->pc = 0x3EB850u;
            goto label_3eb850;
        }
    }
    ctx->pc = 0x3EB840u;
    // 0x3eb840: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb844: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb848: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB848u;
    {
        const bool branch_taken_0x3eb848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb848) {
            ctx->pc = 0x3EB868u;
            goto label_3eb868;
        }
    }
    ctx->pc = 0x3EB850u;
label_3eb850:
    // 0x3eb850: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb854: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb858: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb85c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb860: 0x0  nop
    ctx->pc = 0x3eb860u;
    // NOP
    // 0x3eb864: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3eb868:
    // 0x3eb868: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB868u;
    {
        const bool branch_taken_0x3eb868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3eb868) {
            ctx->pc = 0x3EB880u;
            goto label_3eb880;
        }
    }
    ctx->pc = 0x3EB870u;
    // 0x3eb870: 0x8e042b28  lw          $a0, 0x2B28($s0)
    ctx->pc = 0x3eb870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3eb874: 0xc0c0880  jal         func_302200
    ctx->pc = 0x3EB874u;
    SET_GPR_U32(ctx, 31, 0x3EB87Cu);
    ctx->pc = 0x3EB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB874u;
    // 0x3eb878: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302200u, 0x3EB874u, 0x3EB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB87Cu;
label_3eb87c:
    // 0x3eb87c: 0x0  nop
    ctx->pc = 0x3eb87cu;
    // NOP
label_3eb880:
    // 0x3eb880: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3eb880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3eb884: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb888: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb88c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb890: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3eb890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eb894: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb898: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb89c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eb89cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb8a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb8a4: 0x0  nop
    ctx->pc = 0x3eb8a4u;
    // NOP
    // 0x3eb8a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb8a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb8ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb8acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB8B0u;
    {
        const bool branch_taken_0x3eb8b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8B0u;
        // 0x3eb8b4: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb8b0) {
            ctx->pc = 0x3EB8C8u;
            goto label_3eb8c8;
        }
    }
    ctx->pc = 0x3EB8B8u;
    // 0x3eb8b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb8bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB8C0u;
    {
        const bool branch_taken_0x3eb8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8C0u;
        // 0x3eb8c4: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb8c0) {
            ctx->pc = 0x3EB8E4u;
            goto label_3eb8e4;
        }
    }
    ctx->pc = 0x3EB8C8u;
label_3eb8c8:
    // 0x3eb8c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb8cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb8d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb8d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb8d8: 0x0  nop
    ctx->pc = 0x3eb8d8u;
    // NOP
    // 0x3eb8dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eb8e0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3eb8e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3eb8e4:
    // 0x3eb8e4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3EB8E4u;
    {
        const bool branch_taken_0x3eb8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8e4) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB8ECu;
    // 0x3eb8ec: 0xc0c0894  jal         func_302250
    ctx->pc = 0x3EB8ECu;
    SET_GPR_U32(ctx, 31, 0x3EB8F4u);
    ctx->pc = 0x3EB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8ECu;
    // 0x3eb8f0: 0x8e042b28  lw          $a0, 0x2B28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x3EB8ECu, 0x3EB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8F4u;
label_3eb8f4:
    // 0x3eb8f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3EB8F4u;
    {
        const bool branch_taken_0x3eb8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8f4) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB8FCu;
    // 0x3eb8fc: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3eb8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3eb900: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eb904: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EB904u;
    {
        const bool branch_taken_0x3eb904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB904u;
        // 0x3eb908: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb904) {
            ctx->pc = 0x3EB948u;
            goto label_3eb948;
        }
    }
    ctx->pc = 0x3EB90Cu;
    // 0x3eb90c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3EB90Cu;
    {
        const bool branch_taken_0x3eb90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3eb90c) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB914u;
    // 0x3eb914: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eb914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eb918: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB918u;
    {
        const bool branch_taken_0x3eb918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB918u;
        // 0x3eb91c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb918) {
            ctx->pc = 0x3EB938u;
            goto label_3eb938;
        }
    }
    ctx->pc = 0x3EB920u;
    // 0x3eb920: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EB920u;
    {
        const bool branch_taken_0x3eb920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3eb920) {
            ctx->pc = 0x3EB930u;
            goto label_3eb930;
        }
    }
    ctx->pc = 0x3EB928u;
    // 0x3eb928: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EB928u;
    {
        const bool branch_taken_0x3eb928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb928) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB930u;
label_3eb930:
    // 0x3eb930: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3EB930u;
    {
        const bool branch_taken_0x3eb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB930u;
        // 0x3eb934: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb930) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB938u;
label_3eb938:
    // 0x3eb938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eb938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb93c: 0xa2032b2d  sb          $v1, 0x2B2D($s0)
    ctx->pc = 0x3eb93cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB940u;
    {
        const bool branch_taken_0x3eb940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB940u;
        // 0x3eb944: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb940) {
            ctx->pc = 0x3EB958u;
            goto label_3eb958;
        }
    }
    ctx->pc = 0x3EB948u;
label_3eb948:
    // 0x3eb948: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eb948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eb94c: 0xa2032b2d  sb          $v1, 0x2B2D($s0)
    ctx->pc = 0x3eb94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eb950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb954: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3eb954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eb958:
    // 0x3eb958: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3eb958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x3eb95c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb960: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb964: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eb964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb968: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3eb968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eb96c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb970: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eb974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb97c: 0x0  nop
    ctx->pc = 0x3eb97cu;
    // NOP
    // 0x3eb980: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb984: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb988: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB988u;
    {
        const bool branch_taken_0x3eb988 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB988u;
        // 0x3eb98c: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb988) {
            ctx->pc = 0x3EB9A0u;
            goto label_3eb9a0;
        }
    }
    ctx->pc = 0x3EB990u;
    // 0x3eb990: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb994: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB998u;
    {
        const bool branch_taken_0x3eb998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB998u;
        // 0x3eb99c: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb998) {
            ctx->pc = 0x3EB9BCu;
            goto label_3eb9bc;
        }
    }
    ctx->pc = 0x3EB9A0u;
label_3eb9a0:
    // 0x3eb9a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb9a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb9a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb9ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eb9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eb9b0: 0x0  nop
    ctx->pc = 0x3eb9b0u;
    // NOP
    // 0x3eb9b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eb9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eb9b8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3eb9b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3eb9bc:
    // 0x3eb9bc: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x3EB9BCu;
    {
        const bool branch_taken_0x3eb9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9BCu;
        // 0x3eb9c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9bc) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB9C4u;
    // 0x3eb9c4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x3EB9C4u;
    {
        const bool branch_taken_0x3eb9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9C4u;
        // 0x3eb9c8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9c4) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EB9CCu;
    // 0x3eb9cc: 0x0  nop
    ctx->pc = 0x3eb9ccu;
    // NOP
label_3eb9d0:
    // 0x3eb9d0: 0xa6002b22  sh          $zero, 0x2B22($s0)
    ctx->pc = 0x3eb9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 0));
    // 0x3eb9d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3eb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eb9d8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb9dc: 0x0  nop
    ctx->pc = 0x3eb9dcu;
    // NOP
label_3eb9e0:
    // 0x3eb9e0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3eb9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3eb9e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EB9E4u;
    {
        const bool branch_taken_0x3eb9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb9e4) {
            ctx->pc = 0x3EBA10u;
            goto label_3eba10;
        }
    }
    ctx->pc = 0x3EB9ECu;
    // 0x3eb9ec: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb9f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb9f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eb9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb9f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb9fc: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3eb9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3eba00: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eba04: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eba04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eba08: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3eba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3eba0c: 0x0  nop
    ctx->pc = 0x3eba0cu;
    // NOP
label_3eba10:
    // 0x3eba10: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eba10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eba14: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eba18: 0x86052b22  lh          $a1, 0x2B22($s0)
    ctx->pc = 0x3eba18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eba1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eba1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eba20: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3eba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x3eba24: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3eba24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eba28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eba2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eba2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eba30: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3eba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3eba34: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eba34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eba38: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eba3c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eba3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eba40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eba40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eba44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eba44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eba48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBA48u;
    {
        const bool branch_taken_0x3eba48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA48u;
        // 0x3eba4c: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba48) {
            ctx->pc = 0x3EBA60u;
            goto label_3eba60;
        }
    }
    ctx->pc = 0x3EBA50u;
    // 0x3eba50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eba50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eba54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eba54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eba58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EBA58u;
    {
        const bool branch_taken_0x3eba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eba58) {
            ctx->pc = 0x3EBA78u;
            goto label_3eba78;
        }
    }
    ctx->pc = 0x3EBA60u;
label_3eba60:
    // 0x3eba60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eba60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eba64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eba68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eba68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eba6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eba6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eba70: 0x0  nop
    ctx->pc = 0x3eba70u;
    // NOP
    // 0x3eba74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eba74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3eba78:
    // 0x3eba78: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBA78u;
    {
        const bool branch_taken_0x3eba78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3eba78) {
            ctx->pc = 0x3EBA90u;
            goto label_3eba90;
        }
    }
    ctx->pc = 0x3EBA80u;
    // 0x3eba80: 0x8e042b28  lw          $a0, 0x2B28($s0)
    ctx->pc = 0x3eba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3eba84: 0xc0c0880  jal         func_302200
    ctx->pc = 0x3EBA84u;
    SET_GPR_U32(ctx, 31, 0x3EBA8Cu);
    ctx->pc = 0x3EBA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBA84u;
    // 0x3eba88: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302200u, 0x3EBA84u, 0x3EBA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA8Cu;
label_3eba8c:
    // 0x3eba8c: 0x0  nop
    ctx->pc = 0x3eba8cu;
    // NOP
label_3eba90:
    // 0x3eba90: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3eba94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eba98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eba98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eba9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ebaa0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ebaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ebaa4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ebaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ebaa8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ebaa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ebaac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ebaacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ebab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ebab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebab4: 0x0  nop
    ctx->pc = 0x3ebab4u;
    // NOP
    // 0x3ebab8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ebab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ebabc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ebabcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ebac0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBAC0u;
    {
        const bool branch_taken_0x3ebac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAC0u;
        // 0x3ebac4: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebac0) {
            ctx->pc = 0x3EBAD8u;
            goto label_3ebad8;
        }
    }
    ctx->pc = 0x3EBAC8u;
    // 0x3ebac8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebacc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ebaccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ebad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBAD0u;
    {
        const bool branch_taken_0x3ebad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAD0u;
        // 0x3ebad4: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebad0) {
            ctx->pc = 0x3EBAF4u;
            goto label_3ebaf4;
        }
    }
    ctx->pc = 0x3EBAD8u;
label_3ebad8:
    // 0x3ebad8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ebad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ebadc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ebadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebae0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebae4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ebae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ebae8: 0x0  nop
    ctx->pc = 0x3ebae8u;
    // NOP
    // 0x3ebaec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ebaecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ebaf0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3ebaf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ebaf4:
    // 0x3ebaf4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3EBAF4u;
    {
        const bool branch_taken_0x3ebaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebaf4) {
            ctx->pc = 0x3EBB90u;
            goto label_3ebb90;
        }
    }
    ctx->pc = 0x3EBAFCu;
    // 0x3ebafc: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x3EBAFCu;
    SET_GPR_U32(ctx, 31, 0x3EBB04u);
    ctx->pc = 0x3EBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBAFCu;
    // 0x3ebb00: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x3EBAFCu, 0x3EBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBB04u;
label_3ebb04:
    // 0x3ebb04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBB04u;
    {
        const bool branch_taken_0x3ebb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB04u;
        // 0x3ebb08: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb04) {
            ctx->pc = 0x3EBB30u;
            goto label_3ebb30;
        }
    }
    ctx->pc = 0x3EBB0Cu;
    // 0x3ebb0c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3ebb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ebb10: 0xc097294  jal         func_25CA50
    ctx->pc = 0x3EBB10u;
    SET_GPR_U32(ctx, 31, 0x3EBB18u);
    ctx->pc = 0x3EBB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBB10u;
    // 0x3ebb14: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA50u, 0x3EBB10u, 0x3EBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBB18u;
label_3ebb18:
    // 0x3ebb18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBB18u;
    {
        const bool branch_taken_0x3ebb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB18u;
        // 0x3ebb1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb18) {
            ctx->pc = 0x3EBB30u;
            goto label_3ebb30;
        }
    }
    ctx->pc = 0x3EBB20u;
    // 0x3ebb20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebb24: 0xa2042b2d  sb          $a0, 0x2B2D($s0)
    ctx->pc = 0x3ebb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ebb28: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3EBB28u;
    {
        const bool branch_taken_0x3ebb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB28u;
        // 0x3ebb2c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb28) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EBB30u;
label_3ebb30:
    // 0x3ebb30: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3ebb30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ebb34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ebb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ebb38: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3EBB38u;
    {
        const bool branch_taken_0x3ebb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB38u;
        // 0x3ebb3c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb38) {
            ctx->pc = 0x3EBB90u;
            goto label_3ebb90;
        }
    }
    ctx->pc = 0x3EBB40u;
    // 0x3ebb40: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3EBB40u;
    {
        const bool branch_taken_0x3ebb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ebb40) {
            ctx->pc = 0x3EBB80u;
            goto label_3ebb80;
        }
    }
    ctx->pc = 0x3EBB48u;
    // 0x3ebb48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ebb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ebb4c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBB4Cu;
    {
        const bool branch_taken_0x3ebb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB4Cu;
        // 0x3ebb50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb4c) {
            ctx->pc = 0x3EBB70u;
            goto label_3ebb70;
        }
    }
    ctx->pc = 0x3EBB54u;
    // 0x3ebb54: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EBB54u;
    {
        const bool branch_taken_0x3ebb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ebb54) {
            ctx->pc = 0x3EBB68u;
            goto label_3ebb68;
        }
    }
    ctx->pc = 0x3EBB5Cu;
    // 0x3ebb5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EBB5Cu;
    {
        const bool branch_taken_0x3ebb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebb5c) {
            ctx->pc = 0x3EBB90u;
            goto label_3ebb90;
        }
    }
    ctx->pc = 0x3EBB64u;
    // 0x3ebb64: 0x0  nop
    ctx->pc = 0x3ebb64u;
    // NOP
label_3ebb68:
    // 0x3ebb68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3EBB68u;
    {
        const bool branch_taken_0x3ebb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB68u;
        // 0x3ebb6c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb68) {
            ctx->pc = 0x3EBB90u;
            goto label_3ebb90;
        }
    }
    ctx->pc = 0x3EBB70u;
label_3ebb70:
    // 0x3ebb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebb74: 0xa2032b2d  sb          $v1, 0x2B2D($s0)
    ctx->pc = 0x3ebb74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebb78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBB78u;
    {
        const bool branch_taken_0x3ebb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB78u;
        // 0x3ebb7c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb78) {
            ctx->pc = 0x3EBB90u;
            goto label_3ebb90;
        }
    }
    ctx->pc = 0x3EBB80u;
label_3ebb80:
    // 0x3ebb80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ebb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ebb84: 0xa2032b2d  sb          $v1, 0x2B2D($s0)
    ctx->pc = 0x3ebb84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebb88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebb8c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ebb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ebb90:
    // 0x3ebb90: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3ebb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x3ebb94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ebb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ebb98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ebb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ebb9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ebb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ebba0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ebba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ebba4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ebba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ebba8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ebba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ebbac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ebbacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ebbb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ebbb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ebbb4: 0x0  nop
    ctx->pc = 0x3ebbb4u;
    // NOP
    // 0x3ebbb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ebbb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ebbbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ebbbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ebbc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBBC0u;
    {
        const bool branch_taken_0x3ebbc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBC0u;
        // 0x3ebbc4: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbc0) {
            ctx->pc = 0x3EBBD8u;
            goto label_3ebbd8;
        }
    }
    ctx->pc = 0x3EBBC8u;
    // 0x3ebbc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebbc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebbcc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ebbccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ebbd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBBD0u;
    {
        const bool branch_taken_0x3ebbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBD0u;
        // 0x3ebbd4: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbd0) {
            ctx->pc = 0x3EBBF4u;
            goto label_3ebbf4;
        }
    }
    ctx->pc = 0x3EBBD8u;
label_3ebbd8:
    // 0x3ebbd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ebbd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ebbdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ebbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebbe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ebbe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ebbe4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ebbe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ebbe8: 0x0  nop
    ctx->pc = 0x3ebbe8u;
    // NOP
    // 0x3ebbec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ebbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ebbf0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3ebbf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ebbf4:
    // 0x3ebbf4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBBF4u;
    {
        const bool branch_taken_0x3ebbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBF4u;
        // 0x3ebbf8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbf4) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EBBFCu;
    // 0x3ebbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBBFCu;
    {
        const bool branch_taken_0x3ebbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBFCu;
        // 0x3ebc00: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbfc) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EBC04u;
    // 0x3ebc04: 0x0  nop
    ctx->pc = 0x3ebc04u;
    // NOP
label_3ebc08:
    // 0x3ebc08: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ebc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ebc0c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ebc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ebc10:
    // 0x3ebc10: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ebc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ebc14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBC14u;
    {
        const bool branch_taken_0x3ebc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC14u;
        // 0x3ebc18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc14) {
            ctx->pc = 0x3EBC20u;
            goto label_3ebc20;
        }
    }
    ctx->pc = 0x3EBC1Cu;
    // 0x3ebc1c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ebc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ebc20:
    // 0x3ebc20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ebc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ebc24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ebc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ebc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ebc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC2Cu;
        // 0x3ebc30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBC34u;
}
