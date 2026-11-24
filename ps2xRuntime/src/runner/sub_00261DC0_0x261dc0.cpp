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

// Function: sub_00261DC0
// Address: 0x261dc0 - 0x2626f0
void sub_00261DC0_0x261dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261DC0_0x261dc0");
#endif

    switch (ctx->pc) {
        case 0x261e00u: goto label_261e00;
        case 0x261e14u: goto label_261e14;
        case 0x261e50u: goto label_261e50;
        case 0x261e64u: goto label_261e64;
        case 0x261ff4u: goto label_261ff4;
        case 0x26209cu: goto label_26209c;
        case 0x26214cu: goto label_26214c;
        case 0x26215cu: goto label_26215c;
        case 0x262168u: goto label_262168;
        case 0x2622dcu: goto label_2622dc;
        case 0x262350u: goto label_262350;
        case 0x262390u: goto label_262390;
        case 0x2623c8u: goto label_2623c8;
        case 0x26242cu: goto label_26242c;
        case 0x262440u: goto label_262440;
        case 0x262450u: goto label_262450;
        case 0x262488u: goto label_262488;
        case 0x26249cu: goto label_26249c;
        case 0x2624b8u: goto label_2624b8;
        case 0x262508u: goto label_262508;
        case 0x262510u: goto label_262510;
        case 0x262518u: goto label_262518;
        case 0x262524u: goto label_262524;
        case 0x262530u: goto label_262530;
        case 0x26253cu: goto label_26253c;
        case 0x262548u: goto label_262548;
        case 0x262554u: goto label_262554;
        case 0x262560u: goto label_262560;
        case 0x262568u: goto label_262568;
        case 0x262570u: goto label_262570;
        case 0x262578u: goto label_262578;
        case 0x262580u: goto label_262580;
        case 0x26258cu: goto label_26258c;
        case 0x262598u: goto label_262598;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c8u: goto label_2625c8;
        case 0x2625d0u: goto label_2625d0;
        case 0x2625d8u: goto label_2625d8;
        case 0x2625e4u: goto label_2625e4;
        case 0x2625f0u: goto label_2625f0;
        case 0x2625f8u: goto label_2625f8;
        case 0x262618u: goto label_262618;
        case 0x262640u: goto label_262640;
        case 0x262670u: goto label_262670;
        case 0x262688u: goto label_262688;
        case 0x2626d8u: goto label_2626d8;
        default: break;
    }

    ctx->pc = 0x261dc0u;

    // 0x261dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x261dc4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x261dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x261dc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x261dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x261dcc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x261dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x261dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x261dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x261dd4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x261dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x261dd8: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x261dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x261ddc: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x261DDCu;
    {
        const bool branch_taken_0x261ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DDCu;
        // 0x261de0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ddc) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x261DE4u;
    // 0x261de4: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x261de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261de8: 0x2442ff0e  addiu       $v0, $v0, -0xF2
    ctx->pc = 0x261de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967054));
    // 0x261dec: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x261decu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x261df0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x261DF0u;
    {
        const bool branch_taken_0x261df0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x261df0) {
            ctx->pc = 0x261E20u;
            goto label_261e20;
        }
    }
    ctx->pc = 0x261DF8u;
    // 0x261df8: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x261DF8u;
    SET_GPR_U32(ctx, 31, 0x261E00u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x261DF8u, 0x261E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E00u;
label_261e00:
    // 0x261e00: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x261e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261e04: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x261e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x261e08: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x261e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x261e0c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x261E0Cu;
    SET_GPR_U32(ctx, 31, 0x261E14u);
    ctx->pc = 0x261E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E0Cu;
    // 0x261e10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x261E0Cu, 0x261E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E14u;
label_261e14:
    // 0x261e14: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x261e18: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x261e18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x261e1c: 0x0  nop
    ctx->pc = 0x261e1cu;
    // NOP
label_261e20:
    // 0x261e20: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x261e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261e28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x261e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x261e2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261E2Cu;
    {
        const bool branch_taken_0x261e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261e2c) {
            ctx->pc = 0x261E40u;
            goto label_261e40;
        }
    }
    ctx->pc = 0x261E34u;
    // 0x261e34: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x261e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261e38: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x261e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x261e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x261e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_261e40:
    // 0x261e40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x261E40u;
    {
        const bool branch_taken_0x261e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E40u;
        // 0x261e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e40) {
            ctx->pc = 0x261E70u;
            goto label_261e70;
        }
    }
    ctx->pc = 0x261E48u;
    // 0x261e48: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x261E48u;
    SET_GPR_U32(ctx, 31, 0x261E50u);
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x261E48u, 0x261E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E50u;
label_261e50:
    // 0x261e50: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x261e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261e54: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x261e58: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x261e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x261e5c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x261E5Cu;
    SET_GPR_U32(ctx, 31, 0x261E64u);
    ctx->pc = 0x261E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E5Cu;
    // 0x261e60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x261E5Cu, 0x261E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E64u;
label_261e64:
    // 0x261e64: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x261e68: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x261e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x261e6c: 0x0  nop
    ctx->pc = 0x261e6cu;
    // NOP
