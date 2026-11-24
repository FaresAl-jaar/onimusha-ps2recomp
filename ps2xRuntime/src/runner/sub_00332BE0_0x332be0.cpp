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

// Function: sub_00332BE0
// Address: 0x332be0 - 0x333690
void sub_00332BE0_0x332be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332BE0_0x332be0");
#endif

    switch (ctx->pc) {
        case 0x332bf4u: goto label_332bf4;
        case 0x332d28u: goto label_332d28;
        case 0x332d6cu: goto label_332d6c;
        case 0x332d80u: goto label_332d80;
        case 0x332db4u: goto label_332db4;
        case 0x332e24u: goto label_332e24;
        case 0x333174u: goto label_333174;
        case 0x3331b8u: goto label_3331b8;
        case 0x3331ccu: goto label_3331cc;
        case 0x3331e4u: goto label_3331e4;
        case 0x3331f8u: goto label_3331f8;
        case 0x33323cu: goto label_33323c;
        case 0x333250u: goto label_333250;
        case 0x333268u: goto label_333268;
        case 0x33329cu: goto label_33329c;
        case 0x3332e0u: goto label_3332e0;
        case 0x3332f8u: goto label_3332f8;
        case 0x333310u: goto label_333310;
        case 0x333324u: goto label_333324;
        case 0x333368u: goto label_333368;
        case 0x33337cu: goto label_33337c;
        case 0x333394u: goto label_333394;
        case 0x33342cu: goto label_33342c;
        case 0x333498u: goto label_333498;
        case 0x33364cu: goto label_33364c;
        case 0x333660u: goto label_333660;
        case 0x333670u: goto label_333670;
        case 0x333680u: goto label_333680;
        default: break;
    }

    ctx->pc = 0x332be0u;

    // 0x332be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x332be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x332bec: 0xc0a6188  jal         func_298620
    ctx->pc = 0x332BECu;
    SET_GPR_U32(ctx, 31, 0x332BF4u);
    ctx->pc = 0x332BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332BECu;
    // 0x332bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x332BECu, 0x332BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BF4u;
label_332bf4:
    // 0x332bf4: 0x92042b1c  lbu         $a0, 0x2B1C($s0)
    ctx->pc = 0x332bf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11036)));
    // 0x332bf8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x332bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x332bfc: 0x108302a0  beq         $a0, $v1, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x332BFCu;
    {
        const bool branch_taken_0x332bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332bfc) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x332C04u;
    // 0x332c04: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x332c04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x332c08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x332c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x332c0c: 0x10830224  beq         $a0, $v1, . + 4 + (0x224 << 2)
    ctx->pc = 0x332C0Cu;
    {
        const bool branch_taken_0x332c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C0Cu;
        // 0x332c10: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c0c) {
            ctx->pc = 0x3334A0u;
            goto label_3334a0;
        }
    }
    ctx->pc = 0x332C14u;
    // 0x332c14: 0x10830222  beq         $a0, $v1, . + 4 + (0x222 << 2)
    ctx->pc = 0x332C14u;
    {
        const bool branch_taken_0x332c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c14) {
            ctx->pc = 0x3334A0u;
            goto label_3334a0;
        }
    }
    ctx->pc = 0x332C1Cu;
    // 0x332c1c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x332c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x332c20: 0x1083021f  beq         $a0, $v1, . + 4 + (0x21F << 2)
    ctx->pc = 0x332C20u;
    {
        const bool branch_taken_0x332c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C20u;
        // 0x332c24: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c20) {
            ctx->pc = 0x3334A0u;
            goto label_3334a0;
        }
    }
    ctx->pc = 0x332C28u;
    // 0x332c28: 0x1083021d  beq         $a0, $v1, . + 4 + (0x21D << 2)
    ctx->pc = 0x332C28u;
    {
        const bool branch_taken_0x332c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c28) {
            ctx->pc = 0x3334A0u;
            goto label_3334a0;
        }
    }
    ctx->pc = 0x332C30u;
    // 0x332c30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x332c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x332c34: 0x10830140  beq         $a0, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x332C34u;
    {
        const bool branch_taken_0x332c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C34u;
        // 0x332c38: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c34) {
            ctx->pc = 0x333138u;
            goto label_333138;
        }
    }
    ctx->pc = 0x332C3Cu;
    // 0x332c3c: 0x1083013e  beq         $a0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x332C3Cu;
    {
        const bool branch_taken_0x332c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c3c) {
            ctx->pc = 0x333138u;
            goto label_333138;
        }
    }
    ctx->pc = 0x332C44u;
    // 0x332c44: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x332c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x332c48: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x332C48u;
    {
        const bool branch_taken_0x332c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C48u;
        // 0x332c4c: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c48) {
            ctx->pc = 0x333050u;
            goto label_333050;
        }
    }
    ctx->pc = 0x332C50u;
    // 0x332c50: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x332C50u;
    {
        const bool branch_taken_0x332c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c50) {
            ctx->pc = 0x332F68u;
            goto label_332f68;
        }
    }
    ctx->pc = 0x332C58u;
    // 0x332c58: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x332c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x332c5c: 0x108300a8  beq         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x332C5Cu;
    {
        const bool branch_taken_0x332c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C5Cu;
        // 0x332c60: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c5c) {
            ctx->pc = 0x332F00u;
            goto label_332f00;
        }
    }
    ctx->pc = 0x332C64u;
    // 0x332c64: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x332C64u;
    {
        const bool branch_taken_0x332c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c64) {
            ctx->pc = 0x332E90u;
            goto label_332e90;
        }
    }
    ctx->pc = 0x332C6Cu;
    // 0x332c6c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x332c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x332c70: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x332C70u;
    {
        const bool branch_taken_0x332c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C70u;
        // 0x332c74: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c70) {
            ctx->pc = 0x332E30u;
            goto label_332e30;
        }
    }
    ctx->pc = 0x332C78u;
    // 0x332c78: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x332C78u;
    {
        const bool branch_taken_0x332c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c78) {
            ctx->pc = 0x332E30u;
            goto label_332e30;
        }
    }
    ctx->pc = 0x332C80u;
    // 0x332c80: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x332c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x332c84: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x332C84u;
    {
        const bool branch_taken_0x332c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C84u;
        // 0x332c88: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c84) {
            ctx->pc = 0x332E30u;
            goto label_332e30;
        }
    }
    ctx->pc = 0x332C8Cu;
    // 0x332c8c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x332C8Cu;
    {
        const bool branch_taken_0x332c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332c8c) {
            ctx->pc = 0x332CA0u;
            goto label_332ca0;
        }
    }
    ctx->pc = 0x332C94u;
    // 0x332c94: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x332C94u;
    {
        const bool branch_taken_0x332c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332c94) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332C9Cu;
    // 0x332c9c: 0x0  nop
    ctx->pc = 0x332c9cu;
    // NOP
