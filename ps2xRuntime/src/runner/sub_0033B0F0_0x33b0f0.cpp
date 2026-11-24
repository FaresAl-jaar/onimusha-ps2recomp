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

// Function: sub_0033B0F0
// Address: 0x33b0f0 - 0x33b2f4
void sub_0033B0F0_0x33b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B0F0_0x33b0f0");
#endif

    switch (ctx->pc) {
        case 0x33b118u: goto label_33b118;
        case 0x33b19cu: goto label_33b19c;
        case 0x33b1bcu: goto label_33b1bc;
        case 0x33b1dcu: goto label_33b1dc;
        case 0x33b1fcu: goto label_33b1fc;
        case 0x33b21cu: goto label_33b21c;
        case 0x33b228u: goto label_33b228;
        case 0x33b278u: goto label_33b278;
        case 0x33b2a4u: goto label_33b2a4;
        case 0x33b2d4u: goto label_33b2d4;
        default: break;
    }

    ctx->pc = 0x33b0f0u;

    // 0x33b0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33b0f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33b0f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b0fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b100: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b10c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33b10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b110: 0xc0ceb68  jal         func_33ADA0
    ctx->pc = 0x33B110u;
    SET_GPR_U32(ctx, 31, 0x33B118u);
    ctx->pc = 0x33B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B110u;
    // 0x33b114: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADA0u, 0x33B110u, 0x33B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B118u;
label_33b118:
    // 0x33b118: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x33b118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33b11c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x33b11cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b120: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b124: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x33B124u;
    {
        const bool branch_taken_0x33b124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B124u;
        // 0x33b128: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b124) {
            ctx->pc = 0x33B278u;
            goto label_33b278;
        }
    }
    ctx->pc = 0x33B12Cu;
    // 0x33b12c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33b130: 0xa3a3005e  sb          $v1, 0x5E($sp)
    ctx->pc = 0x33b130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x33b134: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33b138: 0xa3a3005f  sb          $v1, 0x5F($sp)
    ctx->pc = 0x33b138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x33b13c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x33b13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x33b140: 0xa3a2005d  sb          $v0, 0x5D($sp)
    ctx->pc = 0x33b140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b144: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b148: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x33b148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b14c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33b150: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x33B150u;
    {
        const bool branch_taken_0x33b150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B150u;
        // 0x33b154: 0x3402b  sltu        $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b150) {
            ctx->pc = 0x33B208u;
            goto label_33b208;
        }
    }
    ctx->pc = 0x33B158u;
    // 0x33b158: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b15c: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x33B15Cu;
    {
        const bool branch_taken_0x33b15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B15Cu;
        // 0x33b160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b15c) {
            ctx->pc = 0x33B1E8u;
            goto label_33b1e8;
        }
    }
    ctx->pc = 0x33B164u;
    // 0x33b164: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33B164u;
    {
        const bool branch_taken_0x33b164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b164) {
            ctx->pc = 0x33B1C8u;
            goto label_33b1c8;
        }
    }
    ctx->pc = 0x33B16Cu;
    // 0x33b16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b170: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B170u;
    {
        const bool branch_taken_0x33b170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b170) {
            ctx->pc = 0x33B1A8u;
            goto label_33b1a8;
        }
    }
    ctx->pc = 0x33B178u;
    // 0x33b178: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B178u;
    {
        const bool branch_taken_0x33b178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b178) {
            ctx->pc = 0x33B188u;
            goto label_33b188;
        }
    }
    ctx->pc = 0x33B180u;
    // 0x33b180: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33B180u;
    {
        const bool branch_taken_0x33b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b180) {
            ctx->pc = 0x33B220u;
            goto label_33b220;
        }
    }
    ctx->pc = 0x33B188u;
label_33b188:
    // 0x33b188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b18c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x33b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33b190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b194: 0xc0ced24  jal         func_33B490
    ctx->pc = 0x33B194u;
    SET_GPR_U32(ctx, 31, 0x33B19Cu);
    ctx->pc = 0x33B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B194u;
    // 0x33b198: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B490u, 0x33B194u, 0x33B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B19Cu;
label_33b19c:
    // 0x33b19c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33B19Cu;
    {
        const bool branch_taken_0x33b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b19c) {
            ctx->pc = 0x33B220u;
            goto label_33b220;
        }
    }
    ctx->pc = 0x33B1A4u;
    // 0x33b1a4: 0x0  nop
    ctx->pc = 0x33b1a4u;
    // NOP
label_33b1a8:
    // 0x33b1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1ac: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x33b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33b1b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1b4: 0xc0ced6c  jal         func_33B5B0
    ctx->pc = 0x33B1B4u;
    SET_GPR_U32(ctx, 31, 0x33B1BCu);
    ctx->pc = 0x33B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B1B4u;
    // 0x33b1b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B5B0u, 0x33B1B4u, 0x33B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B1BCu;
label_33b1bc:
    // 0x33b1bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33B1BCu;
    {
        const bool branch_taken_0x33b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1bc) {
            ctx->pc = 0x33B220u;
            goto label_33b220;
        }
    }
    ctx->pc = 0x33B1C4u;
    // 0x33b1c4: 0x0  nop
    ctx->pc = 0x33b1c4u;
    // NOP
label_33b1c8:
    // 0x33b1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1cc: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x33b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33b1d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1d4: 0xc0cee08  jal         func_33B820
    ctx->pc = 0x33B1D4u;
    SET_GPR_U32(ctx, 31, 0x33B1DCu);
    ctx->pc = 0x33B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B1D4u;
    // 0x33b1d8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B820u, 0x33B1D4u, 0x33B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B1DCu;