label_261e70:
    // 0x261e70: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x261e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x261e74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261e78: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x261e78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x261e7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E7Cu;
    {
        const bool branch_taken_0x261e7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E7Cu;
        // 0x261e80: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e7c) {
            ctx->pc = 0x261E98u;
            goto label_261e98;
        }
    }
    ctx->pc = 0x261E84u;
    // 0x261e84: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x261e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261e88: 0x240200fb  addiu       $v0, $zero, 0xFB
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x261e8c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261E8Cu;
    {
        const bool branch_taken_0x261e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x261e8c) {
            ctx->pc = 0x261E98u;
            goto label_261e98;
        }
    }
    ctx->pc = 0x261E94u;
    // 0x261e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261e98:
    // 0x261e98: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x261E98u;
    {
        const bool branch_taken_0x261e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E98u;
        // 0x261e9c: 0x4102b  sltu        $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e98) {
            ctx->pc = 0x261ED0u;
            goto label_261ed0;
        }
    }
    ctx->pc = 0x261EA0u;
    // 0x261ea0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261EA0u;
    {
        const bool branch_taken_0x261ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261ea0) {
            ctx->pc = 0x261EB4u;
            goto label_261eb4;
        }
    }
    ctx->pc = 0x261EA8u;
    // 0x261ea8: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x261ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261eac: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x261eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x261eb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x261eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_261eb4:
    // 0x261eb4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x261EB4u;
    {
        const bool branch_taken_0x261eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261eb4) {
            ctx->pc = 0x261F28u;
            goto label_261f28;
        }
    }
    ctx->pc = 0x261EBCu;
    // 0x261ebc: 0x92232ad8  lbu         $v1, 0x2AD8($s1)
    ctx->pc = 0x261ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10968)));
    // 0x261ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x261ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261ec4: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x261EC4u;
    {
        const bool branch_taken_0x261ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x261ec4) {
            ctx->pc = 0x261F28u;
            goto label_261f28;
        }
    }
    ctx->pc = 0x261ECCu;
    // 0x261ecc: 0x0  nop
    ctx->pc = 0x261eccu;
    // NOP
label_261ed0:
    // 0x261ed0: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x261ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261ed4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x261ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261ed8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x261ED8u;
    {
        const bool branch_taken_0x261ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x261EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED8u;
        // 0x261edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ed8) {
            ctx->pc = 0x261F00u;
            goto label_261f00;
        }
    }
    ctx->pc = 0x261EE0u;
    // 0x261ee0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261EE0u;
    {
        const bool branch_taken_0x261ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x261ee0) {
            ctx->pc = 0x261F00u;
            goto label_261f00;
        }
    }
    ctx->pc = 0x261EE8u;
    // 0x261ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261eec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261EECu;
    {
        const bool branch_taken_0x261eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x261eec) {
            ctx->pc = 0x261F00u;
            goto label_261f00;
        }
    }
    ctx->pc = 0x261EF4u;
    // 0x261ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261EF4u;
    {
        const bool branch_taken_0x261ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ef4) {
            ctx->pc = 0x261F18u;
            goto label_261f18;
        }
    }
    ctx->pc = 0x261EFCu;
    // 0x261efc: 0x0  nop
    ctx->pc = 0x261efcu;
    // NOP
label_261f00:
    // 0x261f00: 0x92220236  lbu         $v0, 0x236($s1)
    ctx->pc = 0x261f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 566)));
    // 0x261f04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x261F04u;
    {
        const bool branch_taken_0x261f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F04u;
        // 0x261f08: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f04) {
            ctx->pc = 0x261F38u;
            goto label_261f38;
        }
    }
    ctx->pc = 0x261F0Cu;
    // 0x261f0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x261F0Cu;
    {
        const bool branch_taken_0x261f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F0Cu;
        // 0x261f10: 0xa622078c  sh          $v0, 0x78C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f0c) {
            ctx->pc = 0x261F38u;
            goto label_261f38;
        }
    }
    ctx->pc = 0x261F14u;
    // 0x261f14: 0x0  nop
    ctx->pc = 0x261f14u;
    // NOP
label_261f18:
    // 0x261f18: 0x9622078c  lhu         $v0, 0x78C($s1)
    ctx->pc = 0x261f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1932)));
    // 0x261f1c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x261f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x261f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x261F20u;
    {
        const bool branch_taken_0x261f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F20u;
        // 0x261f24: 0xa622078c  sh          $v0, 0x78C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f20) {
            ctx->pc = 0x261F38u;
            goto label_261f38;
        }
    }
    ctx->pc = 0x261F28u;
label_261f28:
    // 0x261f28: 0x9622078c  lhu         $v0, 0x78C($s1)
    ctx->pc = 0x261f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1932)));
    // 0x261f2c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x261f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x261f30: 0xa622078c  sh          $v0, 0x78C($s1)
    ctx->pc = 0x261f30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x261f34: 0x0  nop
    ctx->pc = 0x261f34u;
    // NOP
label_261f38:
    // 0x261f38: 0x9623078e  lhu         $v1, 0x78E($s1)
    ctx->pc = 0x261f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1934)));
    // 0x261f3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x261f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x261f40: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x261f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x261f44: 0xa623078e  sh          $v1, 0x78E($s1)
    ctx->pc = 0x261f44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1934), (uint16_t)GPR_U32(ctx, 3));
    // 0x261f48: 0xa2220235  sb          $v0, 0x235($s1)
    ctx->pc = 0x261f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 565), (uint8_t)GPR_U32(ctx, 2));
    // 0x261f4c: 0x0  nop
    ctx->pc = 0x261f4cu;
    // NOP
label_261f50:
    // 0x261f50: 0xde2304f8  ld          $v1, 0x4F8($s1)
    ctx->pc = 0x261f50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1272)));
    // 0x261f54: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x261f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x261f58: 0x601827  not         $v1, $v1
    ctx->pc = 0x261f58u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x261f5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x261f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x261f60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261f64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261F64u;
    {
        const bool branch_taken_0x261f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F64u;
        // 0x261f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f64) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261F6Cu;
    // 0x261f6c: 0x9622065a  lhu         $v0, 0x65A($s1)
    ctx->pc = 0x261f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1626)));
    // 0x261f70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261F70u;
    {
        const bool branch_taken_0x261f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261f70) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261F78u;
    // 0x261f78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x261F78u;
    {
        const bool branch_taken_0x261f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F78u;
        // 0x261f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f78) {
            ctx->pc = 0x261FA0u;
            goto label_261fa0;
        }
    }
    ctx->pc = 0x261F80u;
