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

// Function: sub_0039DCE0
// Address: 0x39dce0 - 0x39ded4
void sub_0039DCE0_0x39dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DCE0_0x39dce0");
#endif

    switch (ctx->pc) {
        case 0x39ddc4u: goto label_39ddc4;
        case 0x39ddccu: goto label_39ddcc;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39de18u: goto label_39de18;
        case 0x39de60u: goto label_39de60;
        case 0x39de7cu: goto label_39de7c;
        case 0x39de84u: goto label_39de84;
        case 0x39dea0u: goto label_39dea0;
        case 0x39deacu: goto label_39deac;
        default: break;
    }

    ctx->pc = 0x39dce0u;

    // 0x39dce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39dce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39dce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39dcec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39dcf0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39dcf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39dcf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39dcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dcf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39dcfc: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39DCFCu;
    {
        const bool branch_taken_0x39dcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x39dcfc) {
            ctx->pc = 0x39DD40u;
            goto label_39dd40;
        }
    }
    ctx->pc = 0x39DD04u;
    // 0x39dd04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DD04u;
    {
        const bool branch_taken_0x39dd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd04) {
            ctx->pc = 0x39DD18u;
            goto label_39dd18;
        }
    }
    ctx->pc = 0x39DD0Cu;
    // 0x39dd0c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x39DD0Cu;
    {
        const bool branch_taken_0x39dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd0c) {
            ctx->pc = 0x39DEC0u;
            goto label_39dec0;
        }
    }
    ctx->pc = 0x39DD14u;
    // 0x39dd14: 0x0  nop
    ctx->pc = 0x39dd14u;
    // NOP
label_39dd18:
    // 0x39dd18: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39dd18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dd1c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39dd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39dd20: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x39dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x39dd24: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39dd24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39dd28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39dd2c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x39dd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x39dd30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39dd34: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39dd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39dd38: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x39dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x39dd3c: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x39dd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_39dd40:
    // 0x39dd40: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x39dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x39dd44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39dd48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39dd48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39dd4c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39dd50: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x39dd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39dd54: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39dd58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39dd58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39dd5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39dd5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39dd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39dd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39dd64: 0x0  nop
    ctx->pc = 0x39dd64u;
    // NOP
    // 0x39dd68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39dd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39dd6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39dd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39dd70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39DD70u;
    {
        const bool branch_taken_0x39dd70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD70u;
        // 0x39dd74: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd70) {
            ctx->pc = 0x39DD88u;
            goto label_39dd88;
        }
    }
    ctx->pc = 0x39DD78u;
    // 0x39dd78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39dd78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39dd7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39dd7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39dd80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39DD80u;
    {
        const bool branch_taken_0x39dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd80) {
            ctx->pc = 0x39DDA0u;
            goto label_39dda0;
        }
    }
    ctx->pc = 0x39DD88u;
label_39dd88:
    // 0x39dd88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39dd88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39dd8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39dd90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39dd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39dd94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39dd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39dd98: 0x0  nop
    ctx->pc = 0x39dd98u;
    // NOP
    // 0x39dd9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39dd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39dda0:
    // 0x39dda0: 0x14a40043  bne         $a1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x39DDA0u;
    {
        const bool branch_taken_0x39dda0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39dda0) {
            ctx->pc = 0x39DEB0u;
            goto label_39deb0;
        }
    }
    ctx->pc = 0x39DDA8u;
    // 0x39dda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ddac: 0xa2022be2  sb          $v0, 0x2BE2($s0)
    ctx->pc = 0x39ddacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11234), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ddb0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x39ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39ddb4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39ddb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ddb8: 0xa6022be0  sh          $v0, 0x2BE0($s0)
    ctx->pc = 0x39ddb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11232), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ddbc: 0xc0c0860  jal         func_302180
    ctx->pc = 0x39DDBCu;
    SET_GPR_U32(ctx, 31, 0x39DDC4u);
    ctx->pc = 0x39DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDBCu;
    // 0x39ddc0: 0x8e042be4  lw          $a0, 0x2BE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x39DDBCu, 0x39DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDC4u;
label_39ddc4:
    // 0x39ddc4: 0xc0c0860  jal         func_302180
    ctx->pc = 0x39DDC4u;
    SET_GPR_U32(ctx, 31, 0x39DDCCu);
    ctx->pc = 0x39DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDC4u;
    // 0x39ddc8: 0x8e042be8  lw          $a0, 0x2BE8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x39DDC4u, 0x39DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDCCu;
label_39ddcc:
    // 0x39ddcc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x39DDCCu;
    SET_GPR_U32(ctx, 31, 0x39DDD4u);
    ctx->pc = 0x39DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDCCu;
    // 0x39ddd0: 0x8e042964  lw          $a0, 0x2964($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x39DDCCu, 0x39DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDD4u;
