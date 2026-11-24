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

// Function: sub_0039AA90
// Address: 0x39aa90 - 0x39af10
void sub_0039AA90_0x39aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AA90_0x39aa90");
#endif

    switch (ctx->pc) {
        case 0x39aae0u: goto label_39aae0;
        case 0x39ab88u: goto label_39ab88;
        case 0x39ab98u: goto label_39ab98;
        case 0x39aba0u: goto label_39aba0;
        case 0x39abfcu: goto label_39abfc;
        case 0x39ac24u: goto label_39ac24;
        case 0x39ac38u: goto label_39ac38;
        case 0x39ac54u: goto label_39ac54;
        case 0x39ac80u: goto label_39ac80;
        case 0x39ac8cu: goto label_39ac8c;
        case 0x39ad60u: goto label_39ad60;
        case 0x39ae48u: goto label_39ae48;
        case 0x39ae6cu: goto label_39ae6c;
        case 0x39ae80u: goto label_39ae80;
        case 0x39ae9cu: goto label_39ae9c;
        case 0x39aec8u: goto label_39aec8;
        case 0x39aed4u: goto label_39aed4;
        case 0x39aefcu: goto label_39aefc;
        default: break;
    }

    ctx->pc = 0x39aa90u;

    // 0x39aa90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39aa94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39aa98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39aa9c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39aaa0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x39aaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x39aaa4: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39aaa8: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39aaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39aaac: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x39aaacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x39aab0: 0x10200113  beqz        $at, . + 4 + (0x113 << 2)
    ctx->pc = 0x39AAB0u;
    {
        const bool branch_taken_0x39aab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAB0u;
        // 0x39aab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aab0) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39AAB8u;
    // 0x39aab8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39aabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39aac0: 0x24a52390  addiu       $a1, $a1, 0x2390
    ctx->pc = 0x39aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9104));
    // 0x39aac4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39aac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39aacc: 0x600008  jr          $v1
    ctx->pc = 0x39AACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39AAD8u: goto label_39aad8;
            case 0x39AC00u: goto label_39ac00;
            case 0x39ACB8u: goto label_39acb8;
            case 0x39AD58u: goto label_39ad58;
            case 0x39AD88u: goto label_39ad88;
            case 0x39AE48u: goto label_39ae48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39AAD4u;
    // 0x39aad4: 0x0  nop
    ctx->pc = 0x39aad4u;
    // NOP
label_39aad8:
    // 0x39aad8: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39AAD8u;
    SET_GPR_U32(ctx, 31, 0x39AAE0u);
    ctx->pc = 0x39AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAD8u;
    // 0x39aadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39AAD8u, 0x39AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAE0u;
label_39aae0:
    // 0x39aae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39aae4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x39aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39aae8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39aae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39aaec: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39aaecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39aaf0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x39aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39aaf4: 0x92032b24  lbu         $v1, 0x2B24($s0)
    ctx->pc = 0x39aaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39aaf8: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x39aaf8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x39aafc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AAFCu;
    {
        const bool branch_taken_0x39aafc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x39AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAFCu;
        // 0x39ab00: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aafc) {
            ctx->pc = 0x39AB10u;
            goto label_39ab10;
        }
    }
    ctx->pc = 0x39AB04u;
    // 0x39ab04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39ab04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ab08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39AB08u;
    {
        const bool branch_taken_0x39ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB08u;
        // 0x39ab0c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab08) {
            ctx->pc = 0x39AB28u;
            goto label_39ab28;
        }
    }
    ctx->pc = 0x39AB10u;
label_39ab10:
    // 0x39ab10: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39ab10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39ab14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39ab14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39ab18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39ab18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ab1c: 0x0  nop
    ctx->pc = 0x39ab1cu;
    // NOP
    // 0x39ab20: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x39ab20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39ab24: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39ab24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_39ab28:
    // 0x39ab28: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39ab2c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39ab30: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39ab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39ab34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39ab38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39ab38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39ab3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39ab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ab40: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39ab40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39ab44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39ab44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39ab48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39ab48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39ab4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39AB4Cu;
    {
        const bool branch_taken_0x39ab4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ab4c) {
            ctx->pc = 0x39AB64u;
            goto label_39ab64;
        }
    }
    ctx->pc = 0x39AB54u;
    // 0x39ab54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ab54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ab58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39ab58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39ab5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39AB5Cu;
    {
        const bool branch_taken_0x39ab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB5Cu;
        // 0x39ab60: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab5c) {
            ctx->pc = 0x39AB80u;
            goto label_39ab80;
        }
    }
    ctx->pc = 0x39AB64u;