label_261f80:
    // 0x261f80: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x261f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261f84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x261f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x261f88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x261f88) {
            ctx->pc = 0x261FA0u;
            goto label_261fa0;
        }
    }
    ctx->pc = 0x261F90u;
    // 0x261f90: 0x9622065a  lhu         $v0, 0x65A($s1)
    ctx->pc = 0x261f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1626)));
    // 0x261f94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261F94u;
    {
        const bool branch_taken_0x261f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261f94) {
            ctx->pc = 0x261FA0u;
            goto label_261fa0;
        }
    }
    ctx->pc = 0x261F9Cu;
    // 0x261f9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x261f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_261fa0:
    // 0x261fa0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x261FA0u;
    {
        const bool branch_taken_0x261fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fa0) {
            ctx->pc = 0x261FF8u;
            goto label_261ff8;
        }
    }
    ctx->pc = 0x261FA8u;
    // 0x261fa8: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x261fa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x261fac: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x261fb0: 0x2463f2d8  addiu       $v1, $v1, -0xD28
    ctx->pc = 0x261fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963928));
    // 0x261fb4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x261fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x261fb8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x261fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x261fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x261fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fc0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x261fc4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x261fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x261fc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x261fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x261fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x261fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261fdc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x261fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x261fe0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x261fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261fe4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x261fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x261fe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x261fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x261fec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x261FECu;
    SET_GPR_U32(ctx, 31, 0x261FF4u);
    ctx->pc = 0x261FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FECu;
    // 0x261ff0: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x261FECu, 0x261FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FF4u;
label_261ff4:
    // 0x261ff4: 0x0  nop
    ctx->pc = 0x261ff4u;
    // NOP
label_261ff8:
    // 0x261ff8: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x261ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x261ffc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x261ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x262000: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x262000u;
    {
        const bool branch_taken_0x262000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x262000) {
            ctx->pc = 0x262028u;
            goto label_262028;
        }
    }
    ctx->pc = 0x262008u;
    // 0x262008: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x262008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x26200c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x262010: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x262010u;
    {
        const bool branch_taken_0x262010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262010) {
            ctx->pc = 0x262040u;
            goto label_262040;
        }
    }
    ctx->pc = 0x262018u;
    // 0x262018: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x262018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26201c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262020: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262020u;
    {
        const bool branch_taken_0x262020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262020) {
            ctx->pc = 0x262040u;
            goto label_262040;
        }
    }
    ctx->pc = 0x262028u;
label_262028:
    // 0x262028: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x262028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x26202c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x26202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x262030: 0xae2206c8  sw          $v0, 0x6C8($s1)
    ctx->pc = 0x262030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 2));
    // 0x262034: 0x8e2206cc  lw          $v0, 0x6CC($s1)
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x262038: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x262038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x26203c: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x26203cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_262040:
    // 0x262040: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x262040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x262044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262048: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x262048u;
    {
        const bool branch_taken_0x262048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x262048) {
            ctx->pc = 0x2622E0u;
            goto label_2622e0;
        }
    }
    ctx->pc = 0x262050u;
    // 0x262050: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x262054: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x262054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x262058: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x262058u;
    {
        const bool branch_taken_0x262058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262058) {
            ctx->pc = 0x2622B8u;
            goto label_2622b8;
        }
    }
    ctx->pc = 0x262060u;
    // 0x262060: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x262060u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x262064: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x262064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x262068: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262068u;
    {
        const bool branch_taken_0x262068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262068u;
        // 0x26206c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262068) {
            ctx->pc = 0x262088u;
            goto label_262088;
        }
    }
    ctx->pc = 0x262070u;
    // 0x262070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262070u;
    {
        const bool branch_taken_0x262070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262070) {
            ctx->pc = 0x262088u;
            goto label_262088;
        }
    }
    ctx->pc = 0x262078u;
    // 0x262078: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x262078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26207c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x26207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x262080: 0x1462008d  bne         $v1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x262080u;
    {
        const bool branch_taken_0x262080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262080) {
            ctx->pc = 0x2622B8u;
            goto label_2622b8;
        }
    }
    ctx->pc = 0x262088u;
label_262088:
    // 0x262088: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x262088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26208c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262090: 0x80460038  lb          $a2, 0x38($v0)
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x262094: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x262094u;
    SET_GPR_U32(ctx, 31, 0x26209Cu);
    ctx->pc = 0x262098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262094u;
    // 0x262098: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x262094u, 0x26209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26209Cu;
label_26209c:
    // 0x26209c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2620a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2620a4: 0x2442f2e0  addiu       $v0, $v0, -0xD20
    ctx->pc = 0x2620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963936));
    // 0x2620a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2620a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2620ac: 0x922207b1  lbu         $v0, 0x7B1($s1)
    ctx->pc = 0x2620acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1969)));
    // 0x2620b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2620B0u;
    {
        const bool branch_taken_0x2620b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B0u;
        // 0x2620b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620b0) {
            ctx->pc = 0x2620C4u;
            goto label_2620c4;
        }
    }
    ctx->pc = 0x2620B8u;
    // 0x2620b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2620b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2620bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2620BCu;
    {
        const bool branch_taken_0x2620bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620BCu;
        // 0x2620c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620bc) {
            ctx->pc = 0x2620DCu;
            goto label_2620dc;
        }
    }
    ctx->pc = 0x2620C4u;
label_2620c4:
    // 0x2620c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2620c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2620c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2620c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2620cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2620ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2620d0: 0x0  nop
    ctx->pc = 0x2620d0u;
    // NOP
    // 0x2620d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2620d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2620d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2620d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2620dc:
    // 0x2620dc: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x2620e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2620e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2620e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2620e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2620e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2620e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2620ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2620ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2620f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2620f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2620f4: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x2620f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2620f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2620fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2620fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x262100: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x262100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x262104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262104u;
    {
        const bool branch_taken_0x262104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262104u;
        // 0x262108: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262104) {
            ctx->pc = 0x262128u;
            goto label_262128;
        }
    }
    ctx->pc = 0x26210Cu;
    // 0x26210c: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x26210cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x262110: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x262110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x262114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262114u;
    {
        const bool branch_taken_0x262114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262114u;
        // 0x262118: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262114) {
            ctx->pc = 0x262128u;
            goto label_262128;
        }
    }
    ctx->pc = 0x26211Cu;
    // 0x26211c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26211cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262120: 0x0  nop
    ctx->pc = 0x262120u;
    // NOP
    // 0x262124: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x262124u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_262128:
    // 0x262128: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x262128u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x26212c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262130: 0x9382894c  lbu         $v0, -0x76B4($gp)
    ctx->pc = 0x262130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936908)));
    // 0x262134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262138: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26213c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x262140: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x262144: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x262144u;
    SET_GPR_U32(ctx, 31, 0x26214Cu);
    ctx->pc = 0x262148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262144u;
    // 0x262148: 0xa382894c  sb          $v0, -0x76B4($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936908), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x262144u, 0x26214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26214Cu;