label_39ddd4:
    // 0x39ddd4: 0xae002be4  sw          $zero, 0x2BE4($s0)
    ctx->pc = 0x39ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11236), GPR_U32(ctx, 0));
    // 0x39ddd8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x39ddd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x39dddc: 0xae002be8  sw          $zero, 0x2BE8($s0)
    ctx->pc = 0x39dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 0));
    // 0x39dde0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x39dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39dde4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x39dde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x39dde8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39ddec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ddf0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x39ddf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ddf4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x39DDF4u;
    {
        const bool branch_taken_0x39ddf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ddf4) {
            ctx->pc = 0x39DE20u;
            goto label_39de20;
        }
    }
    ctx->pc = 0x39DDFCu;
    // 0x39ddfc: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x39ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x39de00: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39de00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39de04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39DE04u;
    {
        const bool branch_taken_0x39de04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de04) {
            ctx->pc = 0x39DE20u;
            goto label_39de20;
        }
    }
    ctx->pc = 0x39DE0Cu;
    // 0x39de0c: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x39de0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39de10: 0xc0bc78c  jal         func_2F1E30
    ctx->pc = 0x39DE10u;
    SET_GPR_U32(ctx, 31, 0x39DE18u);
    ctx->pc = 0x39DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE10u;
    // 0x39de14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E30u, 0x39DE10u, 0x39DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE18u;
label_39de18:
    // 0x39de18: 0xae022be4  sw          $v0, 0x2BE4($s0)
    ctx->pc = 0x39de18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11236), GPR_U32(ctx, 2));
    // 0x39de1c: 0x0  nop
    ctx->pc = 0x39de1cu;
    // NOP
label_39de20:
    // 0x39de20: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x39de20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x39de24: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x39de24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x39de28: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x39de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39de2c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x39de2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x39de30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39de34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39de38: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x39de38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39de3c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x39DE3Cu;
    {
        const bool branch_taken_0x39de3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de3c) {
            ctx->pc = 0x39DE68u;
            goto label_39de68;
        }
    }
    ctx->pc = 0x39DE44u;
    // 0x39de44: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x39de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x39de48: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39de48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39de4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39DE4Cu;
    {
        const bool branch_taken_0x39de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de4c) {
            ctx->pc = 0x39DE68u;
            goto label_39de68;
        }
    }
    ctx->pc = 0x39DE54u;
    // 0x39de54: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x39de54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39de58: 0xc0bc78c  jal         func_2F1E30
    ctx->pc = 0x39DE58u;
    SET_GPR_U32(ctx, 31, 0x39DE60u);
    ctx->pc = 0x39DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE58u;
    // 0x39de5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E30u, 0x39DE58u, 0x39DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE60u;
label_39de60:
    // 0x39de60: 0xae022be8  sw          $v0, 0x2BE8($s0)
    ctx->pc = 0x39de60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 2));
    // 0x39de64: 0x0  nop
    ctx->pc = 0x39de64u;
    // NOP
label_39de68:
    // 0x39de68: 0x27a4003f  addiu       $a0, $sp, 0x3F
    ctx->pc = 0x39de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
    // 0x39de6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39de6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39de70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39de70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39de74: 0xc0a2258  jal         func_288960
    ctx->pc = 0x39DE74u;
    SET_GPR_U32(ctx, 31, 0x39DE7Cu);
    ctx->pc = 0x39DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE74u;
    // 0x39de78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288960u, 0x39DE74u, 0x39DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE7Cu;
label_39de7c:
    // 0x39de7c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39DE7Cu;
    SET_GPR_U32(ctx, 31, 0x39DE84u);
    ctx->pc = 0x39DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE7Cu;
    // 0x39de80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39DE7Cu, 0x39DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE84u;
label_39de84:
    // 0x39de84: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39de84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39de88: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x39de88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x39de8c: 0x93a7003f  lbu         $a3, 0x3F($sp)
    ctx->pc = 0x39de8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x39de90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39de90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39de94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39de94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39de98: 0xc0aa314  jal         func_2A8C50
    ctx->pc = 0x39DE98u;
    SET_GPR_U32(ctx, 31, 0x39DEA0u);
    ctx->pc = 0x39DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE98u;
    // 0x39de9c: 0x250825a0  addiu       $t0, $t0, 0x25A0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8C50u, 0x39DE98u, 0x39DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEA0u;
label_39dea0:
    // 0x39dea0: 0x8e042964  lw          $a0, 0x2964($s0)
    ctx->pc = 0x39dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10596)));
    // 0x39dea4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x39DEA4u;
    SET_GPR_U32(ctx, 31, 0x39DEACu);
    ctx->pc = 0x39DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEA4u;
    // 0x39dea8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x39DEA4u, 0x39DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEACu;
label_39deac:
    // 0x39deac: 0xae112964  sw          $s1, 0x2964($s0)
    ctx->pc = 0x39deacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10596), GPR_U32(ctx, 17));
label_39deb0:
    // 0x39deb0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39deb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39deb4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39DEB4u;
    {
        const bool branch_taken_0x39deb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEB4u;
        // 0x39deb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39deb4) {
            ctx->pc = 0x39DEC0u;
            goto label_39dec0;
        }
    }
    ctx->pc = 0x39DEBCu;
    // 0x39debc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39debcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_39dec0:
    // 0x39dec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39dec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39dec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39dec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39dec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39decc: 0x3e00008  jr          $ra
    ctx->pc = 0x39DECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DECCu;
        // 0x39ded0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DED4u;
}