label_332ca0:
    // 0x332ca0: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x332ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x332ca4: 0x14600252  bnez        $v1, . + 4 + (0x252 << 2)
    ctx->pc = 0x332CA4u;
    {
        const bool branch_taken_0x332ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ca4) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332CACu;
    // 0x332cac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x332cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332cb0: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x332cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x332cb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x332cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x332cb8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x332cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x332cbc: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x332cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x332cc0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332cc4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x332cc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ccc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x332cccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x332cd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x332cd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332cd8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332CD8u;
    {
        const bool branch_taken_0x332cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x332CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332CD8u;
        // 0x332cdc: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332cd8) {
            ctx->pc = 0x332CF0u;
            goto label_332cf0;
        }
    }
    ctx->pc = 0x332CE0u;
    // 0x332ce0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332ce4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332ce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332CE8u;
    {
        const bool branch_taken_0x332ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332CE8u;
        // 0x332cec: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ce8) {
            ctx->pc = 0x332D0Cu;
            goto label_332d0c;
        }
    }
    ctx->pc = 0x332CF0u;
label_332cf0:
    // 0x332cf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332cf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332cf4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332cf8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332cfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332d00: 0x0  nop
    ctx->pc = 0x332d00u;
    // NOP
    // 0x332d04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332d08: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x332d08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_332d0c:
    // 0x332d0c: 0x10200238  beqz        $at, . + 4 + (0x238 << 2)
    ctx->pc = 0x332D0Cu;
    {
        const bool branch_taken_0x332d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d0c) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332D14u;
    // 0x332d14: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x332d18: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x332d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x332d1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x332d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x332d20: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x332D20u;
    SET_GPR_U32(ctx, 31, 0x332D28u);
    ctx->pc = 0x332D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D20u;
    // 0x332d24: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x332D20u, 0x332D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D28u;
label_332d28:
    // 0x332d28: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x332d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x332d2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x332d30: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x332d30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x332d34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x332d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x332d38: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x332d38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332d3c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x332d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x332d40: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x332d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x332d44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x332d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x332d48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x332d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x332d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d50: 0x0  nop
    ctx->pc = 0x332d50u;
    // NOP
    // 0x332d54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x332d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x332d58: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x332d58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x332d5c: 0x0  nop
    ctx->pc = 0x332d5cu;
    // NOP
    // 0x332d60: 0x0  nop
    ctx->pc = 0x332d60u;
    // NOP
    // 0x332d64: 0xc096784  jal         func_259E10
    ctx->pc = 0x332D64u;
    SET_GPR_U32(ctx, 31, 0x332D6Cu);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x332D64u, 0x332D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D6Cu;
label_332d6c:
    // 0x332d6c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x332d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x332d70: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x332d74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332d78: 0xc0414dc  jal         func_105370
    ctx->pc = 0x332D78u;
    SET_GPR_U32(ctx, 31, 0x332D80u);
    ctx->pc = 0x332D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D78u;
    // 0x332d7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x332D78u, 0x332D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D80u;
label_332d80:
    // 0x332d80: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x332d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332d84: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x332d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x332d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x332d90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x332d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d94: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x332d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x332d98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x332d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x332d9c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x332d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x332da0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x332da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332da4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x332da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x332da8: 0x784202f0  lq          $v0, 0x2F0($v0)
    ctx->pc = 0x332da8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x332dac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x332DACu;
    SET_GPR_U32(ctx, 31, 0x332DB4u);
    ctx->pc = 0x332DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DACu;
    // 0x332db0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x332DACu, 0x332DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DB4u;