label_39ab64:
    // 0x39ab64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39ab64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39ab68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39ab6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ab6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ab70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39ab70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39ab74: 0x0  nop
    ctx->pc = 0x39ab74u;
    // NOP
    // 0x39ab78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39ab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39ab7c: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39ab7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39ab80:
    // 0x39ab80: 0xc0e688c  jal         func_39A230
    ctx->pc = 0x39AB80u;
    SET_GPR_U32(ctx, 31, 0x39AB88u);
    ctx->pc = 0x39AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB80u;
    // 0x39ab84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A230u, 0x39AB80u, 0x39AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB88u;
label_39ab88:
    // 0x39ab88: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x39ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x39ab8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39ab90: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39AB90u;
    SET_GPR_U32(ctx, 31, 0x39AB98u);
    ctx->pc = 0x39AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB90u;
    // 0x39ab94: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39AB90u, 0x39AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB98u;
label_39ab98:
    // 0x39ab98: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39AB98u;
    SET_GPR_U32(ctx, 31, 0x39ABA0u);
    ctx->pc = 0x39AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB98u;
    // 0x39ab9c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39AB98u, 0x39ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ABA0u;
label_39aba0:
    // 0x39aba0: 0xa6022b52  sh          $v0, 0x2B52($s0)
    ctx->pc = 0x39aba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11090), (uint16_t)GPR_U32(ctx, 2));
    // 0x39aba4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39aba8: 0x860c00c2  lh          $t4, 0xC2($s0)
    ctx->pc = 0x39aba8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39abac: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x39abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x39abb0: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39abb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39abb4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x39abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x39abb8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39abbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39abbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39abc0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39abc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39abc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39abc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39abc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39abc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39abcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39abccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39abd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39abd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39abd4: 0xa60c2b54  sh          $t4, 0x2B54($s0)
    ctx->pc = 0x39abd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11092), (uint16_t)GPR_U32(ctx, 12));
    // 0x39abd8: 0x86022b4e  lh          $v0, 0x2B4E($s0)
    ctx->pc = 0x39abd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39abdc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x39abdcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39abe0: 0x0  nop
    ctx->pc = 0x39abe0u;
    // NOP
    // 0x39abe4: 0x0  nop
    ctx->pc = 0x39abe4u;
    // NOP
    // 0x39abe8: 0x1012  mflo        $v0
    ctx->pc = 0x39abe8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39abec: 0xa6022b56  sh          $v0, 0x2B56($s0)
    ctx->pc = 0x39abecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11094), (uint16_t)GPR_U32(ctx, 2));
    // 0x39abf0: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x39abf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39abf4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39ABF4u;
    SET_GPR_U32(ctx, 31, 0x39ABFCu);
    ctx->pc = 0x39ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ABF4u;
    // 0x39abf8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39ABF4u, 0x39ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ABFCu;
label_39abfc:
    // 0x39abfc: 0x0  nop
    ctx->pc = 0x39abfcu;
    // NOP
label_39ac00:
    // 0x39ac00: 0x86062b4e  lh          $a2, 0x2B4E($s0)
    ctx->pc = 0x39ac00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39ac04: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AC04u;
    {
        const bool branch_taken_0x39ac04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC04u;
        // 0x39ac08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac04) {
            ctx->pc = 0x39AC18u;
            goto label_39ac18;
        }
    }
    ctx->pc = 0x39AC0Cu;
    // 0x39ac0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39ac0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ac10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39AC10u;
    {
        const bool branch_taken_0x39ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC10u;
        // 0x39ac14: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac10) {
            ctx->pc = 0x39AC28u;
            goto label_39ac28;
        }
    }
    ctx->pc = 0x39AC18u;
label_39ac18:
    // 0x39ac18: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39ac18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ac1c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x39AC1Cu;
    SET_GPR_U32(ctx, 31, 0x39AC24u);
    ctx->pc = 0x39AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC1Cu;
    // 0x39ac20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x39AC1Cu, 0x39AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC24u;
