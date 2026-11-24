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

// Function: sub_001EDA80
// Address: 0x1eda80 - 0x1edc50
void sub_001EDA80_0x1eda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDA80_0x1eda80");
#endif

    switch (ctx->pc) {
        case 0x1edae0u: goto label_1edae0;
        case 0x1edb00u: goto label_1edb00;
        case 0x1edb14u: goto label_1edb14;
        case 0x1edb24u: goto label_1edb24;
        case 0x1edb38u: goto label_1edb38;
        case 0x1edb70u: goto label_1edb70;
        case 0x1edb80u: goto label_1edb80;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edbf0u: goto label_1edbf0;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc24u: goto label_1edc24;
        default: break;
    }

    ctx->pc = 0x1eda80u;

    // 0x1eda80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1eda84: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eda84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1eda88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1eda88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1eda8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eda90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eda94: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1eda94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eda98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eda9c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1eda9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1edaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1edaa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1edaa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1edaac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edab4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1edab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edab8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDAB8u;
    {
        const bool branch_taken_0x1edab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAB8u;
        // 0x1edabc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edab8) {
            ctx->pc = 0x1EDAC8u;
            goto label_1edac8;
        }
    }
    ctx->pc = 0x1EDAC0u;
    // 0x1edac0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1EDAC0u;
    {
        const bool branch_taken_0x1edac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAC0u;
        // 0x1edac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edac0) {
            ctx->pc = 0x1EDC28u;
            goto label_1edc28;
        }
    }
    ctx->pc = 0x1EDAC8u;
label_1edac8:
    // 0x1edac8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDAC8u;
    {
        const bool branch_taken_0x1edac8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAC8u;
        // 0x1edacc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edac8) {
            ctx->pc = 0x1EDAD8u;
            goto label_1edad8;
        }
    }
    ctx->pc = 0x1EDAD0u;
    // 0x1edad0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDAD0u;
    {
        const bool branch_taken_0x1edad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD0u;
        // 0x1edad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad0) {
            ctx->pc = 0x1EDAE8u;
            goto label_1edae8;
        }
    }
    ctx->pc = 0x1EDAD8u;
label_1edad8:
    // 0x1edad8: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EDAD8u;
    SET_GPR_U32(ctx, 31, 0x1EDAE0u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EDAD8u, 0x1EDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAE0u;
label_1edae0:
    // 0x1edae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1edae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edae8:
    // 0x1edae8: 0x92a50044  lbu         $a1, 0x44($s5)
    ctx->pc = 0x1edae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1edaec: 0x92a60045  lbu         $a2, 0x45($s5)
    ctx->pc = 0x1edaecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 69)));
    // 0x1edaf0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1edaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1edaf4: 0x92a80033  lbu         $t0, 0x33($s5)
    ctx->pc = 0x1edaf4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1edaf8: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EDAF8u;
    SET_GPR_U32(ctx, 31, 0x1EDB00u);
    ctx->pc = 0x1EDAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAF8u;
    // 0x1edafc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EDAF8u, 0x1EDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB00u;
label_1edb00:
    // 0x1edb00: 0x92a60032  lbu         $a2, 0x32($s5)
    ctx->pc = 0x1edb00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1edb04: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDB04u;
    {
        const bool branch_taken_0x1edb04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB04u;
        // 0x1edb08: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb04) {
            ctx->pc = 0x1EDB1Cu;
            goto label_1edb1c;
        }
    }
    ctx->pc = 0x1EDB0Cu;
    // 0x1edb0c: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1EDB0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB14u);
    ctx->pc = 0x1EDB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB0Cu;
    // 0x1edb10: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EDB0Cu, 0x1EDB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB14u;
label_1edb14:
    // 0x1edb14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDB14u;
    {
        const bool branch_taken_0x1edb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB14u;
        // 0x1edb18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb14) {
            ctx->pc = 0x1EDB28u;
            goto label_1edb28;
        }
    }
    ctx->pc = 0x1EDB1Cu;
label_1edb1c:
    // 0x1edb1c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1EDB1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB24u);
    ctx->pc = 0x1EDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB1Cu;
    // 0x1edb20: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1EDB1Cu, 0x1EDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB24u;
label_1edb24:
    // 0x1edb24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1edb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edb28:
    // 0x1edb28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1edb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1edb30: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EDB30u;
    SET_GPR_U32(ctx, 31, 0x1EDB38u);
    ctx->pc = 0x1EDB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB30u;
    // 0x1edb34: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EDB30u, 0x1EDB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB38u;
