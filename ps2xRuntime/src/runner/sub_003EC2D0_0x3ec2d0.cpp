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

// Function: sub_003EC2D0
// Address: 0x3ec2d0 - 0x3ec9ac
void sub_003EC2D0_0x3ec2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC2D0_0x3ec2d0");
#endif

    switch (ctx->pc) {
        case 0x3ec314u: goto label_3ec314;
        case 0x3ec3b8u: goto label_3ec3b8;
        case 0x3ec438u: goto label_3ec438;
        case 0x3ec448u: goto label_3ec448;
        case 0x3ec454u: goto label_3ec454;
        case 0x3ec48cu: goto label_3ec48c;
        case 0x3ec498u: goto label_3ec498;
        case 0x3ec4a8u: goto label_3ec4a8;
        case 0x3ec4b0u: goto label_3ec4b0;
        case 0x3ec4c4u: goto label_3ec4c4;
        case 0x3ec4d0u: goto label_3ec4d0;
        case 0x3ec4dcu: goto label_3ec4dc;
        case 0x3ec570u: goto label_3ec570;
        case 0x3ec580u: goto label_3ec580;
        case 0x3ec58cu: goto label_3ec58c;
        case 0x3ec5c4u: goto label_3ec5c4;
        case 0x3ec5f4u: goto label_3ec5f4;
        case 0x3ec67cu: goto label_3ec67c;
        case 0x3ec690u: goto label_3ec690;
        case 0x3ec784u: goto label_3ec784;
        case 0x3ec794u: goto label_3ec794;
        case 0x3ec7a4u: goto label_3ec7a4;
        case 0x3ec7c0u: goto label_3ec7c0;
        case 0x3ec7d8u: goto label_3ec7d8;
        case 0x3ec7e8u: goto label_3ec7e8;
        case 0x3ec7f0u: goto label_3ec7f0;
        case 0x3ec804u: goto label_3ec804;
        case 0x3ec810u: goto label_3ec810;
        case 0x3ec81cu: goto label_3ec81c;
        case 0x3ec938u: goto label_3ec938;
        case 0x3ec954u: goto label_3ec954;
        case 0x3ec95cu: goto label_3ec95c;
        case 0x3ec970u: goto label_3ec970;
        default: break;
    }

    ctx->pc = 0x3ec2d0u;

    // 0x3ec2d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3ec2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3ec2d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ec2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3ec2d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ec2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3ec2dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ec2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ec2e0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ec2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3ec2e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ec2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ec2e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ec2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ec2ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ec2ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec2f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ec2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ec2f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ec2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ec2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ec2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ec2fc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x3ec2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3ec300: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3ec304: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3ec304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ec308: 0x24450470  addiu       $a1, $v0, 0x470
    ctx->pc = 0x3ec308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x3ec30c: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x3EC30Cu;
    SET_GPR_U32(ctx, 31, 0x3EC314u);
    ctx->pc = 0x3EC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC30Cu;
    // 0x3ec310: 0x244605b0  addiu       $a2, $v0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x3EC30Cu, 0x3EC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC314u;
label_3ec314:
    // 0x3ec314: 0x92830821  lbu         $v1, 0x821($s4)
    ctx->pc = 0x3ec314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x3ec318: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x3ec318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ec31c: 0x1020019a  beqz        $at, . + 4 + (0x19A << 2)
    ctx->pc = 0x3EC31Cu;
    {
        const bool branch_taken_0x3ec31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC31Cu;
        // 0x3ec320: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec31c) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC324u;
    // 0x3ec324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ec324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ec328: 0x24844eb0  addiu       $a0, $a0, 0x4EB0
    ctx->pc = 0x3ec328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20144));
    // 0x3ec32c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ec32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ec330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ec330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ec334: 0x600008  jr          $v1
    ctx->pc = 0x3EC334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EC340u: goto label_3ec340;
            case 0x3EC378u: goto label_3ec378;
            case 0x3EC428u: goto label_3ec428;
            case 0x3EC490u: goto label_3ec490;
            case 0x3EC608u: goto label_3ec608;
            case 0x3EC7D0u: goto label_3ec7d0;
            case 0x3EC8C0u: goto label_3ec8c0;
            case 0x3EC960u: goto label_3ec960;
            case 0x3EC988u: goto label_3ec988;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EC33Cu;
    // 0x3ec33c: 0x0  nop
    ctx->pc = 0x3ec33cu;
    // NOP