label_26214c:
    // 0x26214c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x26214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x262150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262154: 0xc096964  jal         func_25A590
    ctx->pc = 0x262154u;
    SET_GPR_U32(ctx, 31, 0x26215Cu);
    ctx->pc = 0x262158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262154u;
    // 0x262158: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x262154u, 0x26215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26215Cu;
label_26215c:
    // 0x26215c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26215cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x262160: 0xc09d8f0  jal         func_2763C0
    ctx->pc = 0x262160u;
    SET_GPR_U32(ctx, 31, 0x262168u);
    ctx->pc = 0x262164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262160u;
    // 0x262164: 0x26242900  addiu       $a0, $s1, 0x2900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2763C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2763C0u, 0x262160u, 0x262168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262168u;
label_262168:
    // 0x262168: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x26216c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x26216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x262170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x262170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262178: 0x0  nop
    ctx->pc = 0x262178u;
    // NOP
    // 0x26217c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x26217cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x262180: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x262180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262184: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x262184u;
    {
        const bool branch_taken_0x262184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262184) {
            ctx->pc = 0x26219Cu;
            goto label_26219c;
        }
    }
    ctx->pc = 0x26218Cu;
    // 0x26218c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26218cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262190: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x262190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262194u;
    {
        const bool branch_taken_0x262194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262194u;
        // 0x262198: 0xa2232902  sb          $v1, 0x2902($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10498), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262194) {
            ctx->pc = 0x2621B8u;
            goto label_2621b8;
        }
    }
    ctx->pc = 0x26219Cu;
label_26219c:
    // 0x26219c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26219cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2621a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2621a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2621a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2621a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2621a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2621ac: 0x0  nop
    ctx->pc = 0x2621acu;
    // NOP
    // 0x2621b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2621b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2621b4: 0xa2232902  sb          $v1, 0x2902($s1)
    ctx->pc = 0x2621b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10498), (uint8_t)GPR_U32(ctx, 3));
label_2621b8:
    // 0x2621b8: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x2621b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x2621bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2621bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2621c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2621C0u;
    {
        const bool branch_taken_0x2621c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2621c0) {
            ctx->pc = 0x2621D0u;
            goto label_2621d0;
        }
    }
    ctx->pc = 0x2621C8u;
    // 0x2621c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2621C8u;
    {
        const bool branch_taken_0x2621c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621C8u;
        // 0x2621cc: 0xa6202908  sh          $zero, 0x2908($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621c8) {
            ctx->pc = 0x2622E0u;
            goto label_2622e0;
        }
    }
    ctx->pc = 0x2621D0u;
label_2621d0:
    // 0x2621d0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2621d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2621d4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2621d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2621d8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2621D8u;
    {
        const bool branch_taken_0x2621d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2621d8) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x2621E0u;
    // 0x2621e0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2621e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2621e4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2621e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2621e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2621e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2621ec: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2621ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2621f0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2621f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2621f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2621f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2621f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2621f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2621fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2621fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262204: 0x0  nop
    ctx->pc = 0x262204u;
    // NOP
    // 0x262208: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x262208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26220c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26220cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262210: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x262210u;
    {
        const bool branch_taken_0x262210 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262210) {
            ctx->pc = 0x262228u;
            goto label_262228;
        }
    }
    ctx->pc = 0x262218u;
    // 0x262218: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26221c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26221cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262220: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262220u;
    {
        const bool branch_taken_0x262220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262220u;
        // 0x262224: 0xa6232908  sh          $v1, 0x2908($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10504), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262220) {
            ctx->pc = 0x262244u;
            goto label_262244;
        }
    }
    ctx->pc = 0x262228u;
label_262228:
    // 0x262228: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26222c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x262230: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262234: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x262234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262238: 0x0  nop
    ctx->pc = 0x262238u;
    // NOP
    // 0x26223c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x262240: 0xa6232908  sh          $v1, 0x2908($s1)
    ctx->pc = 0x262240u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10504), (uint16_t)GPR_U32(ctx, 3));
label_262244:
    // 0x262244: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x262244u;
    {
        const bool branch_taken_0x262244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262244) {
            ctx->pc = 0x2622E0u;
            goto label_2622e0;
        }
    }
    ctx->pc = 0x26224Cu;
    // 0x26224c: 0x0  nop
    ctx->pc = 0x26224cu;
    // NOP
label_262250:
    // 0x262250: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x262254: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x262254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262258: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x262258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x26225c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x26225cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x262260: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x262260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x262264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x262264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262268: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x262268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x26226c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26226cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262270: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x262270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x262274: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x262274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x262278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x262278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26227c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26227Cu;
    {
        const bool branch_taken_0x26227c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26227c) {
            ctx->pc = 0x262294u;
            goto label_262294;
        }
    }
    ctx->pc = 0x262284u;
    // 0x262284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262288: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x262288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26228c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26228Cu;
    {
        const bool branch_taken_0x26228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26228Cu;
        // 0x262290: 0xa6232908  sh          $v1, 0x2908($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10504), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26228c) {
            ctx->pc = 0x2622B0u;
            goto label_2622b0;
        }
    }
    ctx->pc = 0x262294u;
label_262294:
    // 0x262294: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26229c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26229cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2622a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2622a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2622a4: 0x0  nop
    ctx->pc = 0x2622a4u;
    // NOP
    // 0x2622a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2622a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2622ac: 0xa6232908  sh          $v1, 0x2908($s1)
    ctx->pc = 0x2622acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10504), (uint16_t)GPR_U32(ctx, 3));
