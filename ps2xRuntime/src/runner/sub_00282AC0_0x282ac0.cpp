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

// Function: sub_00282AC0
// Address: 0x282ac0 - 0x282cfc
void sub_00282AC0_0x282ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282AC0_0x282ac0");
#endif

    switch (ctx->pc) {
        case 0x282af0u: goto label_282af0;
        case 0x282b68u: goto label_282b68;
        case 0x282bd4u: goto label_282bd4;
        default: break;
    }

    ctx->pc = 0x282ac0u;

    // 0x282ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282acc: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x282accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x282ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ae0: 0x87828198  lh          $v0, -0x7E68($gp)
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934936)));
    // 0x282ae4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x282ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x282ae8: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x282AE8u;
    SET_GPR_U32(ctx, 31, 0x282AF0u);
    ctx->pc = 0x282AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282AE8u;
    // 0x282aec: 0xac8007a4  sw          $zero, 0x7A4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1956), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x282AE8u, 0x282AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AF0u;
label_282af0:
    // 0x282af0: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x282af0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x282af4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282af8: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x282AF8u;
    {
        const bool branch_taken_0x282af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x282AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AF8u;
        // 0x282afc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282af8) {
            ctx->pc = 0x282CA0u;
            goto label_282ca0;
        }
    }
    ctx->pc = 0x282B00u;
    // 0x282b00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b04: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x282B04u;
    {
        const bool branch_taken_0x282b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x282B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B04u;
        // 0x282b08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b04) {
            ctx->pc = 0x282C60u;
            goto label_282c60;
        }
    }
    ctx->pc = 0x282B0Cu;
    // 0x282b0c: 0x1087003c  beq         $a0, $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x282B0Cu;
    {
        const bool branch_taken_0x282b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x282b0c) {
            ctx->pc = 0x282C00u;
            goto label_282c00;
        }
    }
    ctx->pc = 0x282B14u;
    // 0x282b14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282B14u;
    {
        const bool branch_taken_0x282b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b14) {
            ctx->pc = 0x282B28u;
            goto label_282b28;
        }
    }
    ctx->pc = 0x282B1Cu;
    // 0x282b1c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x282B1Cu;
    {
        const bool branch_taken_0x282b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b1c) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282B24u;
    // 0x282b24: 0x0  nop
    ctx->pc = 0x282b24u;
    // NOP
label_282b28:
    // 0x282b28: 0x92260839  lbu         $a2, 0x839($s1)
    ctx->pc = 0x282b28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x282b2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x282b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x282b30: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x282b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x282b34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x282b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282b38: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x282b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x282b3c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x282b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x282b40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x282b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b44: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x282b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x282b48: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x282b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x282b4c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x282b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b50: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x282b50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b54: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x282b54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x282b58: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x282b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b5c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x282b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x282b60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x282B60u;
    SET_GPR_U32(ctx, 31, 0x282B68u);
    ctx->pc = 0x282B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B60u;
    // 0x282b64: 0xa2270821  sb          $a3, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x282B60u, 0x282B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B68u;
label_282b68:
    // 0x282b68: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282b6c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x282b70: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x282b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282b74: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x282b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x282b78: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x282b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x282b7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x282b80: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282b80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282b84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282b8c: 0x0  nop
    ctx->pc = 0x282b8cu;
    // NOP
    // 0x282b90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282b98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282B98u;
    {
        const bool branch_taken_0x282b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282b98) {
            ctx->pc = 0x282BB0u;
            goto label_282bb0;
        }
    }
    ctx->pc = 0x282BA0u;
    // 0x282ba0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282ba4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282BA8u;
    {
        const bool branch_taken_0x282ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BA8u;
        // 0x282bac: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ba8) {
            ctx->pc = 0x282BCCu;
            goto label_282bcc;
        }
    }
    ctx->pc = 0x282BB0u;
label_282bb0:
    // 0x282bb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282bb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282bb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282bb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282bbc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282bc0: 0x0  nop
    ctx->pc = 0x282bc0u;
    // NOP
    // 0x282bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282bc8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282bcc:
    // 0x282bcc: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282BCCu;
    SET_GPR_U32(ctx, 31, 0x282BD4u);
    ctx->pc = 0x282BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BCCu;
    // 0x282bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282BCCu, 0x282BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BD4u;