label_3ec340:
    // 0x3ec340: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ec340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ec344: 0xa2832b3f  sb          $v1, 0x2B3F($s4)
    ctx->pc = 0x3ec344u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11071), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec348: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x3ec348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3ec34c: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ec34cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec350: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3ec350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ec354: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ec354u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec358: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec35c: 0xa68407f2  sh          $a0, 0x7F2($s4)
    ctx->pc = 0x3ec35cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ec360: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ec360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ec364: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x3ec364u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ec368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ec368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ec36c: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x3ec36cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x3ec370: 0xa2830821  sb          $v1, 0x821($s4)
    ctx->pc = 0x3ec370u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec374: 0x0  nop
    ctx->pc = 0x3ec374u;
    // NOP
label_3ec378:
    // 0x3ec378: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x3ec378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x3ec37c: 0x10600182  beqz        $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x3EC37Cu;
    {
        const bool branch_taken_0x3ec37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec37c) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC384u;
    // 0x3ec384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ec384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ec388: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3ec388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3ec38c: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ec38cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec390: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ec390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ec394: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ec394u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ec398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec39c: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ec39cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec3a0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ec3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ec3a4: 0xa68407f2  sh          $a0, 0x7F2($s4)
    ctx->pc = 0x3ec3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ec3a8: 0xa28307f5  sb          $v1, 0x7F5($s4)
    ctx->pc = 0x3ec3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec3ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ec3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec3b0: 0xc0fa2f8  jal         func_3E8BE0
    ctx->pc = 0x3EC3B0u;
    SET_GPR_U32(ctx, 31, 0x3EC3B8u);
    ctx->pc = 0x3EC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC3B0u;
    // 0x3ec3b4: 0xae8207ec  sw          $v0, 0x7EC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8BE0u, 0x3EC3B0u, 0x3EC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC3B8u;
label_3ec3b8:
    // 0x3ec3b8: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x3ec3b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3ec3bc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3ec3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3ec3c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ec3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ec3c4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec3c8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ec3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec3cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ec3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec3d0: 0xa6852b58  sh          $a1, 0x2B58($s4)
    ctx->pc = 0x3ec3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11096), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ec3d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec3d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec3d8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec3e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec3e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec3e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec3e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec3e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec3ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC3ECu;
    {
        const bool branch_taken_0x3ec3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec3ec) {
            ctx->pc = 0x3EC404u;
            goto label_3ec404;
        }
    }
    ctx->pc = 0x3EC3F4u;
    // 0x3ec3f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec3f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec3fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC3FCu;
    {
        const bool branch_taken_0x3ec3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3FCu;
        // 0x3ec400: 0xa6842b22  sh          $a0, 0x2B22($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec3fc) {
            ctx->pc = 0x3EC420u;
            goto label_3ec420;
        }
    }
    ctx->pc = 0x3EC404u;
label_3ec404:
    // 0x3ec404: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec408: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec40c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec40cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec410: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec414: 0x0  nop
    ctx->pc = 0x3ec414u;
    // NOP
    // 0x3ec418: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ec418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ec41c: 0xa6842b22  sh          $a0, 0x2B22($s4)
    ctx->pc = 0x3ec41cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 4));
label_3ec420:
    // 0x3ec420: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x3EC420u;
    {
        const bool branch_taken_0x3ec420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec420) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC428u;
label_3ec428:
    // 0x3ec428: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ec428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ec42c: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ec42cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec430: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EC430u;
    SET_GPR_U32(ctx, 31, 0x3EC438u);
    ctx->pc = 0x3EC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC430u;
    // 0x3ec434: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EC430u, 0x3EC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC438u;
label_3ec438:
    // 0x3ec438: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ec438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ec43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ec43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec440: 0xc0aacf0  jal         func_2AB3C0
    ctx->pc = 0x3EC440u;
    SET_GPR_U32(ctx, 31, 0x3EC448u);
    ctx->pc = 0x3EC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC440u;
    // 0x3ec444: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB3C0u, 0x3EC440u, 0x3EC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC448u;