label_332db4:
    // 0x332db4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x332db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332db8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x332db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x332dbc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x332dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x332dc0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x332dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x332dc4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x332dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x332dc8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x332dcc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x332dccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x332dd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332dd8: 0x0  nop
    ctx->pc = 0x332dd8u;
    // NOP
    // 0x332ddc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x332de0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332de4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332DE4u;
    {
        const bool branch_taken_0x332de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x332de4) {
            ctx->pc = 0x332DFCu;
            goto label_332dfc;
        }
    }
    ctx->pc = 0x332DECu;
    // 0x332dec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332df0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332DF4u;
    {
        const bool branch_taken_0x332df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DF4u;
        // 0x332df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332df4) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332DFCu;
label_332dfc:
    // 0x332dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332e00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x332e04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332e08: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332e0c: 0x0  nop
    ctx->pc = 0x332e0cu;
    // NOP
    // 0x332e10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x332e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x332e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332e18:
    // 0x332e18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x332e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x332e1c: 0xc063efc  jal         func_18FBF0
    ctx->pc = 0x332E1Cu;
    SET_GPR_U32(ctx, 31, 0x332E24u);
    ctx->pc = 0x332E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E1Cu;
    // 0x332e20: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x332E1Cu, 0x332E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E24u;
label_332e24:
    // 0x332e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332e28: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x332E28u;
    {
        const bool branch_taken_0x332e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E28u;
        // 0x332e2c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e28) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332E30u;
label_332e30:
    // 0x332e30: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x332e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x332e34: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x332e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332e38: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x332e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x332e3c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332e40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e44: 0x0  nop
    ctx->pc = 0x332e44u;
    // NOP
    // 0x332e48: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x332e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x332e4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332e50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332E50u;
    {
        const bool branch_taken_0x332e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x332e50) {
            ctx->pc = 0x332E68u;
            goto label_332e68;
        }
    }
    ctx->pc = 0x332E58u;
    // 0x332e58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332e5c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332e60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332E60u;
    {
        const bool branch_taken_0x332e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E60u;
        // 0x332e64: 0xa6042b22  sh          $a0, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e60) {
            ctx->pc = 0x332E84u;
            goto label_332e84;
        }
    }
    ctx->pc = 0x332E68u;
label_332e68:
    // 0x332e68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332e68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332e6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332e70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332e70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332e74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332e78: 0x0  nop
    ctx->pc = 0x332e78u;
    // NOP
    // 0x332e7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332e80: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x332e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_332e84:
    // 0x332e84: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x332E84u;
    {
        const bool branch_taken_0x332e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E84u;
        // 0x332e88: 0xa2002b21  sb          $zero, 0x2B21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e84) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332E8Cu;
    // 0x332e8c: 0x0  nop
    ctx->pc = 0x332e8cu;
    // NOP
label_332e90:
    // 0x332e90: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x332e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x332e94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x332e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332e98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x332e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x332e9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x332e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x332ea0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x332ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x332ea4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332ea8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x332ea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x332eac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x332eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332eb4: 0x0  nop
    ctx->pc = 0x332eb4u;
    // NOP
    // 0x332eb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x332ebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332ec0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332EC0u;
    {
        const bool branch_taken_0x332ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x332EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EC0u;
        // 0x332ec4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ec0) {
            ctx->pc = 0x332ED8u;
            goto label_332ed8;
        }
    }
    ctx->pc = 0x332EC8u;
    // 0x332ec8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332ecc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332ed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332ED0u;
    {
        const bool branch_taken_0x332ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332ED0u;
        // 0x332ed4: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ed0) {
            ctx->pc = 0x332EF4u;
            goto label_332ef4;
        }
    }
    ctx->pc = 0x332ED8u;
label_332ed8:
    // 0x332ed8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332ed8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332edc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332ee0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332ee4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332ee8: 0x0  nop
    ctx->pc = 0x332ee8u;
    // NOP
    // 0x332eec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332ef0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x332ef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_332ef4:
    // 0x332ef4: 0x146001be  bnez        $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x332EF4u;
    {
        const bool branch_taken_0x332ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ef4) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332EFCu;
    // 0x332efc: 0x0  nop
    ctx->pc = 0x332efcu;
    // NOP
label_332f00:
    // 0x332f00: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x332f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x332f04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x332f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332f08: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x332f0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x332f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x332f10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x332f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x332f14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x332f14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332f18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332f20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x332f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x332f24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x332f28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332f2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332F2Cu;
    {
        const bool branch_taken_0x332f2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x332f2c) {
            ctx->pc = 0x332F44u;
            goto label_332f44;
        }
    }
    ctx->pc = 0x332F34u;
    // 0x332f34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332f38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332F3Cu;
    {
        const bool branch_taken_0x332f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F3Cu;
        // 0x332f40: 0xa6042b22  sh          $a0, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f3c) {
            ctx->pc = 0x332F60u;
            goto label_332f60;
        }
    }
    ctx->pc = 0x332F44u;
