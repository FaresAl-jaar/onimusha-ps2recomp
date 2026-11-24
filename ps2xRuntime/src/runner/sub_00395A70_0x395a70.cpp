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

// Function: sub_00395A70
// Address: 0x395a70 - 0x395fc0
void sub_00395A70_0x395a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395A70_0x395a70");
#endif

    switch (ctx->pc) {
        case 0x395a98u: goto label_395a98;
        case 0x395ac0u: goto label_395ac0;
        case 0x395ac8u: goto label_395ac8;
        case 0x395ad0u: goto label_395ad0;
        case 0x395b68u: goto label_395b68;
        case 0x395b70u: goto label_395b70;
        case 0x395b98u: goto label_395b98;
        case 0x395ba0u: goto label_395ba0;
        case 0x395be8u: goto label_395be8;
        case 0x395bf0u: goto label_395bf0;
        case 0x395c08u: goto label_395c08;
        case 0x395c10u: goto label_395c10;
        case 0x395c50u: goto label_395c50;
        case 0x395e20u: goto label_395e20;
        case 0x395e28u: goto label_395e28;
        case 0x395e40u: goto label_395e40;
        case 0x395e48u: goto label_395e48;
        case 0x395e70u: goto label_395e70;
        case 0x395e78u: goto label_395e78;
        case 0x395e90u: goto label_395e90;
        case 0x395e98u: goto label_395e98;
        case 0x395eb0u: goto label_395eb0;
        case 0x395eb8u: goto label_395eb8;
        case 0x395f98u: goto label_395f98;
        default: break;
    }

    ctx->pc = 0x395a70u;

    // 0x395a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x395a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x395a74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x395a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x395a78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x395a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x395a7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x395a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x395a80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x395a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x395a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x395a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395a88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x395a88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x395a8c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x395a8cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x395a90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x395a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x395a94: 0x0  nop
    ctx->pc = 0x395a94u;
    // NOP
label_395a98:
    // 0x395a98: 0x92232b38  lbu         $v1, 0x2B38($s1)
    ctx->pc = 0x395a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11064)));
    // 0x395a9c: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x395a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x395aa0: 0x1020013d  beqz        $at, . + 4 + (0x13D << 2)
    ctx->pc = 0x395AA0u;
    {
        const bool branch_taken_0x395aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AA0u;
        // 0x395aa4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395aa0) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395AA8u;
    // 0x395aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x395aac: 0x248422f0  addiu       $a0, $a0, 0x22F0
    ctx->pc = 0x395aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8944));
    // 0x395ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x395ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x395ab4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x395ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395ab8: 0x600008  jr          $v1
    ctx->pc = 0x395AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x395AC0u: goto label_395ac0;
            case 0x395AC8u: goto label_395ac8;
            case 0x395B68u: goto label_395b68;
            case 0x395B70u: goto label_395b70;
            case 0x395B98u: goto label_395b98;
            case 0x395BA0u: goto label_395ba0;
            case 0x395E20u: goto label_395e20;
            case 0x395E28u: goto label_395e28;
            case 0x395E40u: goto label_395e40;
            case 0x395E48u: goto label_395e48;
            case 0x395E70u: goto label_395e70;
            case 0x395E78u: goto label_395e78;
            case 0x395E90u: goto label_395e90;
            case 0x395E98u: goto label_395e98;
            case 0x395EB0u: goto label_395eb0;
            case 0x395EB8u: goto label_395eb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395AB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x395AC0u;
label_395ac0:
    // 0x395ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395ac4: 0xa2222b38  sb          $v0, 0x2B38($s1)
    ctx->pc = 0x395ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 2));
label_395ac8:
    // 0x395ac8: 0xc0e5404  jal         func_395010
    ctx->pc = 0x395AC8u;
    SET_GPR_U32(ctx, 31, 0x395AD0u);
    ctx->pc = 0x395ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AC8u;
    // 0x395acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395010u, 0x395AC8u, 0x395AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AD0u;