label_39ac24:
    // 0x39ac24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39ac28:
    // 0x39ac28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39ac28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39ac2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39ac30: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x39AC30u;
    SET_GPR_U32(ctx, 31, 0x39AC38u);
    ctx->pc = 0x39AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC30u;
    // 0x39ac34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x39AC30u, 0x39AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC38u;
label_39ac38:
    // 0x39ac38: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x39ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x39ac3c: 0x3c034540  lui         $v1, 0x4540
    ctx->pc = 0x39ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17728 << 16));
    // 0x39ac40: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x39ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x39ac44: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x39ac44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39ac48: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39ac48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39ac4c: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x39AC4Cu;
    SET_GPR_U32(ctx, 31, 0x39AC54u);
    ctx->pc = 0x39AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC4Cu;
    // 0x39ac50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x39AC4Cu, 0x39AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC54u;
label_39ac54:
    // 0x39ac54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ac54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39ac58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39ac58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39ac5c: 0x0  nop
    ctx->pc = 0x39ac5cu;
    // NOP
    // 0x39ac60: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x39ac60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ac64: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x39ac64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39ac68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x39ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x39ac6c: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x39ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ac70: 0x86052b52  lh          $a1, 0x2B52($s0)
    ctx->pc = 0x39ac70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11090)));
    // 0x39ac74: 0x86062b56  lh          $a2, 0x2B56($s0)
    ctx->pc = 0x39ac74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x39ac78: 0xc097498  jal         func_25D260
    ctx->pc = 0x39AC78u;
    SET_GPR_U32(ctx, 31, 0x39AC80u);
    ctx->pc = 0x39AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC78u;
    // 0x39ac7c: 0x860400c2  lh          $a0, 0xC2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x39AC78u, 0x39AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC80u;
label_39ac80:
    // 0x39ac80: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x39ac80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ac84: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39AC84u;
    SET_GPR_U32(ctx, 31, 0x39AC8Cu);
    ctx->pc = 0x39AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC84u;
    // 0x39ac88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39AC84u, 0x39AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC8Cu;
label_39ac8c:
    // 0x39ac8c: 0x86032b4c  lh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39ac8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ac90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39ac94: 0xa6032b4c  sh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ac98: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39ac98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ac9c: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39ac9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39aca0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39aca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39aca4: 0x14600096  bnez        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x39ACA4u;
    {
        const bool branch_taken_0x39aca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACA4u;
        // 0x39aca8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aca4) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39ACACu;
    // 0x39acac: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x39ACACu;
    {
        const bool branch_taken_0x39acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACACu;
        // 0x39acb0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acac) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39ACB4u;
    // 0x39acb4: 0x0  nop
    ctx->pc = 0x39acb4u;
    // NOP
label_39acb8:
    // 0x39acb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39acbc: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39acc0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x39acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x39acc4: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39acc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39acc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39accc: 0x92032b24  lbu         $v1, 0x2B24($s0)
    ctx->pc = 0x39acccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39acd0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x39acd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x39acd4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39ACD4u;
    {
        const bool branch_taken_0x39acd4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x39ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACD4u;
        // 0x39acd8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acd4) {
            ctx->pc = 0x39ACE8u;
            goto label_39ace8;
        }
    }
    ctx->pc = 0x39ACDCu;
    // 0x39acdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39acdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ace0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39ACE0u;
    {
        const bool branch_taken_0x39ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACE0u;
        // 0x39ace4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ace0) {
            ctx->pc = 0x39AD00u;
            goto label_39ad00;
        }
    }
    ctx->pc = 0x39ACE8u;
label_39ace8:
    // 0x39ace8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39ace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39acec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39acf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39acf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39acf4: 0x0  nop
    ctx->pc = 0x39acf4u;
    // NOP
    // 0x39acf8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x39acf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39acfc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39acfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_39ad00:
    // 0x39ad00: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39ad04: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39ad08: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39ad0c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39ad10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39ad10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39ad14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39ad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ad18: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39ad18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39ad1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39ad1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39ad20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39ad20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39ad24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39AD24u;
    {
        const bool branch_taken_0x39ad24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ad24) {
            ctx->pc = 0x39AD3Cu;
            goto label_39ad3c;
        }
    }
    ctx->pc = 0x39AD2Cu;
    // 0x39ad2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ad2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ad30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39ad30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39ad34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39AD34u;
    {
        const bool branch_taken_0x39ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD34u;
        // 0x39ad38: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad34) {
            ctx->pc = 0x39AD58u;
            goto label_39ad58;
        }
    }
    ctx->pc = 0x39AD3Cu;