label_1edb38:
    // 0x1edb38: 0x7aa50050  lq          $a1, 0x50($s5)
    ctx->pc = 0x1edb38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1edb3c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1edb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1edb40: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x1edb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1edb44: 0x27a700dc  addiu       $a3, $sp, 0xDC
    ctx->pc = 0x1edb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1edb48: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1edb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1edb4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edb4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edb50: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x1edb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x1edb54: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1edb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1edb58: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1edb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1edb5c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1edb5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1edb60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1edb60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1edb64: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1edb64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1edb68: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EDB68u;
    SET_GPR_U32(ctx, 31, 0x1EDB70u);
    ctx->pc = 0x1EDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB68u;
    // 0x1edb6c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EDB68u, 0x1EDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB70u;
label_1edb70:
    // 0x1edb70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1edb74: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1edb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1edb78: 0xc0755cc  jal         func_1D5730
    ctx->pc = 0x1EDB78u;
    SET_GPR_U32(ctx, 31, 0x1EDB80u);
    ctx->pc = 0x1EDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB78u;
    // 0x1edb7c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5730u, 0x1EDB78u, 0x1EDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB80u;
label_1edb80:
    // 0x1edb80: 0x8648000a  lh          $t0, 0xA($s2)
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1edb84: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1edb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1edb88: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1edb8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1edb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1edb90: 0x96470006  lhu         $a3, 0x6($s2)
    ctx->pc = 0x1edb90u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1edb94: 0xc6b1004c  lwc1        $f17, 0x4C($s5)
    ctx->pc = 0x1edb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1edb98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1edb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1edb9c: 0x86a20042  lh          $v0, 0x42($s5)
    ctx->pc = 0x1edb9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x1edba0: 0x96460004  lhu         $a2, 0x4($s2)
    ctx->pc = 0x1edba0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1edba4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1edba8: 0x8ea50048  lw          $a1, 0x48($s5)
    ctx->pc = 0x1edba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1edbac: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1edbacu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1edbb0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1edbb0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edbb4: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x1edbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1edbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1edbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edbbc: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x1edbbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1edbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1edbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1edbc4: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x1edbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1edbc8: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1edbcc: 0x46001342  mul.s       $f13, $f2, $f0
    ctx->pc = 0x1edbccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1edbd0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1edbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1edbd4: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x1edbd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1edbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edbdc: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x1edbdcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x1edbe0: 0xc075604  jal         func_1D5810
    ctx->pc = 0x1EDBE0u;
    SET_GPR_U32(ctx, 31, 0x1EDBE8u);
    ctx->pc = 0x1EDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBE0u;
    // 0x1edbe4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5810u, 0x1EDBE0u, 0x1EDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBE8u;
label_1edbe8:
    // 0x1edbe8: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1EDBE8u;
    SET_GPR_U32(ctx, 31, 0x1EDBF0u);
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1EDBE8u, 0x1EDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBF0u;
label_1edbf0:
    // 0x1edbf0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDBF0u;
    {
        const bool branch_taken_0x1edbf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBF0u;
        // 0x1edbf4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbf0) {
            ctx->pc = 0x1EDC00u;
            goto label_1edc00;
        }
    }
    ctx->pc = 0x1EDBF8u;
    // 0x1edbf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EDBF8u;
    {
        const bool branch_taken_0x1edbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBF8u;
        // 0x1edbfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbf8) {
            ctx->pc = 0x1EDC28u;
            goto label_1edc28;
        }
    }
    ctx->pc = 0x1EDC00u;
label_1edc00:
    // 0x1edc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc04: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EDC04u;
    SET_GPR_U32(ctx, 31, 0x1EDC0Cu);
    ctx->pc = 0x1EDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC04u;
    // 0x1edc08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EDC04u, 0x1EDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC0Cu;
label_1edc0c:
    // 0x1edc0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1edc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc14: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1edc18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1edc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc1c: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EDC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC24u);
    ctx->pc = 0x1EDC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC1Cu;
    // 0x1edc20: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EDC1Cu, 0x1EDC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC24u;
label_1edc24:
    // 0x1edc24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1edc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc28:
    // 0x1edc28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1edc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1edc2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1edc2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1edc30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1edc30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1edc34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1edc34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edc38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1edc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edc3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1edc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1edc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edc44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1edc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC48u;
        // 0x1edc4c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC50u;
}