label_33b1dc:
    // 0x33b1dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33B1DCu;
    {
        const bool branch_taken_0x33b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1dc) {
            ctx->pc = 0x33B220u;
            goto label_33b220;
        }
    }
    ctx->pc = 0x33B1E4u;
    // 0x33b1e4: 0x0  nop
    ctx->pc = 0x33b1e4u;
    // NOP
label_33b1e8:
    // 0x33b1e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1ec: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x33b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33b1f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1f4: 0xc0ceea0  jal         func_33BA80
    ctx->pc = 0x33B1F4u;
    SET_GPR_U32(ctx, 31, 0x33B1FCu);
    ctx->pc = 0x33B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B1F4u;
    // 0x33b1f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA80u, 0x33B1F4u, 0x33B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B1FCu;
label_33b1fc:
    // 0x33b1fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33B1FCu;
    {
        const bool branch_taken_0x33b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1fc) {
            ctx->pc = 0x33B220u;
            goto label_33b220;
        }
    }
    ctx->pc = 0x33B204u;
    // 0x33b204: 0x0  nop
    ctx->pc = 0x33b204u;
    // NOP
label_33b208:
    // 0x33b208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b20c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x33b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33b210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b214: 0xc0cef48  jal         func_33BD20
    ctx->pc = 0x33B214u;
    SET_GPR_U32(ctx, 31, 0x33B21Cu);
    ctx->pc = 0x33B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B214u;
    // 0x33b218: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD20u, 0x33B214u, 0x33B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B21Cu;
label_33b21c:
    // 0x33b21c: 0x0  nop
    ctx->pc = 0x33b21cu;
    // NOP
label_33b220:
    // 0x33b220: 0xc0ceb50  jal         func_33AD40
    ctx->pc = 0x33B220u;
    SET_GPR_U32(ctx, 31, 0x33B228u);
    ctx->pc = 0x33B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B220u;
    // 0x33b224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD40u, 0x33B220u, 0x33B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B228u;
label_33b228:
    // 0x33b228: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b22c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33b230: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33B230u;
    {
        const bool branch_taken_0x33b230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B230u;
        // 0x33b234: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b230) {
            ctx->pc = 0x33B278u;
            goto label_33b278;
        }
    }
    ctx->pc = 0x33B238u;
    // 0x33b238: 0x27828310  addiu       $v0, $gp, -0x7CF0
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935312));
    // 0x33b23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b240: 0x26270002  addiu       $a3, $s1, 0x2
    ctx->pc = 0x33b240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x33b244: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x33b244u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b248: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x33b24c: 0x24636940  addiu       $v1, $v1, 0x6940
    ctx->pc = 0x33b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26944));
    // 0x33b250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b254: 0x24060196  addiu       $a2, $zero, 0x196
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
    // 0x33b258: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x33b258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b25c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33b260: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x33b260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x33b264: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x33b264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33b268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b26c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b270: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x33B270u;
    SET_GPR_U32(ctx, 31, 0x33B278u);
    ctx->pc = 0x33B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B270u;
    // 0x33b274: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x33B270u, 0x33B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B278u;
label_33b278:
    // 0x33b278: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b27c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B27Cu;
    {
        const bool branch_taken_0x33b27c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b27c) {
            ctx->pc = 0x33B290u;
            goto label_33b290;
        }
    }
    ctx->pc = 0x33B284u;
    // 0x33b284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33B284u;
    {
        const bool branch_taken_0x33b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b284) {
            ctx->pc = 0x33B2B0u;
            goto label_33b2b0;
        }
    }
    ctx->pc = 0x33B28Cu;
    // 0x33b28c: 0x0  nop
    ctx->pc = 0x33b28cu;
    // NOP
label_33b290:
    // 0x33b290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b294: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33b294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b298: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x33b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33b29c: 0xc0cecdc  jal         func_33B370
    ctx->pc = 0x33B29Cu;
    SET_GPR_U32(ctx, 31, 0x33B2A4u);
    ctx->pc = 0x33B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B29Cu;
    // 0x33b2a0: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B370u, 0x33B29Cu, 0x33B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B2A4u;
label_33b2a4:
    // 0x33b2a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33B2A4u;
    {
        const bool branch_taken_0x33b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b2a4) {
            ctx->pc = 0x33B2D8u;
            goto label_33b2d8;
        }
    }
    ctx->pc = 0x33B2ACu;
    // 0x33b2ac: 0x0  nop
    ctx->pc = 0x33b2acu;
    // NOP
label_33b2b0:
    // 0x33b2b0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x33b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x33b2b4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x33b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33b2b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33b2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2bc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x33b2bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2c0: 0x24846d00  addiu       $a0, $a0, 0x6D00
    ctx->pc = 0x33b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27904));
    // 0x33b2c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2cc: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x33B2CCu;
    SET_GPR_U32(ctx, 31, 0x33B2D4u);
    ctx->pc = 0x33B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B2CCu;
    // 0x33b2d0: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x33B2CCu, 0x33B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B2D4u;
label_33b2d4:
    // 0x33b2d4: 0x0  nop
    ctx->pc = 0x33b2d4u;
    // NOP
label_33b2d8:
    // 0x33b2d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33b2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b2dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b2e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x33B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2ECu;
        // 0x33b2f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B2F4u;
}