label_39ad3c:
    // 0x39ad3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39ad3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39ad40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39ad44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ad44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ad48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39ad48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39ad4c: 0x0  nop
    ctx->pc = 0x39ad4cu;
    // NOP
    // 0x39ad50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39ad50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39ad54: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39ad54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39ad58:
    // 0x39ad58: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39AD58u;
    SET_GPR_U32(ctx, 31, 0x39AD60u);
    ctx->pc = 0x39AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD58u;
    // 0x39ad5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39AD58u, 0x39AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD60u;
label_39ad60:
    // 0x39ad60: 0x86032b4c  lh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39ad60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ad64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39ad68: 0xa6032b4c  sh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39ad68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ad6c: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39ad6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ad70: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39ad70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39ad74: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39ad74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39ad78: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x39AD78u;
    {
        const bool branch_taken_0x39ad78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD78u;
        // 0x39ad7c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad78) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39AD80u;
    // 0x39ad80: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x39AD80u;
    {
        const bool branch_taken_0x39ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD80u;
        // 0x39ad84: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad80) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39AD88u;
label_39ad88:
    // 0x39ad88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39ad8c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39ad8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ad90: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39ad94: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ad98: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x39ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39ad9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39ad9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39ada0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x39ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39ada4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x39ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x39ada8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x39ada8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39adac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39adacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39adb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39adb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39adb4: 0x0  nop
    ctx->pc = 0x39adb4u;
    // NOP
    // 0x39adb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x39adb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x39adbc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x39adbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x39adc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39adc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39adc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39ADC4u;
    {
        const bool branch_taken_0x39adc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39adc4) {
            ctx->pc = 0x39ADDCu;
            goto label_39addc;
        }
    }
    ctx->pc = 0x39ADCCu;
    // 0x39adcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39adccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39add0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39add0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39add4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39ADD4u;
    {
        const bool branch_taken_0x39add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADD4u;
        // 0x39add8: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39add4) {
            ctx->pc = 0x39ADF8u;
            goto label_39adf8;
        }
    }
    ctx->pc = 0x39ADDCu;
label_39addc:
    // 0x39addc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39addcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39ade0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39ade4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ade4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ade8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39ade8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39adec: 0x0  nop
    ctx->pc = 0x39adecu;
    // NOP
    // 0x39adf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39adf4: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39adf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39adf8:
    // 0x39adf8: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x39adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x39adfc: 0x860c2b4e  lh          $t4, 0x2B4E($s0)
    ctx->pc = 0x39adfcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39ae00: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x39ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x39ae04: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39ae08: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39ae08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39ae0c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39ae10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ae10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae14: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39ae14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39ae18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39ae18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39ae1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39ae20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39ae24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae28: 0x6c001a  div         $zero, $v1, $t4
    ctx->pc = 0x39ae28u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39ae2c: 0x0  nop
    ctx->pc = 0x39ae2cu;
    // NOP
    // 0x39ae30: 0x0  nop
    ctx->pc = 0x39ae30u;
    // NOP
    // 0x39ae34: 0x1012  mflo        $v0
    ctx->pc = 0x39ae34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39ae38: 0xa6022b56  sh          $v0, 0x2B56($s0)
    ctx->pc = 0x39ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11094), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ae3c: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x39ae3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39ae40: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39AE40u;
    SET_GPR_U32(ctx, 31, 0x39AE48u);
    ctx->pc = 0x39AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE40u;
    // 0x39ae44: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39AE40u, 0x39AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE48u;