label_2622b0:
    // 0x2622b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2622B0u;
    {
        const bool branch_taken_0x2622b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2622b0) {
            ctx->pc = 0x2622E0u;
            goto label_2622e0;
        }
    }
    ctx->pc = 0x2622B8u;
label_2622b8:
    // 0x2622b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2622b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2622bc: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x2622bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2622c0: 0x9382894c  lbu         $v0, -0x76B4($gp)
    ctx->pc = 0x2622c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936908)));
    // 0x2622c4: 0x601827  not         $v1, $v1
    ctx->pc = 0x2622c4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x2622c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2622c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2622cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2622ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2622d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2622d4: 0xc09d9b4  jal         func_2766D0
    ctx->pc = 0x2622D4u;
    SET_GPR_U32(ctx, 31, 0x2622DCu);
    ctx->pc = 0x2622D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622D4u;
    // 0x2622d8: 0xa382894c  sb          $v0, -0x76B4($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936908), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766D0u, 0x2622D4u, 0x2622DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622DCu;
label_2622dc:
    // 0x2622dc: 0x0  nop
    ctx->pc = 0x2622dcu;
    // NOP
label_2622e0:
    // 0x2622e0: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x2622e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x2622e4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2622e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2622E8u;
    {
        const bool branch_taken_0x2622e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2622e8) {
            ctx->pc = 0x262310u;
            goto label_262310;
        }
    }
    ctx->pc = 0x2622F0u;
    // 0x2622f0: 0x922207b2  lbu         $v0, 0x7B2($s1)
    ctx->pc = 0x2622f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1970)));
    // 0x2622f4: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2622f8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2622F8u;
    {
        const bool branch_taken_0x2622f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2622f8) {
            ctx->pc = 0x262318u;
            goto label_262318;
        }
    }
    ctx->pc = 0x262300u;
    // 0x262300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262304u;
        // 0x262308: 0xa22207b2  sb          $v0, 0x7B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1970), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262304) {
            ctx->pc = 0x262318u;
            goto label_262318;
        }
    }
    ctx->pc = 0x26230Cu;
    // 0x26230c: 0x0  nop
    ctx->pc = 0x26230cu;
    // NOP
label_262310:
    // 0x262310: 0xa22007b2  sb          $zero, 0x7B2($s1)
    ctx->pc = 0x262310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1970), (uint8_t)GPR_U32(ctx, 0));
    // 0x262314: 0x0  nop
    ctx->pc = 0x262314u;
    // NOP
label_262318:
    // 0x262318: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x262318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26231c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x26231cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262320u;
    {
        const bool branch_taken_0x262320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262320) {
            ctx->pc = 0x262338u;
            goto label_262338;
        }
    }
    ctx->pc = 0x262328u;
    // 0x262328: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x26232c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x26232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x262330: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x262330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x262334: 0x0  nop
    ctx->pc = 0x262334u;
    // NOP
label_262338:
    // 0x262338: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x262338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26233c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x262340: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x262340u;
    {
        const bool branch_taken_0x262340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262340u;
        // 0x262344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262340) {
            ctx->pc = 0x2623C0u;
            goto label_2623c0;
        }
    }
    ctx->pc = 0x262348u;
    // 0x262348: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262348u;
    SET_GPR_U32(ctx, 31, 0x262350u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262348u, 0x262350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262350u;
label_262350:
    // 0x262350: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x262350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x262354: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262358: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x262358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x26235c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x26235cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262360: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x262360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x262364: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x262364u;
    {
        const bool branch_taken_0x262364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x262364) {
            ctx->pc = 0x262378u;
            goto label_262378;
        }
    }
    ctx->pc = 0x26236Cu;
    // 0x26236c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x26236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x262370: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x262370u;
    {
        const bool branch_taken_0x262370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262370u;
        // 0x262374: 0xa22207f7  sb          $v0, 0x7F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2039), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262370) {
            ctx->pc = 0x2623C0u;
            goto label_2623c0;
        }
    }
    ctx->pc = 0x262378u;
label_262378:
    // 0x262378: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x262378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x26237c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262380: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x262380u;
    {
        const bool branch_taken_0x262380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262380u;
        // 0x262384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262380) {
            ctx->pc = 0x2623B8u;
            goto label_2623b8;
        }
    }
    ctx->pc = 0x262388u;
    // 0x262388: 0xc0a7344  jal         func_29CD10
    ctx->pc = 0x262388u;
    SET_GPR_U32(ctx, 31, 0x262390u);
    ctx->pc = 0x26238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262388u;
    // 0x26238c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD10u, 0x262388u, 0x262390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262390u;
label_262390:
    // 0x262390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262390u;
    {
        const bool branch_taken_0x262390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262390) {
            ctx->pc = 0x2623A8u;
            goto label_2623a8;
        }
    }
    ctx->pc = 0x262398u;
    // 0x262398: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26239c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26239Cu;
    {
        const bool branch_taken_0x26239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26239Cu;
        // 0x2623a0: 0xa22207f7  sb          $v0, 0x7F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2039), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26239c) {
            ctx->pc = 0x2623C0u;
            goto label_2623c0;
        }
    }
    ctx->pc = 0x2623A4u;
    // 0x2623a4: 0x0  nop
    ctx->pc = 0x2623a4u;
    // NOP
label_2623a8:
    // 0x2623a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2623ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2623ACu;
    {
        const bool branch_taken_0x2623ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623ACu;
        // 0x2623b0: 0xa22207f7  sb          $v0, 0x7F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2039), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623ac) {
            ctx->pc = 0x2623C0u;
            goto label_2623c0;
        }
    }
    ctx->pc = 0x2623B4u;
    // 0x2623b4: 0x0  nop
    ctx->pc = 0x2623b4u;
    // NOP
label_2623b8:
    // 0x2623b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2623b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2623bc: 0xa22207f7  sb          $v0, 0x7F7($s1)
    ctx->pc = 0x2623bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2039), (uint8_t)GPR_U32(ctx, 2));
