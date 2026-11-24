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

// Function: sub_002CCE50
// Address: 0x2cce50 - 0x2ccfd4
void sub_002CCE50_0x2cce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCE50_0x2cce50");
#endif

    switch (ctx->pc) {
        case 0x2ccec4u: goto label_2ccec4;
        case 0x2cced4u: goto label_2cced4;
        case 0x2cceecu: goto label_2cceec;
        case 0x2ccefcu: goto label_2ccefc;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf24u: goto label_2ccf24;
        case 0x2ccf34u: goto label_2ccf34;
        case 0x2ccf44u: goto label_2ccf44;
        case 0x2ccf54u: goto label_2ccf54;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf74u: goto label_2ccf74;
        case 0x2ccfbcu: goto label_2ccfbc;
        default: break;
    }

    ctx->pc = 0x2cce50u;

    // 0x2cce50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cce54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cce58: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x2cce58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cce5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cce60: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x2cce60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cce64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cce68: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x2cce68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cce6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cce70: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cce74: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x2cce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce78: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x2cce78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cce7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cce7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce80: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2cce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cce84: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2cce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2cce88: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2cce8c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2cce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2cce90: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x2cce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce94: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2cce94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cce98: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x2cce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce9c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2cce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2ccea0: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x2ccea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccea4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ccea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ccea8: 0x87838264  lh          $v1, -0x7D9C($gp)
    ctx->pc = 0x2ccea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935140)));
    // 0x2cceac: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2cceacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cceb0: 0x87838268  lh          $v1, -0x7D98($gp)
    ctx->pc = 0x2cceb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935144)));
    // 0x2cceb4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2cceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cceb8: 0x9045005c  lbu         $a1, 0x5C($v0)
    ctx->pc = 0x2cceb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2ccebc: 0xc050d80  jal         func_143600
    ctx->pc = 0x2CCEBCu;
    SET_GPR_U32(ctx, 31, 0x2CCEC4u);
    ctx->pc = 0x2CCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEBCu;
    // 0x2ccec0: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143600u, 0x2CCEBCu, 0x2CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEC4u;
label_2ccec4:
    // 0x2ccec4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2ccec8: 0x90450058  lbu         $a1, 0x58($v0)
    ctx->pc = 0x2ccec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ccecc: 0xc050d80  jal         func_143600
    ctx->pc = 0x2CCECCu;
    SET_GPR_U32(ctx, 31, 0x2CCED4u);
    ctx->pc = 0x2CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCECCu;
    // 0x2cced0: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143600u, 0x2CCECCu, 0x2CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCED4u;
label_2cced4:
    // 0x2cced4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2cced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2cced8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2cced8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccedc: 0x94520054  lhu         $s2, 0x54($v0)
    ctx->pc = 0x2ccedcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2ccee0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2ccee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2ccee4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2CCEE4u;
    SET_GPR_U32(ctx, 31, 0x2CCEECu);
    ctx->pc = 0x2CCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEE4u;
    // 0x2ccee8: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2CCEE4u, 0x2CCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEECu;
label_2cceec:
    // 0x2cceec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2cceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccef0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x2ccef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ccef4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x2CCEF4u;
    SET_GPR_U32(ctx, 31, 0x2CCEFCu);
    ctx->pc = 0x2CCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEF4u;
    // 0x2ccef8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x2CCEF4u, 0x2CCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEFCu;
label_2ccefc:
    // 0x2ccefc: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2ccefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2ccf00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ccf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccf04: 0x94500050  lhu         $s0, 0x50($v0)
    ctx->pc = 0x2ccf04u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2ccf08: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2ccf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2ccf0c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF14u);
    ctx->pc = 0x2CCF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF0Cu;
    // 0x2ccf10: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2CCF0Cu, 0x2CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ccf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccf18: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x2ccf18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ccf1c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x2CCF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF24u);
    ctx->pc = 0x2CCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF1Cu;
    // 0x2ccf20: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x2CCF1Cu, 0x2CCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF24u;
label_2ccf24:
    // 0x2ccf24: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ccf28: 0x9052004c  lbu         $s2, 0x4C($v0)
    ctx->pc = 0x2ccf28u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ccf2c: 0xc0a2950  jal         func_28A540
    ctx->pc = 0x2CCF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF34u);
    ctx->pc = 0x2CCF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF2Cu;
    // 0x2ccf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A540u, 0x2CCF2Cu, 0x2CCF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF34u;
label_2ccf34:
    // 0x2ccf34: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ccf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ccf38: 0x90500048  lbu         $s0, 0x48($v0)
    ctx->pc = 0x2ccf38u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ccf3c: 0xc0a2950  jal         func_28A540
    ctx->pc = 0x2CCF3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF44u);
    ctx->pc = 0x2CCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF3Cu;
    // 0x2ccf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A540u, 0x2CCF3Cu, 0x2CCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF44u;
label_2ccf44:
    // 0x2ccf44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ccf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ccf48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf4c: 0xc05d458  jal         func_175160
    ctx->pc = 0x2CCF4Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF54u);
    ctx->pc = 0x2CCF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF4Cu;
    // 0x2ccf50: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175160u, 0x2CCF4Cu, 0x2CCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF54u;
label_2ccf54:
    // 0x2ccf54: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ccf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ccf58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ccf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf5c: 0xc05d458  jal         func_175160
    ctx->pc = 0x2CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF64u);
    ctx->pc = 0x2CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF5Cu;
    // 0x2ccf60: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175160u, 0x2CCF5Cu, 0x2CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ccf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ccf68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ccf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf6c: 0xc052db0  jal         func_14B6C0
    ctx->pc = 0x2CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF74u);
    ctx->pc = 0x2CCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF6Cu;
    // 0x2ccf70: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6C0u, 0x2CCF6Cu, 0x2CCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF74u;
label_2ccf74:
    // 0x2ccf74: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2ccf78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccf7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ccf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ccf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf84: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2ccf84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccf88: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ccf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2ccf8c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2ccf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x2ccf90: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2ccf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ccf94: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2ccf98: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2ccf98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ccf9c: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2ccf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
    // 0x2ccfa0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ccfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ccfa4: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2ccfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ccfa8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ccfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2ccfac: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
    // 0x2ccfb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ccfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ccfb4: 0xc05559c  jal         func_155670
    ctx->pc = 0x2CCFB4u;
    SET_GPR_U32(ctx, 31, 0x2CCFBCu);
    ctx->pc = 0x2CCFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFB4u;
    // 0x2ccfb8: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155670u, 0x2CCFB4u, 0x2CCFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFBCu;
label_2ccfbc:
    // 0x2ccfbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ccfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccfc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ccfc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccfc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccfc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFCCu;
        // 0x2ccfd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCFD4u;
}