label_3ec448:
    // 0x3ec448: 0x8e842950  lw          $a0, 0x2950($s4)
    ctx->pc = 0x3ec448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    // 0x3ec44c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EC44Cu;
    SET_GPR_U32(ctx, 31, 0x3EC454u);
    ctx->pc = 0x3EC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC44Cu;
    // 0x3ec450: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EC44Cu, 0x3EC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC454u;
label_3ec454:
    // 0x3ec454: 0xae902950  sw          $s0, 0x2950($s4)
    ctx->pc = 0x3ec454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10576), GPR_U32(ctx, 16));
    // 0x3ec458: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ec458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ec45c: 0x928308e8  lbu         $v1, 0x8E8($s4)
    ctx->pc = 0x3ec45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ec460: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x3ec460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x3ec464: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ec464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ec468: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ec468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3ec46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec470: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3ec470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ec474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec47c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ec47cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec480: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ec480u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec484: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EC484u;
    SET_GPR_U32(ctx, 31, 0x3EC48Cu);
    ctx->pc = 0x3EC488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC484u;
    // 0x3ec488: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EC484u, 0x3EC48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC48Cu;
label_3ec48c:
    // 0x3ec48c: 0x0  nop
    ctx->pc = 0x3ec48cu;
    // NOP
label_3ec490:
    // 0x3ec490: 0xc0fa318  jal         func_3E8C60
    ctx->pc = 0x3EC490u;
    SET_GPR_U32(ctx, 31, 0x3EC498u);
    ctx->pc = 0x3EC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC490u;
    // 0x3ec494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8C60u, 0x3EC490u, 0x3EC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC498u;
label_3ec498:
    // 0x3ec498: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3ec498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3ec49c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ec49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ec4a0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EC4A0u;
    SET_GPR_U32(ctx, 31, 0x3EC4A8u);
    ctx->pc = 0x3EC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4A0u;
    // 0x3ec4a4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EC4A0u, 0x3EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4A8u;
label_3ec4a8:
    // 0x3ec4a8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EC4A8u;
    SET_GPR_U32(ctx, 31, 0x3EC4B0u);
    ctx->pc = 0x3EC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4A8u;
    // 0x3ec4ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EC4A8u, 0x3EC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4B0u;
label_3ec4b0:
    // 0x3ec4b0: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x3ec4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3ec4b4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ec4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ec4b8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ec4b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ec4bc: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EC4BCu;
    SET_GPR_U32(ctx, 31, 0x3EC4C4u);
    ctx->pc = 0x3EC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4BCu;
    // 0x3ec4c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EC4BCu, 0x3EC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4C4u;
label_3ec4c4:
    // 0x3ec4c4: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x3ec4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ec4c8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3EC4C8u;
    SET_GPR_U32(ctx, 31, 0x3EC4D0u);
    ctx->pc = 0x3EC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4C8u;
    // 0x3ec4cc: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3EC4C8u, 0x3EC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4D0u;
label_3ec4d0:
    // 0x3ec4d0: 0x8e842954  lw          $a0, 0x2954($s4)
    ctx->pc = 0x3ec4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    // 0x3ec4d4: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3EC4D4u;
    SET_GPR_U32(ctx, 31, 0x3EC4DCu);
    ctx->pc = 0x3EC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4D4u;
    // 0x3ec4d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3EC4D4u, 0x3EC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4DCu;
label_3ec4dc:
    // 0x3ec4dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC4DCu;
    {
        const bool branch_taken_0x3ec4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4dc) {
            ctx->pc = 0x3EC4F0u;
            goto label_3ec4f0;
        }
    }
    ctx->pc = 0x3EC4E4u;
    // 0x3ec4e4: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ec4e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ec4e8: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3ec4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x3ec4ec: 0x0  nop
    ctx->pc = 0x3ec4ecu;
    // NOP