label_2623c0:
    // 0x2623c0: 0xc0986f0  jal         func_261BC0
    ctx->pc = 0x2623C0u;
    SET_GPR_U32(ctx, 31, 0x2623C8u);
    ctx->pc = 0x2623C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623C0u;
    // 0x2623c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BC0u, 0x2623C0u, 0x2623C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623C8u;
label_2623c8:
    // 0x2623c8: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x2623c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x2623cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2623d0: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2623D0u;
    {
        const bool branch_taken_0x2623d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2623d0) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x2623D8u;
    // 0x2623d8: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2623dc: 0x94700000  lhu         $s0, 0x0($v1)
    ctx->pc = 0x2623dcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2623e0: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2623E0u;
    {
        const bool branch_taken_0x2623e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623e0) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x2623E8u;
    // 0x2623e8: 0x9063003a  lbu         $v1, 0x3A($v1)
    ctx->pc = 0x2623e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x2623ec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2623ECu;
    {
        const bool branch_taken_0x2623ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2623ec) {
            ctx->pc = 0x262438u;
            goto label_262438;
        }
    }
    ctx->pc = 0x2623F4u;
    // 0x2623f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2623f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2623F8u;
    {
        const bool branch_taken_0x2623f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2623f8) {
            ctx->pc = 0x262408u;
            goto label_262408;
        }
    }
    ctx->pc = 0x262400u;
    // 0x262400: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x262400u;
    {
        const bool branch_taken_0x262400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262400) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262408u;
