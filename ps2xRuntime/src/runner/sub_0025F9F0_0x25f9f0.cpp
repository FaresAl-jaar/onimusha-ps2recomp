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

// Function: sub_0025F9F0
// Address: 0x25f9f0 - 0x25fb60
void sub_0025F9F0_0x25f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F9F0_0x25f9f0");
#endif

    switch (ctx->pc) {
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fad4u: goto label_25fad4;
        case 0x25faf0u: goto label_25faf0;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb18u: goto label_25fb18;
        default: break;
    }

    ctx->pc = 0x25f9f0u;

    // 0x25f9f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f9f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f9f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f9fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25fa00: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x25fa00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25fa08: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x25fa08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25fa10: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x25fa10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25fa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25fa18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25fa18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25fa20: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25fa20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25fa28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25fa28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fa30: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25fa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa34: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x25fa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa38: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x25fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x25fa3c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25FA3Cu;
    SET_GPR_U32(ctx, 31, 0x25FA44u);
    ctx->pc = 0x25FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA3Cu;
    // 0x25fa40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25FA3Cu, 0x25FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA44u;
label_25fa44:
    // 0x25fa44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FA44u;
    {
        const bool branch_taken_0x25fa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA44u;
        // 0x25fa48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa44) {
            ctx->pc = 0x25FA58u;
            goto label_25fa58;
        }
    }
    ctx->pc = 0x25FA4Cu;
    // 0x25fa4c: 0xc097b44  jal         func_25ED10
    ctx->pc = 0x25FA4Cu;
    SET_GPR_U32(ctx, 31, 0x25FA54u);
    ctx->pc = 0x25FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA4Cu;
    // 0x25fa50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ED10u, 0x25FA4Cu, 0x25FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa58:
    // 0x25fa58: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25FA58u;
    {
        const bool branch_taken_0x25fa58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA58u;
        // 0x25fa5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa58) {
            ctx->pc = 0x25FB28u;
            goto label_25fb28;
        }
    }
    ctx->pc = 0x25FA60u;
    // 0x25fa60: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25FA60u;
    SET_GPR_U32(ctx, 31, 0x25FA68u);
    ctx->pc = 0x25FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA60u;
    // 0x25fa64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25FA60u, 0x25FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA68u;
label_25fa68:
    // 0x25fa68: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25fa68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25fa6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25fa6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa70: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25fa70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25fa74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x25fa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa78: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x25fa78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa7c: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x25fa7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25fa80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa88: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25FA88u;
    SET_GPR_U32(ctx, 31, 0x25FA90u);
    ctx->pc = 0x25FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA88u;
    // 0x25fa8c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25FA88u, 0x25FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA90u;
label_25fa90:
    // 0x25fa90: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25fa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25fa94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa98: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25fa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25fa9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25fa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25faa0: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25faa4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25faa8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x25faa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25faac: 0xc097b7c  jal         func_25EDF0
    ctx->pc = 0x25FAACu;
    SET_GPR_U32(ctx, 31, 0x25FAB4u);
    ctx->pc = 0x25FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAACu;
    // 0x25fab0: 0x7e0200b0  sq          $v0, 0xB0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EDF0u, 0x25FAACu, 0x25FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAB4u;
label_25fab4:
    // 0x25fab4: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25fab8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25fabc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25FABCu;
    SET_GPR_U32(ctx, 31, 0x25FAC4u);
    ctx->pc = 0x25FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FABCu;
    // 0x25fac0: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25FABCu, 0x25FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAC4u;
label_25fac4:
    // 0x25fac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FAC4u;
    {
        const bool branch_taken_0x25fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC4u;
        // 0x25fac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fac4) {
            ctx->pc = 0x25FAD8u;
            goto label_25fad8;
        }
    }
    ctx->pc = 0x25FACCu;
    // 0x25facc: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25FACCu;
    SET_GPR_U32(ctx, 31, 0x25FAD4u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25FACCu, 0x25FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAD4u;
label_25fad4:
    // 0x25fad4: 0x0  nop
    ctx->pc = 0x25fad4u;
    // NOP
label_25fad8:
    // 0x25fad8: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x25fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x25fadc: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x25fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25fae0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FAE0u;
    {
        const bool branch_taken_0x25fae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fae0) {
            ctx->pc = 0x25FAF8u;
            goto label_25faf8;
        }
    }
    ctx->pc = 0x25FAE8u;
    // 0x25fae8: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25FAE8u;
    SET_GPR_U32(ctx, 31, 0x25FAF0u);
    ctx->pc = 0x25FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAE8u;
    // 0x25faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25FAE8u, 0x25FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAF0u;
label_25faf0:
    // 0x25faf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FAF0u;
    {
        const bool branch_taken_0x25faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAF0u;
        // 0x25faf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faf0) {
            ctx->pc = 0x25FB30u;
            goto label_25fb30;
        }
    }
    ctx->pc = 0x25FAF8u;
label_25faf8:
    // 0x25faf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25faf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fafc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25fafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb00: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25FB00u;
    SET_GPR_U32(ctx, 31, 0x25FB08u);
    ctx->pc = 0x25FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB00u;
    // 0x25fb04: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25FB00u, 0x25FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB08u;
label_25fb08:
    // 0x25fb08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FB08u;
    {
        const bool branch_taken_0x25fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB08u;
        // 0x25fb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb08) {
            ctx->pc = 0x25FB20u;
            goto label_25fb20;
        }
    }
    ctx->pc = 0x25FB10u;
    // 0x25fb10: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25FB10u;
    SET_GPR_U32(ctx, 31, 0x25FB18u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25FB10u, 0x25FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB18u;
label_25fb18:
    // 0x25fb18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25FB18u;
    {
        const bool branch_taken_0x25fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB18u;
        // 0x25fb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb18) {
            ctx->pc = 0x25FB30u;
            goto label_25fb30;
        }
    }
    ctx->pc = 0x25FB20u;
label_25fb20:
    // 0x25fb20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FB20u;
    {
        const bool branch_taken_0x25fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB20u;
        // 0x25fb24: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb20) {
            ctx->pc = 0x25FB30u;
            goto label_25fb30;
        }
    }
    ctx->pc = 0x25FB28u;
label_25fb28:
    // 0x25fb28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25fb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb2c: 0x0  nop
    ctx->pc = 0x25fb2cu;
    // NOP
label_25fb30:
    // 0x25fb30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25fb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25fb34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25fb34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25fb38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25fb38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25fb3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25fb3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25fb40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25fb40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fb44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25fb44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fb48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25fb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fb4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25fb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb58: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB58u;
        // 0x25fb5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FB60u;
}