label_395ad0:
    // 0x395ad0: 0xa6222b24  sh          $v0, 0x2B24($s1)
    ctx->pc = 0x395ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 2));
    // 0x395ad4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x395ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395ad8: 0x86242b24  lh          $a0, 0x2B24($s1)
    ctx->pc = 0x395ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11044)));
    // 0x395adc: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x395ADCu;
    {
        const bool branch_taken_0x395adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x395AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ADCu;
        // 0x395ae0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395adc) {
            ctx->pc = 0x395AF8u;
            goto label_395af8;
        }
    }
    ctx->pc = 0x395AE4u;
    // 0x395ae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395ae8: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395aec: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x395AECu;
    {
        const bool branch_taken_0x395aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AECu;
        // 0x395af0: 0xa2202b38  sb          $zero, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395aec) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395AF4u;
    // 0x395af4: 0x0  nop
    ctx->pc = 0x395af4u;
    // NOP
label_395af8:
    // 0x395af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x395af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395afc: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
    // 0x395b00: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x395b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x395b04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x395b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395b08: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x395b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x395b0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x395b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x395b10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x395b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x395b14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395b14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395b18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x395b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395b20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395b24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395b28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395b2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395B2Cu;
    {
        const bool branch_taken_0x395b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395b2c) {
            ctx->pc = 0x395B44u;
            goto label_395b44;
        }
    }
    ctx->pc = 0x395B34u;
    // 0x395b34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395b38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395B3Cu;
    {
        const bool branch_taken_0x395b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B3Cu;
        // 0x395b40: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b3c) {
            ctx->pc = 0x395B60u;
            goto label_395b60;
        }
    }
    ctx->pc = 0x395B44u;
label_395b44:
    // 0x395b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395b48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395b4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395b50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395b54: 0x0  nop
    ctx->pc = 0x395b54u;
    // NOP
    // 0x395b58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395b5c: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x395b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_395b60:
    // 0x395b60: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x395B60u;
    {
        const bool branch_taken_0x395b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395b60) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395B68u;
label_395b68:
    // 0x395b68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x395b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x395b6c: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395b70:
    // 0x395b70: 0x86232b34  lh          $v1, 0x2B34($s1)
    ctx->pc = 0x395b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11060)));
    // 0x395b74: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x395B74u;
    {
        const bool branch_taken_0x395b74 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x395B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B74u;
        // 0x395b78: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b74) {
            ctx->pc = 0x395B88u;
            goto label_395b88;
        }
    }
    ctx->pc = 0x395B7Cu;
    // 0x395b7c: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x395B7Cu;
    {
        const bool branch_taken_0x395b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B7Cu;
        // 0x395b80: 0xa2232b38  sb          $v1, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b7c) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395B84u;
    // 0x395b84: 0x0  nop
    ctx->pc = 0x395b84u;
    // NOP
label_395b88:
    // 0x395b88: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x395b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x395b8c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395b90: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x395B90u;
    {
        const bool branch_taken_0x395b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B90u;
        // 0x395b94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b90) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395B98u;
label_395b98:
    // 0x395b98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x395b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x395b9c: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395ba0:
    // 0x395ba0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x395ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x395ba4: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x395ba4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x395ba8: 0x3c034ac7  lui         $v1, 0x4AC7
    ctx->pc = 0x395ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19143 << 16));
    // 0x395bac: 0x3463ff38  ori         $v1, $v1, 0xFF38
    ctx->pc = 0x395bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65336);
    // 0x395bb0: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x395bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x395bb4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x395bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x395bb8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x395bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x395bbc: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x395bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x395bc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x395bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x395bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x395bc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x395bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x395bcc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x395bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x395bd0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x395bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395bd4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x395BD4u;
    {
        const bool branch_taken_0x395bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD4u;
        // 0x395bd8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bd4) {
            ctx->pc = 0x395BF8u;
            goto label_395bf8;
        }
    }
    ctx->pc = 0x395BDCu;
    // 0x395bdc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x395bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x395be0: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x395BE0u;
    SET_GPR_U32(ctx, 31, 0x395BE8u);
    ctx->pc = 0x395BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395BE0u;
    // 0x395be4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x395BE0u, 0x395BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395BE8u;
label_395be8:
    // 0x395be8: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x395BE8u;
    SET_GPR_U32(ctx, 31, 0x395BF0u);
    ctx->pc = 0x395BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395BE8u;
    // 0x395bec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x395BE8u, 0x395BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395BF0u;
label_395bf0:
    // 0x395bf0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x395bf0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x395bf4: 0x0  nop
    ctx->pc = 0x395bf4u;
    // NOP
label_395bf8:
    // 0x395bf8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x395BF8u;
    {
        const bool branch_taken_0x395bf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BF8u;
        // 0x395bfc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bf8) {
            ctx->pc = 0x395C18u;
            goto label_395c18;
        }
    }
    ctx->pc = 0x395C00u;
    // 0x395c00: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x395C00u;
    SET_GPR_U32(ctx, 31, 0x395C08u);
    ctx->pc = 0x395C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C00u;
    // 0x395c04: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x395C00u, 0x395C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C08u;
label_395c08:
    // 0x395c08: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x395C08u;
    SET_GPR_U32(ctx, 31, 0x395C10u);
    ctx->pc = 0x395C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C08u;
    // 0x395c0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x395C08u, 0x395C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C10u;