label_332f44:
    // 0x332f44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332f48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332f4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332f50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332f54: 0x0  nop
    ctx->pc = 0x332f54u;
    // NOP
    // 0x332f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332f5c: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x332f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_332f60:
    // 0x332f60: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x332F60u;
    {
        const bool branch_taken_0x332f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F60u;
        // 0x332f64: 0xa2002b21  sb          $zero, 0x2B21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f60) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332F68u;
label_332f68:
    // 0x332f68: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x332f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x332f6c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x332f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x332f70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x332f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x332f74: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x332f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x332f78: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x332f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x332f7c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332f80: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x332f80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x332f84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x332f84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332f8c: 0x0  nop
    ctx->pc = 0x332f8cu;
    // NOP
    // 0x332f90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x332f94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x332f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x332f98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x332F98u;
    {
        const bool branch_taken_0x332f98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x332F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F98u;
        // 0x332f9c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f98) {
            ctx->pc = 0x332FB0u;
            goto label_332fb0;
        }
    }
    ctx->pc = 0x332FA0u;
    // 0x332fa0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332fa4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332fa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332FA8u;
    {
        const bool branch_taken_0x332fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332FA8u;
        // 0x332fac: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fa8) {
            ctx->pc = 0x332FCCu;
            goto label_332fcc;
        }
    }
    ctx->pc = 0x332FB0u;
label_332fb0:
    // 0x332fb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x332fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332fb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332fb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x332fbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x332fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x332fc0: 0x0  nop
    ctx->pc = 0x332fc0u;
    // NOP
    // 0x332fc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332fc8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x332fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_332fcc:
    // 0x332fcc: 0x14600188  bnez        $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x332FCCu;
    {
        const bool branch_taken_0x332fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332fcc) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x332FD4u;
    // 0x332fd4: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x332fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x332fd8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x332fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x332fdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x332fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332fe0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x332fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x332fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332fe8: 0x0  nop
    ctx->pc = 0x332fe8u;
    // NOP
    // 0x332fec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x332fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x332ff0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x332ff4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x332ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ffc: 0x0  nop
    ctx->pc = 0x332ffcu;
    // NOP
    // 0x333000: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x333004u;
    {
        const bool branch_taken_0x333004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333004) {
            ctx->pc = 0x33301Cu;
            goto label_33301c;
        }
    }
    ctx->pc = 0x33300Cu;
    // 0x33300c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33300cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333010: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x333014u;
    {
        const bool branch_taken_0x333014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333014u;
        // 0x333018: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333014) {
            ctx->pc = 0x333038u;
            goto label_333038;
        }
    }
    ctx->pc = 0x33301Cu;
label_33301c:
    // 0x33301c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33301cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x333020: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x333024: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333028: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33302c: 0x0  nop
    ctx->pc = 0x33302cu;
    // NOP
    // 0x333030: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x333030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333034: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x333034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_333038:
    // 0x333038: 0x1020016d  beqz        $at, . + 4 + (0x16D << 2)
    ctx->pc = 0x333038u;
    {
        const bool branch_taken_0x333038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333038u;
        // 0x33303c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333038) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x333040u;
    // 0x333040: 0xa2032b21  sb          $v1, 0x2B21($s0)
    ctx->pc = 0x333040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x333044: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x333044u;
    {
        const bool branch_taken_0x333044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333044u;
        // 0x333048: 0xa6032b22  sh          $v1, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333044) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x33304Cu;
    // 0x33304c: 0x0  nop
    ctx->pc = 0x33304cu;
    // NOP
label_333050:
    // 0x333050: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x333050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x333054: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x333054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x333058: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33305c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x33305cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x333060: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x333060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x333064: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x333064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x333068: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x333068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x33306c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33306cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x333070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333074: 0x0  nop
    ctx->pc = 0x333074u;
    // NOP
    // 0x333078: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33307c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33307cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333080: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x333080u;
    {
        const bool branch_taken_0x333080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333080u;
        // 0x333084: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333080) {
            ctx->pc = 0x333098u;
            goto label_333098;
        }
    }
    ctx->pc = 0x333088u;
    // 0x333088: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33308c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33308cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x333090u;
    {
        const bool branch_taken_0x333090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333090u;
        // 0x333094: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333090) {
            ctx->pc = 0x3330B4u;
            goto label_3330b4;
        }
    }
    ctx->pc = 0x333098u;
label_333098:
    // 0x333098: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33309c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33309cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3330a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3330a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3330a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3330a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3330a8: 0x0  nop
    ctx->pc = 0x3330a8u;
    // NOP
    // 0x3330ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3330acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3330b0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3330b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3330b4:
    // 0x3330b4: 0x1460014e  bnez        $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x3330B4u;
    {
        const bool branch_taken_0x3330b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3330b4) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x3330BCu;
    // 0x3330bc: 0x3c04435c  lui         $a0, 0x435C
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17244 << 16));
    // 0x3330c0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3330c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3330c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3330c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3330c8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3330c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3330cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3330ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3330d0: 0x0  nop
    ctx->pc = 0x3330d0u;
    // NOP
    // 0x3330d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3330d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3330d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3330d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3330dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3330dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3330e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3330e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3330e4: 0x0  nop
    ctx->pc = 0x3330e4u;
    // NOP
    // 0x3330e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3330e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3330ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3330ECu;
    {
        const bool branch_taken_0x3330ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3330ec) {
            ctx->pc = 0x333104u;
            goto label_333104;
        }
    }
    ctx->pc = 0x3330F4u;
    // 0x3330f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3330f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3330f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3330f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3330fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3330FCu;
    {
        const bool branch_taken_0x3330fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330FCu;
        // 0x333100: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330fc) {
            ctx->pc = 0x333120u;
            goto label_333120;
        }
    }
    ctx->pc = 0x333104u;