label_262408:
    // 0x262408: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x262408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26240c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x26240Cu;
    {
        const bool branch_taken_0x26240c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26240c) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262414u;
    // 0x262414: 0x962206d6  lhu         $v0, 0x6D6($s1)
    ctx->pc = 0x262414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x262418: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x262418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26241c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26241Cu;
    {
        const bool branch_taken_0x26241c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26241Cu;
        // 0x262420: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26241c) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262424u;
    // 0x262424: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x262424u;
    SET_GPR_U32(ctx, 31, 0x26242Cu);
    ctx->pc = 0x262428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262424u;
    // 0x262428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x262424u, 0x26242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26242Cu;
label_26242c:
    // 0x26242c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x26242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x262430: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x262430u;
    {
        const bool branch_taken_0x262430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262430u;
        // 0x262434: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262430) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262438u;
label_262438:
    // 0x262438: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262438u;
    SET_GPR_U32(ctx, 31, 0x262440u);
    ctx->pc = 0x26243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262438u;
    // 0x26243c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262438u, 0x262440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262440u;
label_262440:
    // 0x262440: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x262444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262448: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x262448u;
    SET_GPR_U32(ctx, 31, 0x262450u);
    ctx->pc = 0x26244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262448u;
    // 0x26244c: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x262448u, 0x262450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262450u;
label_262450:
    // 0x262450: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x262454: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x262454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x262458: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x262458u;
    {
        const bool branch_taken_0x262458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x262458) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262460u;
    // 0x262460: 0x962306d6  lhu         $v1, 0x6D6($s1)
    ctx->pc = 0x262460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x262464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262468: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x262468u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26246c: 0x0  nop
    ctx->pc = 0x26246cu;
    // NOP
    // 0x262470: 0x0  nop
    ctx->pc = 0x262470u;
    // NOP
    // 0x262474: 0x1010  mfhi        $v0
    ctx->pc = 0x262474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x262478: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x262478u;
    {
        const bool branch_taken_0x262478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262478u;
        // 0x26247c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262478) {
            ctx->pc = 0x2624A8u;
            goto label_2624a8;
        }
    }
    ctx->pc = 0x262480u;
    // 0x262480: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262480u;
    SET_GPR_U32(ctx, 31, 0x262488u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262480u, 0x262488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262488u;
label_262488:
    // 0x262488: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x262488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26248c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x26248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x262490: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x262490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262494: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x262494u;
    SET_GPR_U32(ctx, 31, 0x26249Cu);
    ctx->pc = 0x262498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262494u;
    // 0x262498: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x262494u, 0x26249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26249Cu;
label_26249c:
    // 0x26249c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x26249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2624a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2624a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2624a4: 0x0  nop
    ctx->pc = 0x2624a4u;
    // NOP
label_2624a8:
    // 0x2624a8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2624ac: 0x9445003e  lhu         $a1, 0x3E($v0)
    ctx->pc = 0x2624acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2624b0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2624B0u;
    SET_GPR_U32(ctx, 31, 0x2624B8u);
    ctx->pc = 0x2624B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624B0u;
    // 0x2624b4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2624B0u, 0x2624B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624B8u;
label_2624b8:
    // 0x2624b8: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2624bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2624bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2624c0: 0x248424d0  addiu       $a0, $a0, 0x24D0
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9424));
    // 0x2624c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2624c8: 0xa4a2003e  sh          $v0, 0x3E($a1)
    ctx->pc = 0x2624c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x2624cc: 0x9225065c  lbu         $a1, 0x65C($s1)
    ctx->pc = 0x2624ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x2624d0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2624d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2624d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2624d8: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2624D8u;
    {
        const bool branch_taken_0x2624d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2624d8) {
            ctx->pc = 0x262600u;
            goto label_262600;
        }
    }
    ctx->pc = 0x2624E0u;
    // 0x2624e0: 0x24a2ff0e  addiu       $v0, $a1, -0xF2
    ctx->pc = 0x2624e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967054));
    // 0x2624e4: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2624e8: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x2624E8u;
    {
        const bool branch_taken_0x2624e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624E8u;
        // 0x2624ec: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624e8) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x2624F0u;
    // 0x2624f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2624f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2624f4: 0x2463f2f0  addiu       $v1, $v1, -0xD10
    ctx->pc = 0x2624f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
    // 0x2624f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2624f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2624fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262500: 0x400008  jr          $v0
    ctx->pc = 0x262500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262508u: goto label_262508;
            case 0x262518u: goto label_262518;
            case 0x262530u: goto label_262530;
            case 0x262548u: goto label_262548;
            case 0x262560u: goto label_262560;
            case 0x262570u: goto label_262570;
            case 0x262580u: goto label_262580;
            case 0x262598u: goto label_262598;
            case 0x2625B0u: goto label_2625b0;
            case 0x2625C8u: goto label_2625c8;
            case 0x2625D8u: goto label_2625d8;
            case 0x2625F0u: goto label_2625f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262500u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262508u;
label_262508:
    // 0x262508: 0xc0adaf0  jal         func_2B6BC0
    ctx->pc = 0x262508u;
    SET_GPR_U32(ctx, 31, 0x262510u);
    ctx->pc = 0x26250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262508u;
    // 0x26250c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6BC0u, 0x262508u, 0x262510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262510u;
label_262510:
    // 0x262510: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x262510u;
    {
        const bool branch_taken_0x262510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262510) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262518u;
label_262518:
    // 0x262518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26251c: 0xc0addf4  jal         func_2B77D0
    ctx->pc = 0x26251Cu;
    SET_GPR_U32(ctx, 31, 0x262524u);
    ctx->pc = 0x262520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26251Cu;
    // 0x262520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77D0u, 0x26251Cu, 0x262524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262524u;
label_262524:
    // 0x262524: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x262524u;
    {
        const bool branch_taken_0x262524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262524) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x26252Cu;
    // 0x26252c: 0x0  nop
    ctx->pc = 0x26252cu;
    // NOP
label_262530:
    // 0x262530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262534: 0xc0addf4  jal         func_2B77D0
    ctx->pc = 0x262534u;
    SET_GPR_U32(ctx, 31, 0x26253Cu);
    ctx->pc = 0x262538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262534u;
    // 0x262538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77D0u, 0x262534u, 0x26253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26253Cu;
label_26253c:
    // 0x26253c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26253Cu;
    {
        const bool branch_taken_0x26253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26253c) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262544u;
    // 0x262544: 0x0  nop
    ctx->pc = 0x262544u;
    // NOP
label_262548:
    // 0x262548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26254c: 0xc0addf4  jal         func_2B77D0
    ctx->pc = 0x26254Cu;
    SET_GPR_U32(ctx, 31, 0x262554u);
    ctx->pc = 0x262550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26254Cu;
    // 0x262550: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77D0u, 0x26254Cu, 0x262554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262554u;
label_262554:
    // 0x262554: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x262554u;
    {
        const bool branch_taken_0x262554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262554) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x26255Cu;
    // 0x26255c: 0x0  nop
    ctx->pc = 0x26255cu;
    // NOP
label_262560:
    // 0x262560: 0xc0adf58  jal         func_2B7D60
    ctx->pc = 0x262560u;
    SET_GPR_U32(ctx, 31, 0x262568u);
    ctx->pc = 0x262564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262560u;
    // 0x262564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D60u, 0x262560u, 0x262568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262568u;
label_262568:
    // 0x262568: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x262568u;
    {
        const bool branch_taken_0x262568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262568) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262570u;
label_262570:
    // 0x262570: 0xc0ae31c  jal         func_2B8C70
    ctx->pc = 0x262570u;
    SET_GPR_U32(ctx, 31, 0x262578u);
    ctx->pc = 0x262574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262570u;
    // 0x262574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C70u, 0x262570u, 0x262578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262578u;
label_262578:
    // 0x262578: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x262578u;
    {
        const bool branch_taken_0x262578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262578) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262580u;
label_262580:
    // 0x262580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262584: 0xc0ae320  jal         func_2B8C80
    ctx->pc = 0x262584u;
    SET_GPR_U32(ctx, 31, 0x26258Cu);
    ctx->pc = 0x262588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262584u;
    // 0x262588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C80u, 0x262584u, 0x26258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26258Cu;
label_26258c:
    // 0x26258c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26258Cu;
    {
        const bool branch_taken_0x26258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26258c) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262594u;
    // 0x262594: 0x0  nop
    ctx->pc = 0x262594u;
    // NOP
label_262598:
    // 0x262598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26259c: 0xc0ae320  jal         func_2B8C80
    ctx->pc = 0x26259Cu;
    SET_GPR_U32(ctx, 31, 0x2625A4u);
    ctx->pc = 0x2625A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26259Cu;
    // 0x2625a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C80u, 0x26259Cu, 0x2625A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625A4u;
label_2625a4:
    // 0x2625a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2625A4u;
    {
        const bool branch_taken_0x2625a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625a4) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x2625ACu;
    // 0x2625ac: 0x0  nop
    ctx->pc = 0x2625acu;
    // NOP
label_2625b0:
    // 0x2625b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625b4: 0xc0ae320  jal         func_2B8C80
    ctx->pc = 0x2625B4u;
    SET_GPR_U32(ctx, 31, 0x2625BCu);
    ctx->pc = 0x2625B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625B4u;
    // 0x2625b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C80u, 0x2625B4u, 0x2625BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625BCu;
label_2625bc:
    // 0x2625bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2625BCu;
    {
        const bool branch_taken_0x2625bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625bc) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x2625C4u;
    // 0x2625c4: 0x0  nop
    ctx->pc = 0x2625c4u;
    // NOP
label_2625c8:
    // 0x2625c8: 0xc0ae328  jal         func_2B8CA0
    ctx->pc = 0x2625C8u;
    SET_GPR_U32(ctx, 31, 0x2625D0u);
    ctx->pc = 0x2625CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625C8u;
    // 0x2625cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CA0u, 0x2625C8u, 0x2625D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625D0u;
label_2625d0:
    // 0x2625d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2625D0u;
    {
        const bool branch_taken_0x2625d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625d0) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x2625D8u;
label_2625d8:
    // 0x2625d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2625d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625dc: 0xc0ad960  jal         func_2B6580
    ctx->pc = 0x2625DCu;
    SET_GPR_U32(ctx, 31, 0x2625E4u);
    ctx->pc = 0x2625E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625DCu;
    // 0x2625e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6580u, 0x2625DCu, 0x2625E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625E4u;
label_2625e4:
    // 0x2625e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2625E4u;
    {
        const bool branch_taken_0x2625e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625e4) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x2625ECu;
    // 0x2625ec: 0x0  nop
    ctx->pc = 0x2625ecu;
    // NOP
label_2625f0:
    // 0x2625f0: 0xc0ae5a8  jal         func_2B96A0
    ctx->pc = 0x2625F0u;
    SET_GPR_U32(ctx, 31, 0x2625F8u);
    ctx->pc = 0x2625F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625F0u;
    // 0x2625f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B96A0u, 0x2625F0u, 0x2625F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625F8u;
label_2625f8:
    // 0x2625f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2625F8u;
    {
        const bool branch_taken_0x2625f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625f8) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262600u;
label_262600:
    // 0x262600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x262600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x262604: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262604u;
    {
        const bool branch_taken_0x262604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x262604) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x26260Cu;
    // 0x26260c: 0x92252abe  lbu         $a1, 0x2ABE($s1)
    ctx->pc = 0x26260cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10942)));
    // 0x262610: 0xc0ad318  jal         func_2B4C60
    ctx->pc = 0x262610u;
    SET_GPR_U32(ctx, 31, 0x262618u);
    ctx->pc = 0x262614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262610u;
    // 0x262614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C60u, 0x262610u, 0x262618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262618u;