label_395c10:
    // 0x395c10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x395c10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x395c14: 0x0  nop
    ctx->pc = 0x395c14u;
    // NOP
label_395c18:
    // 0x395c18: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x395c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395c1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x395C1Cu;
    {
        const bool branch_taken_0x395c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395c1c) {
            ctx->pc = 0x395C2Cu;
            goto label_395c2c;
        }
    }
    ctx->pc = 0x395C24u;
    // 0x395c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395C24u;
    {
        const bool branch_taken_0x395c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C24u;
        // 0x395c28: 0x3c0343af  lui         $v1, 0x43AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c24) {
            ctx->pc = 0x395C34u;
            goto label_395c34;
        }
    }
    ctx->pc = 0x395C2Cu;
label_395c2c:
    // 0x395c2c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x395c2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x395c30: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x395c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
label_395c34:
    // 0x395c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395c38: 0x0  nop
    ctx->pc = 0x395c38u;
    // NOP
    // 0x395c3c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x395c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395c40: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x395C40u;
    {
        const bool branch_taken_0x395c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395c40) {
            ctx->pc = 0x395D80u;
            goto label_395d80;
        }
    }
    ctx->pc = 0x395C48u;
    // 0x395c48: 0xc0c0890  jal         func_302240
    ctx->pc = 0x395C48u;
    SET_GPR_U32(ctx, 31, 0x395C50u);
    ctx->pc = 0x395C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C48u;
    // 0x395c4c: 0x8e242b20  lw          $a0, 0x2B20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x395C48u, 0x395C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C50u;
label_395c50:
    // 0x395c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395C50u;
    {
        const bool branch_taken_0x395c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395c50) {
            ctx->pc = 0x395C60u;
            goto label_395c60;
        }
    }
    ctx->pc = 0x395C58u;
    // 0x395c58: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x395C58u;
    {
        const bool branch_taken_0x395c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C58u;
        // 0x395c5c: 0xa2202b38  sb          $zero, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c58) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395C60u;
label_395c60:
    // 0x395c60: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x395c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395c64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x395c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x395c68: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x395c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x395c6c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x395c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x395c70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x395c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x395c74: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x395c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x395c78: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x395c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395c7c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x395c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x395c80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x395c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x395c84: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x395C84u;
    {
        const bool branch_taken_0x395c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C84u;
        // 0x395c88: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c84) {
            ctx->pc = 0x395D08u;
            goto label_395d08;
        }
    }
    ctx->pc = 0x395C8Cu;
    // 0x395c8c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x395c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x395c90: 0xa2232b39  sb          $v1, 0x2B39($s1)
    ctx->pc = 0x395c90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11065), (uint8_t)GPR_U32(ctx, 3));
    // 0x395c94: 0xa2242b38  sb          $a0, 0x2B38($s1)
    ctx->pc = 0x395c94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 4));
    // 0x395c98: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x395c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x395c9c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x395c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395ca0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x395ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x395ca4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x395ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x395ca8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x395ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x395cac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x395cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395cb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395cb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395cb4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395cb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395cbc: 0x0  nop
    ctx->pc = 0x395cbcu;
    // NOP
    // 0x395cc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395cc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395cc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395CC8u;
    {
        const bool branch_taken_0x395cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395cc8) {
            ctx->pc = 0x395CE0u;
            goto label_395ce0;
        }
    }
    ctx->pc = 0x395CD0u;
    // 0x395cd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395cd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395cd4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395CD8u;
    {
        const bool branch_taken_0x395cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CD8u;
        // 0x395cdc: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cd8) {
            ctx->pc = 0x395CFCu;
            goto label_395cfc;
        }
    }
    ctx->pc = 0x395CE0u;
label_395ce0:
    // 0x395ce0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395ce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395ce4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395ce8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395cec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395cf0: 0x0  nop
    ctx->pc = 0x395cf0u;
    // NOP
    // 0x395cf4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395cf8: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x395cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_395cfc:
    // 0x395cfc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x395CFCu;
    {
        const bool branch_taken_0x395cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395cfc) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395D04u;
    // 0x395d04: 0x0  nop
    ctx->pc = 0x395d04u;
    // NOP