label_3ec4f0:
    // 0x3ec4f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC4F0u;
    {
        const bool branch_taken_0x3ec4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4f0) {
            ctx->pc = 0x3EC500u;
            goto label_3ec500;
        }
    }
    ctx->pc = 0x3EC4F8u;
    // 0x3ec4f8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ec4f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ec4fc: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x3ec4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_3ec500:
    // 0x3ec500: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3ec500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3ec504: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec508: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ec508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ec50c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec510: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ec510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec514: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ec514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec518: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec51c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec524: 0x0  nop
    ctx->pc = 0x3ec524u;
    // NOP
    // 0x3ec528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec52c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec530: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC530u;
    {
        const bool branch_taken_0x3ec530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC530u;
        // 0x3ec534: 0x86852b22  lh          $a1, 0x2B22($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec530) {
            ctx->pc = 0x3EC548u;
            goto label_3ec548;
        }
    }
    ctx->pc = 0x3EC538u;
    // 0x3ec538: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec53c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC540u;
    {
        const bool branch_taken_0x3ec540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec540) {
            ctx->pc = 0x3EC560u;
            goto label_3ec560;
        }
    }
    ctx->pc = 0x3EC548u;
label_3ec548:
    // 0x3ec548: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec54c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec550: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec554: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ec554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ec558: 0x0  nop
    ctx->pc = 0x3ec558u;
    // NOP
    // 0x3ec55c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ec55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ec560:
    // 0x3ec560: 0x14a40019  bne         $a1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3EC560u;
    {
        const bool branch_taken_0x3ec560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ec560) {
            ctx->pc = 0x3EC5C8u;
            goto label_3ec5c8;
        }
    }
    ctx->pc = 0x3EC568u;
    // 0x3ec568: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EC568u;
    SET_GPR_U32(ctx, 31, 0x3EC570u);
    ctx->pc = 0x3EC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC568u;
    // 0x3ec56c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EC568u, 0x3EC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC570u;
label_3ec570:
    // 0x3ec570: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ec570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ec574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ec574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec578: 0xc0aad00  jal         func_2AB400
    ctx->pc = 0x3EC578u;
    SET_GPR_U32(ctx, 31, 0x3EC580u);
    ctx->pc = 0x3EC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC578u;
    // 0x3ec57c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB400u, 0x3EC578u, 0x3EC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC580u;
label_3ec580:
    // 0x3ec580: 0x8e842954  lw          $a0, 0x2954($s4)
    ctx->pc = 0x3ec580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    // 0x3ec584: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EC584u;
    SET_GPR_U32(ctx, 31, 0x3EC58Cu);
    ctx->pc = 0x3EC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC584u;
    // 0x3ec588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EC584u, 0x3EC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC58Cu;
label_3ec58c:
    // 0x3ec58c: 0xae902954  sw          $s0, 0x2954($s4)
    ctx->pc = 0x3ec58cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10580), GPR_U32(ctx, 16));
    // 0x3ec590: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ec590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ec594: 0x928308e8  lbu         $v1, 0x8E8($s4)
    ctx->pc = 0x3ec594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ec598: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x3ec59c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ec59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ec5a0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ec5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3ec5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5a8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3ec5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ec5ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec5b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ec5b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ec5b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EC5BCu;
    SET_GPR_U32(ctx, 31, 0x3EC5C4u);
    ctx->pc = 0x3EC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC5BCu;
    // 0x3ec5c0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EC5BCu, 0x3EC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC5C4u;
label_3ec5c4:
    // 0x3ec5c4: 0x0  nop
    ctx->pc = 0x3ec5c4u;
    // NOP
label_3ec5c8:
    // 0x3ec5c8: 0x86832b22  lh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec5c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11042)));
    // 0x3ec5cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC5CCu;
    {
        const bool branch_taken_0x3ec5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec5cc) {
            ctx->pc = 0x3EC5E0u;
            goto label_3ec5e0;
        }
    }
    ctx->pc = 0x3EC5D4u;
    // 0x3ec5d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ec5d8: 0xa6832b22  sh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec5dc: 0x0  nop
    ctx->pc = 0x3ec5dcu;
    // NOP
label_3ec5e0:
    // 0x3ec5e0: 0x86832b22  lh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11042)));
    // 0x3ec5e4: 0x1c6000e8  bgtz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x3EC5E4u;
    {
        const bool branch_taken_0x3ec5e4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ec5e4) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC5ECu;
    // 0x3ec5ec: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3EC5ECu;
    SET_GPR_U32(ctx, 31, 0x3EC5F4u);
    ctx->pc = 0x3EC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC5ECu;
    // 0x3ec5f0: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3EC5ECu, 0x3EC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC5F4u;