label_39ae48:
    // 0x39ae48: 0x86062b4e  lh          $a2, 0x2B4E($s0)
    ctx->pc = 0x39ae48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39ae4c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AE4Cu;
    {
        const bool branch_taken_0x39ae4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE4Cu;
        // 0x39ae50: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae4c) {
            ctx->pc = 0x39AE60u;
            goto label_39ae60;
        }
    }
    ctx->pc = 0x39AE54u;
    // 0x39ae54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39ae54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ae58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39AE58u;
    {
        const bool branch_taken_0x39ae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE58u;
        // 0x39ae5c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae58) {
            ctx->pc = 0x39AE70u;
            goto label_39ae70;
        }
    }
    ctx->pc = 0x39AE60u;
label_39ae60:
    // 0x39ae60: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39ae60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39ae64: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x39AE64u;
    SET_GPR_U32(ctx, 31, 0x39AE6Cu);
    ctx->pc = 0x39AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE64u;
    // 0x39ae68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x39AE64u, 0x39AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE6Cu;
label_39ae6c:
    // 0x39ae6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39ae70:
    // 0x39ae70: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39ae70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39ae74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39ae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39ae78: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x39AE78u;
    SET_GPR_U32(ctx, 31, 0x39AE80u);
    ctx->pc = 0x39AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE78u;
    // 0x39ae7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x39AE78u, 0x39AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE80u;
label_39ae80:
    // 0x39ae80: 0x3c03457f  lui         $v1, 0x457F
    ctx->pc = 0x39ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17791 << 16));
    // 0x39ae84: 0x3c024540  lui         $v0, 0x4540
    ctx->pc = 0x39ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17728 << 16));
    // 0x39ae88: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x39ae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x39ae8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x39ae8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39ae90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39ae94: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x39AE94u;
    SET_GPR_U32(ctx, 31, 0x39AE9Cu);
    ctx->pc = 0x39AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE94u;
    // 0x39ae98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x39AE94u, 0x39AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE9Cu;
label_39ae9c:
    // 0x39ae9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ae9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39aea0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39aea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39aea4: 0x0  nop
    ctx->pc = 0x39aea4u;
    // NOP
    // 0x39aea8: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x39aea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x39aeac: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x39aeacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39aeb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x39aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x39aeb4: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x39aeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x39aeb8: 0x86052b54  lh          $a1, 0x2B54($s0)
    ctx->pc = 0x39aeb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11092)));
    // 0x39aebc: 0x86062b56  lh          $a2, 0x2B56($s0)
    ctx->pc = 0x39aebcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x39aec0: 0xc097498  jal         func_25D260
    ctx->pc = 0x39AEC0u;
    SET_GPR_U32(ctx, 31, 0x39AEC8u);
    ctx->pc = 0x39AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AEC0u;
    // 0x39aec4: 0x860400c2  lh          $a0, 0xC2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x39AEC0u, 0x39AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AEC8u;
label_39aec8:
    // 0x39aec8: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x39aec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39aecc: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39AECCu;
    SET_GPR_U32(ctx, 31, 0x39AED4u);
    ctx->pc = 0x39AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AECCu;
    // 0x39aed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39AECCu, 0x39AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AED4u;
label_39aed4:
    // 0x39aed4: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39aed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39aed8: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39aed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39aedc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x39aedcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39aee0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39AEE0u;
    {
        const bool branch_taken_0x39aee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEE0u;
        // 0x39aee4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aee0) {
            ctx->pc = 0x39AEF0u;
            goto label_39aef0;
        }
    }
    ctx->pc = 0x39AEE8u;
    // 0x39aee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39AEE8u;
    {
        const bool branch_taken_0x39aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEE8u;
        // 0x39aeec: 0xa6032b4c  sh          $v1, 0x2B4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aee8) {
            ctx->pc = 0x39AF00u;
            goto label_39af00;
        }
    }
    ctx->pc = 0x39AEF0u;
label_39aef0:
    // 0x39aef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aef4: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39AEF4u;
    SET_GPR_U32(ctx, 31, 0x39AEFCu);
    ctx->pc = 0x39AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AEF4u;
    // 0x39aef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39AEF4u, 0x39AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AEFCu;
label_39aefc:
    // 0x39aefc: 0x0  nop
    ctx->pc = 0x39aefcu;
    // NOP
label_39af00:
    // 0x39af00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39af00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39af04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39af04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39af08: 0x3e00008  jr          $ra
    ctx->pc = 0x39AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF08u;
        // 0x39af0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AF10u;
}