label_333104:
    // 0x333104: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x333108: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33310c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33310cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333110: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333114: 0x0  nop
    ctx->pc = 0x333114u;
    // NOP
    // 0x333118: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x333118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33311c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x33311cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_333120:
    // 0x333120: 0x10200133  beqz        $at, . + 4 + (0x133 << 2)
    ctx->pc = 0x333120u;
    {
        const bool branch_taken_0x333120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x333124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333120u;
        // 0x333124: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333120) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x333128u;
    // 0x333128: 0xa2032b21  sb          $v1, 0x2B21($s0)
    ctx->pc = 0x333128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x33312c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x33312Cu;
    {
        const bool branch_taken_0x33312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33312Cu;
        // 0x333130: 0xa6032b22  sh          $v1, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33312c) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x333134u;
    // 0x333134: 0x0  nop
    ctx->pc = 0x333134u;
    // NOP
label_333138:
    // 0x333138: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x333138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x33313c: 0x146000d8  bnez        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x33313Cu;
    {
        const bool branch_taken_0x33313c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33313c) {
            ctx->pc = 0x3334A0u;
            goto label_3334a0;
        }
    }
    ctx->pc = 0x333144u;
    // 0x333144: 0x92032b20  lbu         $v1, 0x2B20($s0)
    ctx->pc = 0x333144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x333148: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x333148u;
    {
        const bool branch_taken_0x333148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333148u;
        // 0x33314c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333148) {
            ctx->pc = 0x333288u;
            goto label_333288;
        }
    }
    ctx->pc = 0x333150u;
    // 0x333150: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333150u;
    {
        const bool branch_taken_0x333150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333150) {
            ctx->pc = 0x333160u;
            goto label_333160;
        }
    }
    ctx->pc = 0x333158u;
    // 0x333158: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x333158u;
    {
        const bool branch_taken_0x333158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333158) {
            ctx->pc = 0x3333C0u;
            goto label_3333c0;
        }
    }
    ctx->pc = 0x333160u;
label_333160:
    // 0x333160: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x333160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x333164: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x333164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x333168: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x333168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33316c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x33316Cu;
    SET_GPR_U32(ctx, 31, 0x333174u);
    ctx->pc = 0x333170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33316Cu;
    // 0x333170: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x33316Cu, 0x333174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333174u;
label_333174:
    // 0x333174: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x333174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x333178: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x333178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33317c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x33317cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x333180: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x333180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x333184: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x333184u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333188: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x333188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x33318c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x33318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x333190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x333190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333194: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x333198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33319c: 0x0  nop
    ctx->pc = 0x33319cu;
    // NOP
    // 0x3331a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3331a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3331a4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3331a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3331a8: 0x0  nop
    ctx->pc = 0x3331a8u;
    // NOP
    // 0x3331ac: 0x0  nop
    ctx->pc = 0x3331acu;
    // NOP
    // 0x3331b0: 0xc096784  jal         func_259E10
    ctx->pc = 0x3331B0u;
    SET_GPR_U32(ctx, 31, 0x3331B8u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3331B0u, 0x3331B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331B8u;
label_3331b8:
    // 0x3331b8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3331b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3331bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3331bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3331c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3331c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3331c4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3331C4u;
    SET_GPR_U32(ctx, 31, 0x3331CCu);
    ctx->pc = 0x3331C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331C4u;
    // 0x3331c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3331C4u, 0x3331CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331CCu;
label_3331cc:
    // 0x3331cc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3331d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3331d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3331d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3331d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331d8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3331dc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3331DCu;
    SET_GPR_U32(ctx, 31, 0x3331E4u);
    ctx->pc = 0x3331E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331DCu;
    // 0x3331e0: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3331DCu, 0x3331E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331E4u;
label_3331e4:
    // 0x3331e4: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3331e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3331e8: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x3331e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x3331ec: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3331ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3331f0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3331F0u;
    SET_GPR_U32(ctx, 31, 0x3331F8u);
    ctx->pc = 0x3331F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331F0u;
    // 0x3331f4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3331F0u, 0x3331F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331F8u;
label_3331f8:
    // 0x3331f8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3331f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3331fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3331fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333200: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x333200u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x333204: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x333204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x333208: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x333208u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33320c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x33320cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x333210: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x333210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x333214: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x333214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333218: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33321c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33321cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333220: 0x0  nop
    ctx->pc = 0x333220u;
    // NOP
    // 0x333224: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x333224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x333228: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x333228u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33322c: 0x0  nop
    ctx->pc = 0x33322cu;
    // NOP
    // 0x333230: 0x0  nop
    ctx->pc = 0x333230u;
    // NOP
    // 0x333234: 0xc096784  jal         func_259E10
    ctx->pc = 0x333234u;
    SET_GPR_U32(ctx, 31, 0x33323Cu);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x333234u, 0x33323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33323Cu;
label_33323c:
    // 0x33323c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x333240: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333244: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x333248: 0xc0414dc  jal         func_105370
    ctx->pc = 0x333248u;
    SET_GPR_U32(ctx, 31, 0x333250u);
    ctx->pc = 0x33324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333248u;
    // 0x33324c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x333248u, 0x333250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333250u;
label_333250:
    // 0x333250: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x333250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x333254: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x333254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333258: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x333258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33325c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x333260: 0xc0414ca  jal         func_105328
    ctx->pc = 0x333260u;
    SET_GPR_U32(ctx, 31, 0x333268u);
    ctx->pc = 0x333264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333260u;
    // 0x333264: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333260u, 0x333268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333268u;
label_333268:
    // 0x333268: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x333268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33326c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x333270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333274: 0x0  nop
    ctx->pc = 0x333274u;
    // NOP
    // 0x333278: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x333278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33327c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x33327Cu;
    {
        const bool branch_taken_0x33327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33327Cu;
        // 0x333280: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33327c) {
            ctx->pc = 0x3333C0u;
            goto label_3333c0;
        }
    }
    ctx->pc = 0x333284u;
    // 0x333284: 0x0  nop
    ctx->pc = 0x333284u;
    // NOP