label_395d08:
    // 0x395d08: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x395d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x395d0c: 0xa2232b39  sb          $v1, 0x2B39($s1)
    ctx->pc = 0x395d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11065), (uint8_t)GPR_U32(ctx, 3));
    // 0x395d10: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x395d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x395d14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x395d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x395d18: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x395d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x395d1c: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
    // 0x395d20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395d20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395d24: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x395d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395d28: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x395d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x395d2c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x395d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x395d30: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x395d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395d38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395d38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395d3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395d40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395d44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395D44u;
    {
        const bool branch_taken_0x395d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395d44) {
            ctx->pc = 0x395D5Cu;
            goto label_395d5c;
        }
    }
    ctx->pc = 0x395D4Cu;
    // 0x395d4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395d50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395d54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395D54u;
    {
        const bool branch_taken_0x395d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D54u;
        // 0x395d58: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d54) {
            ctx->pc = 0x395D78u;
            goto label_395d78;
        }
    }
    ctx->pc = 0x395D5Cu;
label_395d5c:
    // 0x395d5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395d5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395d60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395d64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395d64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395d68: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395d6c: 0x0  nop
    ctx->pc = 0x395d6cu;
    // NOP
    // 0x395d70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395d74: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x395d74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_395d78:
    // 0x395d78: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x395D78u;
    {
        const bool branch_taken_0x395d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395d78) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395D80u;
label_395d80:
    // 0x395d80: 0x3c034440  lui         $v1, 0x4440
    ctx->pc = 0x395d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17472 << 16));
    // 0x395d84: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x395d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x395d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395d8c: 0x0  nop
    ctx->pc = 0x395d8cu;
    // NOP
    // 0x395d90: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x395d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395d94: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x395D94u;
    {
        const bool branch_taken_0x395d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x395D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D94u;
        // 0x395d98: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d94) {
            ctx->pc = 0x395E18u;
            goto label_395e18;
        }
    }
    ctx->pc = 0x395D9Cu;
    // 0x395d9c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x395d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x395da0: 0xa2232b39  sb          $v1, 0x2B39($s1)
    ctx->pc = 0x395da0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11065), (uint8_t)GPR_U32(ctx, 3));
    // 0x395da4: 0xa2242b38  sb          $a0, 0x2B38($s1)
    ctx->pc = 0x395da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 4));
    // 0x395da8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x395da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x395dac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x395dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395db0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x395db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x395db4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x395db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x395db8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x395db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x395dbc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x395dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395dc0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395dc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395dc4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395dcc: 0x0  nop
    ctx->pc = 0x395dccu;
    // NOP
    // 0x395dd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395dd8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395DD8u;
    {
        const bool branch_taken_0x395dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395dd8) {
            ctx->pc = 0x395DF0u;
            goto label_395df0;
        }
    }
    ctx->pc = 0x395DE0u;
    // 0x395de0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395de4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395DE8u;
    {
        const bool branch_taken_0x395de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DE8u;
        // 0x395dec: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395de8) {
            ctx->pc = 0x395E0Cu;
            goto label_395e0c;
        }
    }
    ctx->pc = 0x395DF0u;
label_395df0:
    // 0x395df0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395df0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395df4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395df8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395dfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395e00: 0x0  nop
    ctx->pc = 0x395e00u;
    // NOP
    // 0x395e04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395e08: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x395e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_395e0c:
    // 0x395e0c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x395E0Cu;
    {
        const bool branch_taken_0x395e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395e0c) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E14u;
    // 0x395e14: 0x0  nop
    ctx->pc = 0x395e14u;
    // NOP
label_395e18:
    // 0x395e18: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x395E18u;
    {
        const bool branch_taken_0x395e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E18u;
        // 0x395e1c: 0xa2202b38  sb          $zero, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e18) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E20u;
label_395e20:
    // 0x395e20: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x395e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x395e24: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395e24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395e28:
    // 0x395e28: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x395e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x395e2c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395e34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x395e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x395e38: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x395E38u;
    {
        const bool branch_taken_0x395e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E38u;
        // 0x395e3c: 0xa2232b38  sb          $v1, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e38) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E40u;
label_395e40:
    // 0x395e40: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x395e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x395e44: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395e48:
    // 0x395e48: 0x86232b34  lh          $v1, 0x2B34($s1)
    ctx->pc = 0x395e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11060)));
    // 0x395e4c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x395E4Cu;
    {
        const bool branch_taken_0x395e4c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x395e4c) {
            ctx->pc = 0x395E60u;
            goto label_395e60;
        }
    }
    ctx->pc = 0x395E54u;
    // 0x395e54: 0x92232b39  lbu         $v1, 0x2B39($s1)
    ctx->pc = 0x395e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11065)));
    // 0x395e58: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x395E58u;
    {
        const bool branch_taken_0x395e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E58u;
        // 0x395e5c: 0xa2232b38  sb          $v1, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e58) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E60u;
label_395e60:
    // 0x395e60: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x395e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x395e64: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395e68: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x395E68u;
    {
        const bool branch_taken_0x395e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E68u;
        // 0x395e6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e68) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E70u;
label_395e70:
    // 0x395e70: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x395e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x395e74: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395e78:
    // 0x395e78: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x395e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x395e7c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395e80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395e84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x395E84u;
    {
        const bool branch_taken_0x395e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E84u;
        // 0x395e88: 0xa2202b38  sb          $zero, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e84) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395E8Cu;
    // 0x395e8c: 0x0  nop
    ctx->pc = 0x395e8cu;
    // NOP
label_395e90:
    // 0x395e90: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x395e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x395e94: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395e94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395e98:
    // 0x395e98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x395e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x395e9c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395ea0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395ea4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x395EA4u;
    {
        const bool branch_taken_0x395ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EA4u;
        // 0x395ea8: 0xa2202b38  sb          $zero, 0x2B38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ea4) {
            ctx->pc = 0x395F98u;
            goto label_395f98;
        }
    }
    ctx->pc = 0x395EACu;
    // 0x395eac: 0x0  nop
    ctx->pc = 0x395eacu;
    // NOP
label_395eb0:
    // 0x395eb0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x395eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x395eb4: 0xa2232b38  sb          $v1, 0x2B38($s1)
    ctx->pc = 0x395eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 3));