label_3ec5f4:
    // 0x3ec5f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3ec5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec5f8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3ec5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3ec5fc: 0xa2840821  sb          $a0, 0x821($s4)
    ctx->pc = 0x3ec5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ec600: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x3EC600u;
    {
        const bool branch_taken_0x3ec600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC600u;
        // 0x3ec604: 0xa6832b20  sh          $v1, 0x2B20($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 11040), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec600) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC608u;
label_3ec608:
    // 0x3ec608: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ec608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ec60c: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ec60cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec610: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec614: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec618: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3ec61c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ec61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ec620: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ec620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec624: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ec624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec628: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ec628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec630: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec634: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec638: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec63c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC63Cu;
    {
        const bool branch_taken_0x3ec63c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec63c) {
            ctx->pc = 0x3EC654u;
            goto label_3ec654;
        }
    }
    ctx->pc = 0x3EC644u;
    // 0x3ec644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec648: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ec648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ec64c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC64Cu;
    {
        const bool branch_taken_0x3ec64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC64Cu;
        // 0x3ec650: 0xa6832b22  sh          $v1, 0x2B22($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec64c) {
            ctx->pc = 0x3EC670u;
            goto label_3ec670;
        }
    }
    ctx->pc = 0x3EC654u;
label_3ec654:
    // 0x3ec654: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ec658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec65c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec65cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec660: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ec660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ec664: 0x0  nop
    ctx->pc = 0x3ec664u;
    // NOP
    // 0x3ec668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec66c: 0xa6832b22  sh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec66cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 3));
label_3ec670:
    // 0x3ec670: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3ec670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3ec674: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3EC674u;
    SET_GPR_U32(ctx, 31, 0x3EC67Cu);
    ctx->pc = 0x3EC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC674u;
    // 0x3ec678: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3EC674u, 0x3EC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC67Cu;
label_3ec67c:
    // 0x3ec67c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ec67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec680: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x3ec680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x3ec684: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x3ec684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x3ec688: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x3ec688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3ec68c: 0x0  nop
    ctx->pc = 0x3ec68cu;
    // NOP
label_3ec690:
    // 0x3ec690: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ec690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec694: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ec694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ec698: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ec698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ec69c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ec69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ec6a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ec6a4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ec6a8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec6ac: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ec6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ec6b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC6B0u;
    {
        const bool branch_taken_0x3ec6b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3EC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6B0u;
        // 0x3ec6b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6b0) {
            ctx->pc = 0x3EC6C4u;
            goto label_3ec6c4;
        }
    }
    ctx->pc = 0x3EC6B8u;
    // 0x3ec6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec6bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC6BCu;
    {
        const bool branch_taken_0x3ec6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6BCu;
        // 0x3ec6c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6bc) {
            ctx->pc = 0x3EC6DCu;
            goto label_3ec6dc;
        }
    }
    ctx->pc = 0x3EC6C4u;
label_3ec6c4:
    // 0x3ec6c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ec6c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec6cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec6d0: 0x0  nop
    ctx->pc = 0x3ec6d0u;
    // NOP
    // 0x3ec6d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ec6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ec6d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ec6d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ec6dc:
    // 0x3ec6dc: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3ec6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3ec6e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3ec6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3ec6e4: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3ec6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3ec6e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec6e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec6ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ec6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ec6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec6f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ec6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ec6f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec6fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3ec6fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec700: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3ec700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3ec704: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ec704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ec708: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ec708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec70c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ec70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ec710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ec714: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ec718: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ec718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ec71c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ec71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ec720: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC720u;
    {
        const bool branch_taken_0x3ec720 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3EC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC720u;
        // 0x3ec724: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec720) {
            ctx->pc = 0x3EC734u;
            goto label_3ec734;
        }
    }
    ctx->pc = 0x3EC728u;
    // 0x3ec728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec72c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC72Cu;
    {
        const bool branch_taken_0x3ec72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC72Cu;
        // 0x3ec730: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec72c) {
            ctx->pc = 0x3EC74Cu;
            goto label_3ec74c;
        }
    }
    ctx->pc = 0x3EC734u;