label_333288:
    // 0x333288: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x333288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x33328c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x333290: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x333290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x333294: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x333294u;
    SET_GPR_U32(ctx, 31, 0x33329Cu);
    ctx->pc = 0x333298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333294u;
    // 0x333298: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x333294u, 0x33329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33329Cu;
label_33329c:
    // 0x33329c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x33329cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3332a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3332a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3332a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3332a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3332a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3332a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3332ac: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3332acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3332b0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3332b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3332b4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3332b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3332b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3332b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3332bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3332bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3332c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3332c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3332c4: 0x0  nop
    ctx->pc = 0x3332c4u;
    // NOP
    // 0x3332c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3332c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3332cc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3332ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3332d0: 0x0  nop
    ctx->pc = 0x3332d0u;
    // NOP
    // 0x3332d4: 0x0  nop
    ctx->pc = 0x3332d4u;
    // NOP
    // 0x3332d8: 0xc096784  jal         func_259E10
    ctx->pc = 0x3332D8u;
    SET_GPR_U32(ctx, 31, 0x3332E0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3332D8u, 0x3332E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332E0u;
label_3332e0:
    // 0x3332e0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3332e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x3332e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3332e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3332e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3332e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3332ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3332ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3332f0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3332F0u;
    SET_GPR_U32(ctx, 31, 0x3332F8u);
    ctx->pc = 0x3332F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332F0u;
    // 0x3332f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3332F0u, 0x3332F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332F8u;
label_3332f8:
    // 0x3332f8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3332f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3332fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3332fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x333300: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x333300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333304: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x333304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x333308: 0xc0414ca  jal         func_105328
    ctx->pc = 0x333308u;
    SET_GPR_U32(ctx, 31, 0x333310u);
    ctx->pc = 0x33330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333308u;
    // 0x33330c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333308u, 0x333310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333310u;
label_333310:
    // 0x333310: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x333310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x333314: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x333314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x333318: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x333318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33331c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x33331Cu;
    SET_GPR_U32(ctx, 31, 0x333324u);
    ctx->pc = 0x333320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33331Cu;
    // 0x333320: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x33331Cu, 0x333324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333324u;
label_333324:
    // 0x333324: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x333324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x333328: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x333328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33332c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x33332cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x333330: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x333330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x333334: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x333334u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333338: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x333338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x33333c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x33333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x333340: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x333340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333344: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x333348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33334c: 0x0  nop
    ctx->pc = 0x33334cu;
    // NOP
    // 0x333350: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x333350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x333354: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x333354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x333358: 0x0  nop
    ctx->pc = 0x333358u;
    // NOP
    // 0x33335c: 0x0  nop
    ctx->pc = 0x33335cu;
    // NOP
    // 0x333360: 0xc096784  jal         func_259E10
    ctx->pc = 0x333360u;
    SET_GPR_U32(ctx, 31, 0x333368u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x333360u, 0x333368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333368u;
label_333368:
    // 0x333368: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x333368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x33336c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333370: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x333374: 0xc0414dc  jal         func_105370
    ctx->pc = 0x333374u;
    SET_GPR_U32(ctx, 31, 0x33337Cu);
    ctx->pc = 0x333378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333374u;
    // 0x333378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x333374u, 0x33337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33337Cu;
label_33337c:
    // 0x33337c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x333380: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x333380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333384: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x333384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333388: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x333388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33338c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x33338Cu;
    SET_GPR_U32(ctx, 31, 0x333394u);
    ctx->pc = 0x333390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33338Cu;
    // 0x333390: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x33338Cu, 0x333394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333394u;
label_333394:
    // 0x333394: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x333394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x333398: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x333398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33339c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x33339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3333a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3333a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3333a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3333a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3333a8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3333a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3333ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3333acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3333b0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3333b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3333b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3333b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3333b8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3333b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3333bc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3333bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3333c0:
    // 0x3333c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3333c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3333c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3333c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3333c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3333c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3333cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3333ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3333d0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3333d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3333d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3333d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3333d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3333d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3333dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3333dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3333e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3333e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3333e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3333e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3333e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3333e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3333ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3333ECu;
    {
        const bool branch_taken_0x3333ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3333ec) {
            ctx->pc = 0x333404u;
            goto label_333404;
        }
    }
    ctx->pc = 0x3333F4u;
    // 0x3333f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3333f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3333f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3333f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3333fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3333FCu;
    {
        const bool branch_taken_0x3333fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333FCu;
        // 0x333400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333fc) {
            ctx->pc = 0x333420u;
            goto label_333420;
        }
    }
    ctx->pc = 0x333404u;