label_262618:
    // 0x262618: 0xde220690  ld          $v0, 0x690($s1)
    ctx->pc = 0x262618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x26261c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x262620: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262620u;
    {
        const bool branch_taken_0x262620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262620) {
            ctx->pc = 0x262640u;
            goto label_262640;
        }
    }
    ctx->pc = 0x262628u;
    // 0x262628: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x262628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x26262c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x262630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262630u;
    {
        const bool branch_taken_0x262630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262630u;
        // 0x262634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262630) {
            ctx->pc = 0x262640u;
            goto label_262640;
        }
    }
    ctx->pc = 0x262638u;
    // 0x262638: 0xc0a27ec  jal         func_289FB0
    ctx->pc = 0x262638u;
    SET_GPR_U32(ctx, 31, 0x262640u);
    ctx->pc = 0x289FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289FB0u, 0x262638u, 0x262640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262640u;
label_262640:
    // 0x262640: 0x96220900  lhu         $v0, 0x900($s1)
    ctx->pc = 0x262640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2304)));
    // 0x262644: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x262644u;
    {
        const bool branch_taken_0x262644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262644) {
            ctx->pc = 0x262688u;
            goto label_262688;
        }
    }
    ctx->pc = 0x26264Cu;
    // 0x26264c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x262650: 0xa6220900  sh          $v0, 0x900($s1)
    ctx->pc = 0x262650u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2304), (uint16_t)GPR_U32(ctx, 2));
    // 0x262654: 0x922308fe  lbu         $v1, 0x8FE($s1)
    ctx->pc = 0x262654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2302)));
    // 0x262658: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x262658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x26265c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26265Cu;
    {
        const bool branch_taken_0x26265c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26265Cu;
        // 0x262660: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26265c) {
            ctx->pc = 0x262688u;
            goto label_262688;
        }
    }
    ctx->pc = 0x262664u;
    // 0x262664: 0x26260910  addiu       $a2, $s1, 0x910
    ctx->pc = 0x262664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
    // 0x262668: 0xc0414ca  jal         func_105328
    ctx->pc = 0x262668u;
    SET_GPR_U32(ctx, 31, 0x262670u);
    ctx->pc = 0x26266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262668u;
    // 0x26266c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x262668u, 0x262670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262670u;
label_262670:
    // 0x262670: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x262670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x262674: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x262674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
    // 0x262678: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x262678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x26267c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26267cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262680: 0xc0414dc  jal         func_105370
    ctx->pc = 0x262680u;
    SET_GPR_U32(ctx, 31, 0x262688u);
    ctx->pc = 0x262684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262680u;
    // 0x262684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x262680u, 0x262688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262688u;
label_262688:
    // 0x262688: 0x92220922  lbu         $v0, 0x922($s1)
    ctx->pc = 0x262688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2338)));
    // 0x26268c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26268Cu;
    {
        const bool branch_taken_0x26268c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26268c) {
            ctx->pc = 0x2626D0u;
            goto label_2626d0;
        }
    }
    ctx->pc = 0x262694u;
    // 0x262694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x262694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x262698: 0xa2220922  sb          $v0, 0x922($s1)
    ctx->pc = 0x262698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2338), (uint8_t)GPR_U32(ctx, 2));
    // 0x26269c: 0x92230923  lbu         $v1, 0x923($s1)
    ctx->pc = 0x26269cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2339)));
    // 0x2626a0: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x2626a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x2626a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2626A4u;
    {
        const bool branch_taken_0x2626a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2626a4) {
            ctx->pc = 0x2626D0u;
            goto label_2626d0;
        }
    }
    ctx->pc = 0x2626ACu;
    // 0x2626ac: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x2626b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2626b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2626b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2626B4u;
    {
        const bool branch_taken_0x2626b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2626b4) {
            ctx->pc = 0x2626D0u;
            goto label_2626d0;
        }
    }
    ctx->pc = 0x2626BCu;
    // 0x2626bc: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2626c0: 0x86220920  lh          $v0, 0x920($s1)
    ctx->pc = 0x2626c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2336)));
    // 0x2626c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2626c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2626c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2626cc: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x2626ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
label_2626d0:
    // 0x2626d0: 0xc0a5c00  jal         func_297000
    ctx->pc = 0x2626D0u;
    SET_GPR_U32(ctx, 31, 0x2626D8u);
    ctx->pc = 0x2626D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626D0u;
    // 0x2626d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297000u, 0x2626D0u, 0x2626D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626D8u;
label_2626d8:
    // 0x2626d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2626d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2626dc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2626dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2626e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2626e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2626e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2626e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2626e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2626E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626E8u;
        // 0x2626ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626F0u;
}