label_395eb8:
    // 0x395eb8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x395eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x395ebc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x395ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x395ec0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x395ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395ec4: 0xa2242b38  sb          $a0, 0x2B38($s1)
    ctx->pc = 0x395ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11064), (uint8_t)GPR_U32(ctx, 4));
    // 0x395ec8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x395ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x395ecc: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x395eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395ed0: 0x34640dcd  ori         $a0, $v1, 0xDCD
    ctx->pc = 0x395ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x395ed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x395ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x395ed8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x395ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x395edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x395edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x395ee0: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x395ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x395ee4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x395ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395ee8: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x395ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x395eec: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x395eecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x395ef0: 0x0  nop
    ctx->pc = 0x395ef0u;
    // NOP
    // 0x395ef4: 0x0  nop
    ctx->pc = 0x395ef4u;
    // NOP
    // 0x395ef8: 0x2010  mfhi        $a0
    ctx->pc = 0x395ef8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x395efc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x395efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x395f00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x395f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x395f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x395f08: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x395f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x395f0c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x395F0Cu;
    {
        const bool branch_taken_0x395f0c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x395F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F0Cu;
        // 0x395f10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f0c) {
            ctx->pc = 0x395F20u;
            goto label_395f20;
        }
    }
    ctx->pc = 0x395F14u;
    // 0x395f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395F18u;
    {
        const bool branch_taken_0x395f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F18u;
        // 0x395f1c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f18) {
            ctx->pc = 0x395F3Cu;
            goto label_395f3c;
        }
    }
    ctx->pc = 0x395F20u;
label_395f20:
    // 0x395f20: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x395f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x395f24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x395f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x395f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395f2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x395f2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395f30: 0x0  nop
    ctx->pc = 0x395f30u;
    // NOP
    // 0x395f34: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x395f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x395f38: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x395f38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_395f3c:
    // 0x395f3c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x395f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395f40: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x395f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x395f44: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x395f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x395f48: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x395f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395f4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395f54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395f54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395f58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395f60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395F60u;
    {
        const bool branch_taken_0x395f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395f60) {
            ctx->pc = 0x395F78u;
            goto label_395f78;
        }
    }
    ctx->pc = 0x395F68u;
    // 0x395f68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395f6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395f70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395F70u;
    {
        const bool branch_taken_0x395f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F70u;
        // 0x395f74: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f70) {
            ctx->pc = 0x395F94u;
            goto label_395f94;
        }
    }
    ctx->pc = 0x395F78u;
label_395f78:
    // 0x395f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395f7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395f80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395f84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395f88: 0x0  nop
    ctx->pc = 0x395f88u;
    // NOP
    // 0x395f8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395f90: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x395f90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_395f94:
    // 0x395f94: 0x0  nop
    ctx->pc = 0x395f94u;
    // NOP
label_395f98:
    // 0x395f98: 0x1600febf  bnez        $s0, . + 4 + (-0x141 << 2)
    ctx->pc = 0x395F98u;
    {
        const bool branch_taken_0x395f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x395f98) {
            ctx->pc = 0x395A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395a98;
        }
    }
    ctx->pc = 0x395FA0u;
    // 0x395fa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x395fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x395fa4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x395fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x395fa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x395fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395fac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x395facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x395fb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x395fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x395fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x395FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FB8u;
        // 0x395fbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395FC0u;
}