label_3ec734:
    // 0x3ec734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ec738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec740: 0x0  nop
    ctx->pc = 0x3ec740u;
    // NOP
    // 0x3ec744: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ec744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ec748: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ec748u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ec74c:
    // 0x3ec74c: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x3ec74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x3ec750: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x3ec750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x3ec754: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3ec754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3ec758: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ec758u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec75c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ec75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ec760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ec760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec764: 0x0  nop
    ctx->pc = 0x3ec764u;
    // NOP
    // 0x3ec768: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec76c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ec76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ec770: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ec770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ec774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ec778: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3ec778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3ec77c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3EC77Cu;
    SET_GPR_U32(ctx, 31, 0x3EC784u);
    ctx->pc = 0x3EC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC77Cu;
    // 0x3ec780: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3EC77Cu, 0x3EC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC784u;
label_3ec784:
    // 0x3ec784: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ec784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ec788: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3ec788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3ec78c: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x3EC78Cu;
    SET_GPR_U32(ctx, 31, 0x3EC794u);
    ctx->pc = 0x3EC790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC78Cu;
    // 0x3ec790: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x3EC78Cu, 0x3EC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC794u;
label_3ec794:
    // 0x3ec794: 0x86822b20  lh          $v0, 0x2B20($s4)
    ctx->pc = 0x3ec794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x3ec798: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ec798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec79c: 0xc0fa318  jal         func_3E8C60
    ctx->pc = 0x3EC79Cu;
    SET_GPR_U32(ctx, 31, 0x3EC7A4u);
    ctx->pc = 0x3EC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC79Cu;
    // 0x3ec7a0: 0x28520050  slti        $s2, $v0, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8C60u, 0x3EC79Cu, 0x3EC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7A4u;
label_3ec7a4:
    // 0x3ec7a4: 0x928408e8  lbu         $a0, 0x8E8($s4)
    ctx->pc = 0x3ec7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ec7a8: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x3ec7a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3ec7ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ec7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec7b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ec7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec7b4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3ec7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ec7b8: 0xc0bc8d4  jal         func_2F2350
    ctx->pc = 0x3EC7B8u;
    SET_GPR_U32(ctx, 31, 0x3EC7C0u);
    ctx->pc = 0x3EC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7B8u;
    // 0x3ec7bc: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2350u, 0x3EC7B8u, 0x3EC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7C0u;
label_3ec7c0:
    // 0x3ec7c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ec7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ec7c4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3ec7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ec7c8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3EC7C8u;
    {
        const bool branch_taken_0x3ec7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec7c8) {
            ctx->pc = 0x3EC690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec690;
        }
    }
    ctx->pc = 0x3EC7D0u;
label_3ec7d0:
    // 0x3ec7d0: 0xc0fa318  jal         func_3E8C60
    ctx->pc = 0x3EC7D0u;
    SET_GPR_U32(ctx, 31, 0x3EC7D8u);
    ctx->pc = 0x3EC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7D0u;
    // 0x3ec7d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8C60u, 0x3EC7D0u, 0x3EC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7D8u;
label_3ec7d8:
    // 0x3ec7d8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3ec7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3ec7dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ec7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ec7e0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EC7E0u;
    SET_GPR_U32(ctx, 31, 0x3EC7E8u);
    ctx->pc = 0x3EC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7E0u;
    // 0x3ec7e4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EC7E0u, 0x3EC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7E8u;
label_3ec7e8:
    // 0x3ec7e8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EC7E8u;
    SET_GPR_U32(ctx, 31, 0x3EC7F0u);
    ctx->pc = 0x3EC7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7E8u;
    // 0x3ec7ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EC7E8u, 0x3EC7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7F0u;
label_3ec7f0:
    // 0x3ec7f0: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x3ec7f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3ec7f4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ec7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ec7f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ec7f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ec7fc: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EC7FCu;
    SET_GPR_U32(ctx, 31, 0x3EC804u);
    ctx->pc = 0x3EC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7FCu;
    // 0x3ec800: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EC7FCu, 0x3EC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC804u;