label_333404:
    // 0x333404: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x333408: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33340c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33340cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333410: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333414: 0x0  nop
    ctx->pc = 0x333414u;
    // NOP
    // 0x333418: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33341c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333420:
    // 0x333420: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x333420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333424: 0xc063efc  jal         func_18FBF0
    ctx->pc = 0x333424u;
    SET_GPR_U32(ctx, 31, 0x33342Cu);
    ctx->pc = 0x333428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333424u;
    // 0x333428: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x333424u, 0x33342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33342Cu;
label_33342c:
    // 0x33342c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x333430: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x333430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x333434: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x333434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x333438: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x333438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33343c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x333440: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x333444: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x333444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x333448: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33344c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33344cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333450: 0x0  nop
    ctx->pc = 0x333450u;
    // NOP
    // 0x333454: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x333458: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33345c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33345Cu;
    {
        const bool branch_taken_0x33345c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33345c) {
            ctx->pc = 0x333474u;
            goto label_333474;
        }
    }
    ctx->pc = 0x333464u;
    // 0x333464: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333468: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33346c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33346Cu;
    {
        const bool branch_taken_0x33346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33346Cu;
        // 0x333470: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33346c) {
            ctx->pc = 0x333490u;
            goto label_333490;
        }
    }
    ctx->pc = 0x333474u;
label_333474:
    // 0x333474: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x333478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33347c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33347cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333480: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333484: 0x0  nop
    ctx->pc = 0x333484u;
    // NOP
    // 0x333488: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33348c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x33348cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_333490:
    // 0x333490: 0xc0ac8bc  jal         func_2B22F0
    ctx->pc = 0x333490u;
    SET_GPR_U32(ctx, 31, 0x333498u);
    ctx->pc = 0x2B22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22F0u, 0x333490u, 0x333498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333498u;
label_333498:
    // 0x333498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33349c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x33349cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3334a0:
    // 0x3334a0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3334a4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3334a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3334a8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3334a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3334ac: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3334acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3334b0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3334b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3334b4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3334b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3334b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3334b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3334bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3334bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3334c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3334c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3334c4: 0x0  nop
    ctx->pc = 0x3334c4u;
    // NOP
    // 0x3334c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3334c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3334cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3334ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3334d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3334D0u;
    {
        const bool branch_taken_0x3334d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3334D0u;
        // 0x3334d4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334d0) {
            ctx->pc = 0x3334E8u;
            goto label_3334e8;
        }
    }
    ctx->pc = 0x3334D8u;
    // 0x3334d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3334d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3334dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3334dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3334e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3334E0u;
    {
        const bool branch_taken_0x3334e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3334E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3334E0u;
        // 0x3334e4: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334e0) {
            ctx->pc = 0x333504u;
            goto label_333504;
        }
    }
    ctx->pc = 0x3334E8u;
label_3334e8:
    // 0x3334e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3334e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3334ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3334ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3334f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3334f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3334f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3334f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3334f8: 0x0  nop
    ctx->pc = 0x3334f8u;
    // NOP
    // 0x3334fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3334fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333500: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x333500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_333504:
    // 0x333504: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x333504u;
    {
        const bool branch_taken_0x333504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333504) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x33350Cu;
    // 0x33350c: 0x92042b20  lbu         $a0, 0x2B20($s0)
    ctx->pc = 0x33350cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x333510: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x333510u;
    {
        const bool branch_taken_0x333510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x333514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333510u;
        // 0x333514: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333510) {
            ctx->pc = 0x333590u;
            goto label_333590;
        }
    }
    ctx->pc = 0x333518u;
    // 0x333518: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333518u;
    {
        const bool branch_taken_0x333518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333518) {
            ctx->pc = 0x333528u;
            goto label_333528;
        }
    }
    ctx->pc = 0x333520u;
    // 0x333520: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x333520u;
    {
        const bool branch_taken_0x333520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333520) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x333528u;
label_333528:
    // 0x333528: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33352c: 0xa2032b21  sb          $v1, 0x2B21($s0)
    ctx->pc = 0x33352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x333530: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x333530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x333534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x333538: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33353c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33353cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x333540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x333540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333544: 0x0  nop
    ctx->pc = 0x333544u;
    // NOP
    // 0x333548: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x333548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x33354c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33354cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333550: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x333550u;
    {
        const bool branch_taken_0x333550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333550) {
            ctx->pc = 0x333568u;
            goto label_333568;
        }
    }
    ctx->pc = 0x333558u;
    // 0x333558: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33355c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33355cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x333560u;
    {
        const bool branch_taken_0x333560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333560u;
        // 0x333564: 0xa6042b22  sh          $a0, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333560) {
            ctx->pc = 0x333584u;
            goto label_333584;
        }
    }
    ctx->pc = 0x333568u;
label_333568:
    // 0x333568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33356c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x333570: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333574: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x333578: 0x0  nop
    ctx->pc = 0x333578u;
    // NOP
    // 0x33357c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333580: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x333580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_333584:
    // 0x333584: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x333584u;
    {
        const bool branch_taken_0x333584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333584) {
            ctx->pc = 0x3335F0u;
            goto label_3335f0;
        }
    }
    ctx->pc = 0x33358Cu;
    // 0x33358c: 0x0  nop
    ctx->pc = 0x33358cu;
    // NOP