label_282bd4:
    // 0x282bd4: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x282bd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x282bd8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x282bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x282bdc: 0x24635124  addiu       $v1, $v1, 0x5124
    ctx->pc = 0x282bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20772));
    // 0x282be0: 0x92240839  lbu         $a0, 0x839($s1)
    ctx->pc = 0x282be0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x282be4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x282be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x282be8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x282be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282bec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282bf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282bf4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x282bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282bf8: 0x2463ff68  addiu       $v1, $v1, -0x98
    ctx->pc = 0x282bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967144));
    // 0x282bfc: 0xa223083c  sb          $v1, 0x83C($s1)
    ctx->pc = 0x282bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2108), (uint8_t)GPR_U32(ctx, 3));
label_282c00:
    // 0x282c00: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x282c00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x282c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c08: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x282C08u;
    {
        const bool branch_taken_0x282c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282c08) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C10u;
    // 0x282c10: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x282c10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x282c14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282c18: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x282C18u;
    {
        const bool branch_taken_0x282c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282c18) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C20u;
    // 0x282c20: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x282c24: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x282c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282c28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x282C28u;
    {
        const bool branch_taken_0x282c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c28) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C30u;
    // 0x282c30: 0x96230786  lhu         $v1, 0x786($s1)
    ctx->pc = 0x282c30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1926)));
    // 0x282c34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282C34u;
    {
        const bool branch_taken_0x282c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C34u;
        // 0x282c38: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c34) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C3Cu;
    // 0x282c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282C3Cu;
    {
        const bool branch_taken_0x282c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C3Cu;
        // 0x282c40: 0xa62307f0  sh          $v1, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c3c) {
            ctx->pc = 0x282C50u;
            goto label_282c50;
        }
    }
    ctx->pc = 0x282C44u;
    // 0x282c44: 0x0  nop
    ctx->pc = 0x282c44u;
    // NOP
label_282c48:
    // 0x282c48: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x282c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x282c4c: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x282c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_282c50:
    // 0x282c50: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x282c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x282c54: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x282C54u;
    {
        const bool branch_taken_0x282c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C54u;
        // 0x282c58: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c54) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282C5Cu;
    // 0x282c5c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x282c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_282c60:
    // 0x282c60: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x282C60u;
    {
        const bool branch_taken_0x282c60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c60) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282C68u;
    // 0x282c68: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x282c6c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x282c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x282c70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x282C70u;
    {
        const bool branch_taken_0x282c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c70) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C78u;
    // 0x282c78: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x282c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x282c7c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x282c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282c80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C80u;
    {
        const bool branch_taken_0x282c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C80u;
        // 0x282c84: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c80) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C88u;
    // 0x282c88: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x282c88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x282c8c: 0x0  nop
    ctx->pc = 0x282c8cu;
    // NOP
label_282c90:
    // 0x282c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282c94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x282C94u;
    {
        const bool branch_taken_0x282c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C94u;
        // 0x282c98: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c94) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282C9Cu;
    // 0x282c9c: 0x0  nop
    ctx->pc = 0x282c9cu;
    // NOP
label_282ca0:
    // 0x282ca0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x282ca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282ca4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282ca8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282CA8u;
    {
        const bool branch_taken_0x282ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x282ca8) {
            ctx->pc = 0x282CC0u;
            goto label_282cc0;
        }
    }
    ctx->pc = 0x282CB0u;
    // 0x282cb0: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x282cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x282cb4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x282cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x282cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x282CB8u;
    {
        const bool branch_taken_0x282cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282cb8) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282CC0u;
label_282cc0:
    // 0x282cc0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x282cc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x282cc4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x282cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x282cc8: 0x92240839  lbu         $a0, 0x839($s1)
    ctx->pc = 0x282cc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x282ccc: 0x24635124  addiu       $v1, $v1, 0x5124
    ctx->pc = 0x282cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20772));
    // 0x282cd0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x282cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x282cd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282cd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x282cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282ce0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x282ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282ce4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x282ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_282ce8:
    // 0x282ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x282CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CF4u;
        // 0x282cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282CFCu;
}