label_3ec804:
    // 0x3ec804: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x3ec804u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ec808: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3EC808u;
    SET_GPR_U32(ctx, 31, 0x3EC810u);
    ctx->pc = 0x3EC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC808u;
    // 0x3ec80c: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3EC808u, 0x3EC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC810u;
label_3ec810:
    // 0x3ec810: 0x8e842954  lw          $a0, 0x2954($s4)
    ctx->pc = 0x3ec810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    // 0x3ec814: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3EC814u;
    SET_GPR_U32(ctx, 31, 0x3EC81Cu);
    ctx->pc = 0x3EC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC814u;
    // 0x3ec818: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3EC814u, 0x3EC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC81Cu;
label_3ec81c:
    // 0x3ec81c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC81Cu;
    {
        const bool branch_taken_0x3ec81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec81c) {
            ctx->pc = 0x3EC830u;
            goto label_3ec830;
        }
    }
    ctx->pc = 0x3EC824u;
    // 0x3ec824: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ec824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ec828: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3ec828u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x3ec82c: 0x0  nop
    ctx->pc = 0x3ec82cu;
    // NOP
label_3ec830:
    // 0x3ec830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC830u;
    {
        const bool branch_taken_0x3ec830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec830) {
            ctx->pc = 0x3EC840u;
            goto label_3ec840;
        }
    }
    ctx->pc = 0x3EC838u;
    // 0x3ec838: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ec838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ec83c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x3ec83cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_3ec840:
    // 0x3ec840: 0x86832b22  lh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11042)));
    // 0x3ec844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC844u;
    {
        const bool branch_taken_0x3ec844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec844) {
            ctx->pc = 0x3EC858u;
            goto label_3ec858;
        }
    }
    ctx->pc = 0x3EC84Cu;
    // 0x3ec84c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ec850: 0xa6832b22  sh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec850u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec854: 0x0  nop
    ctx->pc = 0x3ec854u;
    // NOP
label_3ec858:
    // 0x3ec858: 0x86832b22  lh          $v1, 0x2B22($s4)
    ctx->pc = 0x3ec858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11042)));
    // 0x3ec85c: 0x1c60004a  bgtz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x3EC85Cu;
    {
        const bool branch_taken_0x3ec85c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ec85c) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC864u;
    // 0x3ec864: 0x86832b20  lh          $v1, 0x2B20($s4)
    ctx->pc = 0x3ec864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x3ec868: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ec86c: 0xa6832b20  sh          $v1, 0x2B20($s4)
    ctx->pc = 0x3ec86cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11040), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec870: 0x86832b20  lh          $v1, 0x2B20($s4)
    ctx->pc = 0x3ec870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x3ec874: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3EC874u;
    {
        const bool branch_taken_0x3ec874 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ec874) {
            ctx->pc = 0x3EC8B0u;
            goto label_3ec8b0;
        }
    }
    ctx->pc = 0x3EC87Cu;
    // 0x3ec87c: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ec87cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec880: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x3ec880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3ec884: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ec884u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec888: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ec888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ec88c: 0xa68307f2  sh          $v1, 0x7F2($s4)
    ctx->pc = 0x3ec88cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec890: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ec890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec894: 0xa28407f5  sb          $a0, 0x7F5($s4)
    ctx->pc = 0x3ec894u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ec898: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ec898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ec89c: 0xae8307ec  sw          $v1, 0x7EC($s4)
    ctx->pc = 0x3ec89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 3));
    // 0x3ec8a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ec8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ec8a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3EC8A4u;
    {
        const bool branch_taken_0x3ec8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8A4u;
        // 0x3ec8a8: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8a4) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC8ACu;
    // 0x3ec8ac: 0x0  nop
    ctx->pc = 0x3ec8acu;
    // NOP
label_3ec8b0:
    // 0x3ec8b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ec8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec8b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3EC8B4u;
    {
        const bool branch_taken_0x3ec8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8B4u;
        // 0x3ec8b8: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8b4) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC8BCu;
    // 0x3ec8bc: 0x0  nop
    ctx->pc = 0x3ec8bcu;
    // NOP
label_3ec8c0:
    // 0x3ec8c0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3ec8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ec8c4: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ec8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec8c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ec8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ec8cc: 0x86842b58  lh          $a0, 0x2B58($s4)
    ctx->pc = 0x3ec8ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11096)));
    // 0x3ec8d0: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x3ec8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x3ec8d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ec8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ec8d8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ec8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ec8dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ec8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ec8e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ec8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ec8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ec8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ec8e8: 0xa6842b4e  sh          $a0, 0x2B4E($s4)
    ctx->pc = 0x3ec8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11086), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ec8ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ec8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ec8f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ec8f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ec8f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ec8f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ec8f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec8fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC8FCu;
    {
        const bool branch_taken_0x3ec8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ec8fc) {
            ctx->pc = 0x3EC914u;
            goto label_3ec914;
        }
    }
    ctx->pc = 0x3EC904u;
    // 0x3ec904: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec908: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x3ec908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x3ec90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC90Cu;
    {
        const bool branch_taken_0x3ec90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC90Cu;
        // 0x3ec910: 0x868400c2  lh          $a0, 0xC2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec90c) {
            ctx->pc = 0x3EC930u;
            goto label_3ec930;
        }
    }
    ctx->pc = 0x3EC914u;