label_333590:
    // 0x333590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x333590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333594: 0xa2032b21  sb          $v1, 0x2B21($s0)
    ctx->pc = 0x333594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x333598: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x333598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33359c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3335a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3335a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3335a4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3335a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3335a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3335a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3335ac: 0x0  nop
    ctx->pc = 0x3335acu;
    // NOP
    // 0x3335b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3335b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3335b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3335b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3335b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3335B8u;
    {
        const bool branch_taken_0x3335b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3335b8) {
            ctx->pc = 0x3335D0u;
            goto label_3335d0;
        }
    }
    ctx->pc = 0x3335C0u;
    // 0x3335c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3335c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3335c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3335c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3335c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3335C8u;
    {
        const bool branch_taken_0x3335c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335C8u;
        // 0x3335cc: 0xa6042b22  sh          $a0, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335c8) {
            ctx->pc = 0x3335ECu;
            goto label_3335ec;
        }
    }
    ctx->pc = 0x3335D0u;
label_3335d0:
    // 0x3335d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3335d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3335d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3335d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3335d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3335d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3335dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3335dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3335e0: 0x0  nop
    ctx->pc = 0x3335e0u;
    // NOP
    // 0x3335e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3335e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3335e8: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x3335e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_3335ec:
    // 0x3335ec: 0x0  nop
    ctx->pc = 0x3335ecu;
    // NOP
label_3335f0:
    // 0x3335f0: 0x96032b22  lhu         $v1, 0x2B22($s0)
    ctx->pc = 0x3335f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3335f4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3335F4u;
    {
        const bool branch_taken_0x3335f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335F4u;
        // 0x3335f8: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335f4) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x3335FCu;
    // 0x3335fc: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x3335fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
    // 0x333600: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333604: 0x92042b21  lbu         $a0, 0x2B21($s0)
    ctx->pc = 0x333604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x333608: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x333608u;
    {
        const bool branch_taken_0x333608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333608u;
        // 0x33360c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333608) {
            ctx->pc = 0x333678u;
            goto label_333678;
        }
    }
    ctx->pc = 0x333610u;
    // 0x333610: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x333610u;
    {
        const bool branch_taken_0x333610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333610) {
            ctx->pc = 0x333668u;
            goto label_333668;
        }
    }
    ctx->pc = 0x333618u;
    // 0x333618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33361c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33361Cu;
    {
        const bool branch_taken_0x33361c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33361c) {
            ctx->pc = 0x333658u;
            goto label_333658;
        }
    }
    ctx->pc = 0x333624u;
    // 0x333624: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333624u;
    {
        const bool branch_taken_0x333624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333624) {
            ctx->pc = 0x333638u;
            goto label_333638;
        }
    }
    ctx->pc = 0x33362Cu;
    // 0x33362c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33362Cu;
    {
        const bool branch_taken_0x33362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33362c) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x333634u;
    // 0x333634: 0x0  nop
    ctx->pc = 0x333634u;
    // NOP
label_333638:
    // 0x333638: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33363c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x333640: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x333640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x333644: 0xc0ccad8  jal         func_332B60
    ctx->pc = 0x333644u;
    SET_GPR_U32(ctx, 31, 0x33364Cu);
    ctx->pc = 0x333648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333644u;
    // 0x333648: 0x244502f0  addiu       $a1, $v0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332B60u, 0x333644u, 0x33364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33364Cu;
label_33364c:
    // 0x33364c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33364Cu;
    {
        const bool branch_taken_0x33364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33364c) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x333654u;
    // 0x333654: 0x0  nop
    ctx->pc = 0x333654u;
    // NOP
label_333658:
    // 0x333658: 0xc0cca98  jal         func_332A60
    ctx->pc = 0x333658u;
    SET_GPR_U32(ctx, 31, 0x333660u);
    ctx->pc = 0x332A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A60u, 0x333658u, 0x333660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333660u;
label_333660:
    // 0x333660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x333660u;
    {
        const bool branch_taken_0x333660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333660) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x333668u;
label_333668:
    // 0x333668: 0xc0ccab4  jal         func_332AD0
    ctx->pc = 0x333668u;
    SET_GPR_U32(ctx, 31, 0x333670u);
    ctx->pc = 0x33366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333668u;
    // 0x33366c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332AD0u, 0x333668u, 0x333670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333670u;
label_333670:
    // 0x333670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x333670u;
    {
        const bool branch_taken_0x333670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333670) {
            ctx->pc = 0x333680u;
            goto label_333680;
        }
    }
    ctx->pc = 0x333678u;
label_333678:
    // 0x333678: 0xc0ccab4  jal         func_332AD0
    ctx->pc = 0x333678u;
    SET_GPR_U32(ctx, 31, 0x333680u);
    ctx->pc = 0x33367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333678u;
    // 0x33367c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332AD0u, 0x333678u, 0x333680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333680u;
label_333680:
    // 0x333680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333688: 0x3e00008  jr          $ra
    ctx->pc = 0x333688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333688u;
        // 0x33368c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333690u;
}