label_3ec914:
    // 0x3ec914: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ec914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ec918: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ec91c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ec91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ec920: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x3ec920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x3ec924: 0x0  nop
    ctx->pc = 0x3ec924u;
    // NOP
    // 0x3ec928: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3ec928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3ec92c: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x3ec92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_3ec930:
    // 0x3ec930: 0xc0974b8  jal         func_25D2E0
    ctx->pc = 0x3EC930u;
    SET_GPR_U32(ctx, 31, 0x3EC938u);
    ctx->pc = 0x3EC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC930u;
    // 0x3ec934: 0x86852b58  lh          $a1, 0x2B58($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D2E0u, 0x3EC930u, 0x3EC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC938u;
label_3ec938:
    // 0x3ec938: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3ec938u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3ec93c: 0x0  nop
    ctx->pc = 0x3ec93cu;
    // NOP
    // 0x3ec940: 0x0  nop
    ctx->pc = 0x3ec940u;
    // NOP
    // 0x3ec944: 0x1012  mflo        $v0
    ctx->pc = 0x3ec944u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3ec948: 0xae822b50  sw          $v0, 0x2B50($s4)
    ctx->pc = 0x3ec948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11088), GPR_U32(ctx, 2));
    // 0x3ec94c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EC94Cu;
    SET_GPR_U32(ctx, 31, 0x3EC954u);
    ctx->pc = 0x3EC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC94Cu;
    // 0x3ec950: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EC94Cu, 0x3EC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC954u;
label_3ec954:
    // 0x3ec954: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EC954u;
    SET_GPR_U32(ctx, 31, 0x3EC95Cu);
    ctx->pc = 0x3EC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC954u;
    // 0x3ec958: 0x8e842954  lw          $a0, 0x2954($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EC954u, 0x3EC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC95Cu;
label_3ec95c:
    // 0x3ec95c: 0x0  nop
    ctx->pc = 0x3ec95cu;
    // NOP
label_3ec960:
    // 0x3ec960: 0x86852b4e  lh          $a1, 0x2B4E($s4)
    ctx->pc = 0x3ec960u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11086)));
    // 0x3ec964: 0x8e862b50  lw          $a2, 0x2B50($s4)
    ctx->pc = 0x3ec964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11088)));
    // 0x3ec968: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EC968u;
    SET_GPR_U32(ctx, 31, 0x3EC970u);
    ctx->pc = 0x3EC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC968u;
    // 0x3ec96c: 0x868400c2  lh          $a0, 0xC2($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EC968u, 0x3EC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC970u;
label_3ec970:
    // 0x3ec970: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x3ec970u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ec974: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x3ec974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x3ec978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC978u;
    {
        const bool branch_taken_0x3ec978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC978u;
        // 0x3ec97c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec978) {
            ctx->pc = 0x3EC988u;
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC980u;
    // 0x3ec980: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x3ec980u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec984: 0x0  nop
    ctx->pc = 0x3ec984u;
    // NOP
label_3ec988:
    // 0x3ec988: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ec988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ec98c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ec98cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ec990: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ec990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ec994: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ec994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ec998: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ec998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ec99c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ec99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ec9a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ec9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ec9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9A4u;
        // 0x3ec9a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC9ACu;
}
