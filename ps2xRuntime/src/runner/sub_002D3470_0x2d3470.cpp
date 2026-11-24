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

// Function: sub_002D3470
// Address: 0x2d3470 - 0x2d3864
void sub_002D3470_0x2d3470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3470_0x2d3470");
#endif

    switch (ctx->pc) {
        case 0x2d34b0u: goto label_2d34b0;
        case 0x2d34d0u: goto label_2d34d0;
        case 0x2d34e0u: goto label_2d34e0;
        case 0x2d3504u: goto label_2d3504;
        case 0x2d351cu: goto label_2d351c;
        case 0x2d35e0u: goto label_2d35e0;
        case 0x2d35f0u: goto label_2d35f0;
        case 0x2d3664u: goto label_2d3664;
        case 0x2d3674u: goto label_2d3674;
        case 0x2d36e0u: goto label_2d36e0;
        case 0x2d36f0u: goto label_2d36f0;
        case 0x2d3750u: goto label_2d3750;
        case 0x2d3808u: goto label_2d3808;
        case 0x2d3824u: goto label_2d3824;
        default: break;
    }

    ctx->pc = 0x2d3470u;

    // 0x2d3470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3474: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d3478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d347c: 0x244265e0  addiu       $v0, $v0, 0x65E0
    ctx->pc = 0x2d347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26080));
    // 0x2d3480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3484: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d3484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d3488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d348c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d348cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3490: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d3490u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E65E0u));
    // 0x2d3494: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d3494u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d3498: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d349c: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x2d349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x2d34a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D34A0u;
    {
        const bool branch_taken_0x2d34a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34A0u;
        // 0x2d34a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34a0) {
            ctx->pc = 0x2D34B8u;
            goto label_2d34b8;
        }
    }
    ctx->pc = 0x2D34A8u;
    // 0x2d34a8: 0xc0b4594  jal         func_2D1650
    ctx->pc = 0x2D34A8u;
    SET_GPR_U32(ctx, 31, 0x2D34B0u);
    ctx->pc = 0x2D1650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1650u, 0x2D34A8u, 0x2D34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34B0u;
label_2d34b0:
    // 0x2d34b0: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2D34B0u;
    {
        const bool branch_taken_0x2d34b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34b0) {
            ctx->pc = 0x2D3850u;
            goto label_2d3850;
        }
    }
    ctx->pc = 0x2D34B8u;
label_2d34b8:
    // 0x2d34b8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2d34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2d34bc: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x2d34bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2d34c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D34C0u;
    {
        const bool branch_taken_0x2d34c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d34c0) {
            ctx->pc = 0x2D34D8u;
            goto label_2d34d8;
        }
    }
    ctx->pc = 0x2D34C8u;
    // 0x2d34c8: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D34C8u;
    SET_GPR_U32(ctx, 31, 0x2D34D0u);
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D34C8u, 0x2D34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34D0u;
label_2d34d0:
    // 0x2d34d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D34D0u;
    {
        const bool branch_taken_0x2d34d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34d0) {
            ctx->pc = 0x2D34E0u;
            goto label_2d34e0;
        }
    }
    ctx->pc = 0x2D34D8u;
label_2d34d8:
    // 0x2d34d8: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D34D8u;
    SET_GPR_U32(ctx, 31, 0x2D34E0u);
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D34D8u, 0x2D34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34E0u;
label_2d34e0:
    // 0x2d34e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D34E0u;
    {
        const bool branch_taken_0x2d34e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34e0) {
            ctx->pc = 0x2D3510u;
            goto label_2d3510;
        }
    }
    ctx->pc = 0x2D34E8u;
    // 0x2d34e8: 0x90440640  lbu         $a0, 0x640($v0)
    ctx->pc = 0x2d34e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x2d34ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d34f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D34F0u;
    {
        const bool branch_taken_0x2d34f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34F0u;
        // 0x2d34f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34f0) {
            ctx->pc = 0x2D3510u;
            goto label_2d3510;
        }
    }
    ctx->pc = 0x2D34F8u;
    // 0x2d34f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34fc: 0xc0b43f4  jal         func_2D0FD0
    ctx->pc = 0x2D34FCu;
    SET_GPR_U32(ctx, 31, 0x2D3504u);
    ctx->pc = 0x2D3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34FCu;
    // 0x2d3500: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0FD0u, 0x2D34FCu, 0x2D3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3504u;
label_2d3504:
    // 0x2d3504: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3504u;
    {
        const bool branch_taken_0x2d3504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3504) {
            ctx->pc = 0x2D3528u;
            goto label_2d3528;
        }
    }
    ctx->pc = 0x2D350Cu;
    // 0x2d350c: 0x0  nop
    ctx->pc = 0x2d350cu;
    // NOP
label_2d3510:
    // 0x2d3510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3514: 0xc0b4594  jal         func_2D1650
    ctx->pc = 0x2D3514u;
    SET_GPR_U32(ctx, 31, 0x2D351Cu);
    ctx->pc = 0x2D3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3514u;
    // 0x2d3518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1650u, 0x2D3514u, 0x2D351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D351Cu;
label_2d351c:
    // 0x2d351c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2D351Cu;
    {
        const bool branch_taken_0x2d351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d351c) {
            ctx->pc = 0x2D3850u;
            goto label_2d3850;
        }
    }
    ctx->pc = 0x2D3524u;
    // 0x2d3524: 0x0  nop
    ctx->pc = 0x2d3524u;
    // NOP
label_2d3528:
    // 0x2d3528: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d3528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d352c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d3530: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2d3530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3534: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2d3534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d3538: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3538u;
    {
        const bool branch_taken_0x2d3538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3538) {
            ctx->pc = 0x2D3608u;
            goto label_2d3608;
        }
    }
    ctx->pc = 0x2D3540u;
    // 0x2d3540: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2d3540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d3544: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3544u;
    {
        const bool branch_taken_0x2d3544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3544) {
            ctx->pc = 0x2D3558u;
            goto label_2d3558;
        }
    }
    ctx->pc = 0x2D354Cu;
    // 0x2d354c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D354Cu;
    {
        const bool branch_taken_0x2d354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D354Cu;
        // 0x2d3550: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d354c) {
            ctx->pc = 0x2D3578u;
            goto label_2d3578;
        }
    }
    ctx->pc = 0x2D3554u;
    // 0x2d3554: 0x0  nop
    ctx->pc = 0x2d3554u;
    // NOP
label_2d3558:
    // 0x2d3558: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d355c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3560: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2d3560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2d3564: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d3564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d3568: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x2d3568u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2d356c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D356Cu;
    {
        const bool branch_taken_0x2d356c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d356c) {
            ctx->pc = 0x2D3578u;
            goto label_2d3578;
        }
    }
    ctx->pc = 0x2D3574u;
    // 0x2d3574: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d3574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2d3578:
    // 0x2d3578: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x2d3578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d357c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3580: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x2d3580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3584: 0x9224021c  lbu         $a0, 0x21C($s1)
    ctx->pc = 0x2d3584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2d3588: 0x9205002e  lbu         $a1, 0x2E($s0)
    ctx->pc = 0x2d3588u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d358c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d3590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d3590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3594: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d3594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d3598: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2d3598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d359c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D359Cu;
    {
        const bool branch_taken_0x2d359c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d359c) {
            ctx->pc = 0x2D35A8u;
            goto label_2d35a8;
        }
    }
    ctx->pc = 0x2D35A4u;
    // 0x2d35a4: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2d35a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
label_2d35a8:
    // 0x2d35a8: 0x9204002d  lbu         $a0, 0x2D($s0)
    ctx->pc = 0x2d35a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d35ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D35ACu;
    {
        const bool branch_taken_0x2d35ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35ACu;
        // 0x2d35b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35ac) {
            ctx->pc = 0x2D35D0u;
            goto label_2d35d0;
        }
    }
    ctx->pc = 0x2D35B4u;
    // 0x2d35b4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D35B4u;
    {
        const bool branch_taken_0x2d35b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d35b4) {
            ctx->pc = 0x2D35D0u;
            goto label_2d35d0;
        }
    }
    ctx->pc = 0x2D35BCu;
    // 0x2d35bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d35c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D35C0u;
    {
        const bool branch_taken_0x2d35c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d35c0) {
            ctx->pc = 0x2D35D0u;
            goto label_2d35d0;
        }
    }
    ctx->pc = 0x2D35C8u;
    // 0x2d35c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D35C8u;
    {
        const bool branch_taken_0x2d35c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d35c8) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D35D0u;
label_2d35d0:
    // 0x2d35d0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d35d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d35d8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D35D8u;
    SET_GPR_U32(ctx, 31, 0x2D35E0u);
    ctx->pc = 0x2D35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35D8u;
    // 0x2d35dc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D35D8u, 0x2D35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35E0u;
label_2d35e0:
    // 0x2d35e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d35e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d35e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35e8: 0xc0b4c80  jal         func_2D3200
    ctx->pc = 0x2D35E8u;
    SET_GPR_U32(ctx, 31, 0x2D35F0u);
    ctx->pc = 0x2D35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35E8u;
    // 0x2d35ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3200u, 0x2D35E8u, 0x2D35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35F0u;
label_2d35f0:
    // 0x2d35f0: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x2d35f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x2d35f4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D35F4u;
    {
        const bool branch_taken_0x2d35f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d35f4) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D35FCu;
    // 0x2d35fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d35fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3600: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D3600u;
    {
        const bool branch_taken_0x2d3600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3600u;
        // 0x2d3604: 0xa2030032  sb          $v1, 0x32($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3600) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D3608u;
label_2d3608:
    // 0x2d3608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d360c: 0xa204002c  sb          $a0, 0x2C($s0)
    ctx->pc = 0x2d360cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3610: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2d3610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d3614: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2d3614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d3618: 0x2c610014  sltiu       $at, $v1, 0x14
    ctx->pc = 0x2d3618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d361c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d3620: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2d3620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2d3624: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2d3624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3628: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D3628u;
    {
        const bool branch_taken_0x2d3628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3628u;
        // 0x2d362c: 0xa2000032  sb          $zero, 0x32($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3628) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D3630u;
    // 0x2d3630: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d3630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d3634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3638: 0x24847990  addiu       $a0, $a0, 0x7990
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31120));
    // 0x2d363c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3644: 0x600008  jr          $v1
    ctx->pc = 0x2D3644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3650u: goto label_2d3650;
            case 0x2D3688u: goto label_2d3688;
            case 0x2D3698u: goto label_2d3698;
            case 0x2D36A0u: goto label_2d36a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D364Cu;
    // 0x2d364c: 0x0  nop
    ctx->pc = 0x2d364cu;
    // NOP
label_2d3650:
    // 0x2d3650: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2d3650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3654: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d3658: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d3658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d365c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D365Cu;
    SET_GPR_U32(ctx, 31, 0x2D3664u);
    ctx->pc = 0x2D3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D365Cu;
    // 0x2d3660: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D365Cu, 0x2D3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3664u;
label_2d3664:
    // 0x2d3664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d3668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d366c: 0xc0b4c28  jal         func_2D30A0
    ctx->pc = 0x2D366Cu;
    SET_GPR_U32(ctx, 31, 0x2D3674u);
    ctx->pc = 0x2D3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D366Cu;
    // 0x2d3670: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D30A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30A0u, 0x2D366Cu, 0x2D3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3674u;
label_2d3674:
    // 0x2d3674: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d3674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3678: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2d3678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2d367c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D367Cu;
    {
        const bool branch_taken_0x2d367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D367Cu;
        // 0x2d3680: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d367c) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D3684u;
    // 0x2d3684: 0x0  nop
    ctx->pc = 0x2d3684u;
    // NOP
label_2d3688:
    // 0x2d3688: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d368c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D368Cu;
    {
        const bool branch_taken_0x2d368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D368Cu;
        // 0x2d3690: 0xa203002d  sb          $v1, 0x2D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d368c) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D3694u;
    // 0x2d3694: 0x0  nop
    ctx->pc = 0x2d3694u;
    // NOP
label_2d3698:
    // 0x2d3698: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d369c: 0xa203002d  sb          $v1, 0x2D($s0)
    ctx->pc = 0x2d369cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
label_2d36a0:
    // 0x2d36a0: 0x9204002d  lbu         $a0, 0x2D($s0)
    ctx->pc = 0x2d36a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d36a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d36a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D36A8u;
    {
        const bool branch_taken_0x2d36a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36A8u;
        // 0x2d36ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36a8) {
            ctx->pc = 0x2D36C8u;
            goto label_2d36c8;
        }
    }
    ctx->pc = 0x2D36B0u;
    // 0x2d36b0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D36B0u;
    {
        const bool branch_taken_0x2d36b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d36b0) {
            ctx->pc = 0x2D36C8u;
            goto label_2d36c8;
        }
    }
    ctx->pc = 0x2D36B8u;
    // 0x2d36b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D36B8u;
    {
        const bool branch_taken_0x2d36b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36b8) {
            ctx->pc = 0x2D36C8u;
            goto label_2d36c8;
        }
    }
    ctx->pc = 0x2D36C0u;
    // 0x2d36c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2D36C0u;
    {
        const bool branch_taken_0x2d36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36c0) {
            ctx->pc = 0x2D3828u;
            goto label_2d3828;
        }
    }
    ctx->pc = 0x2D36C8u;
label_2d36c8:
    // 0x2d36c8: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2d36c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d36cc: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x2d36ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2d36d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D36D0u;
    {
        const bool branch_taken_0x2d36d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36D0u;
        // 0x2d36d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36d0) {
            ctx->pc = 0x2D36E8u;
            goto label_2d36e8;
        }
    }
    ctx->pc = 0x2D36D8u;
    // 0x2d36d8: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D36D8u;
    SET_GPR_U32(ctx, 31, 0x2D36E0u);
    ctx->pc = 0x2D36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36D8u;
    // 0x2d36dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D36D8u, 0x2D36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36E0u;
label_2d36e0:
    // 0x2d36e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D36E0u;
    {
        const bool branch_taken_0x2d36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36e0) {
            ctx->pc = 0x2D36F0u;
            goto label_2d36f0;
        }
    }
    ctx->pc = 0x2D36E8u;
label_2d36e8:
    // 0x2d36e8: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D36E8u;
    SET_GPR_U32(ctx, 31, 0x2D36F0u);
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D36E8u, 0x2D36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36F0u;
label_2d36f0:
    // 0x2d36f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D36F0u;
    {
        const bool branch_taken_0x2d36f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36f0) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D36F8u;
    // 0x2d36f8: 0x8c4229c0  lw          $v0, 0x29C0($v0)
    ctx->pc = 0x2d36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2d36fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D36FCu;
    {
        const bool branch_taken_0x2d36fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36fc) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3704u;
    // 0x2d3704: 0x9043005f  lbu         $v1, 0x5F($v0)
    ctx->pc = 0x2d3704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x2d3708: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x2d370c: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x2d370cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x2d3710: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x2d3710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x2d3714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3718: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3718u;
    {
        const bool branch_taken_0x2d3718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3718) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3720u;
    // 0x2d3720: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x2d3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x2d3724: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D3724u;
    {
        const bool branch_taken_0x2d3724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3724) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D372Cu;
    // 0x2d372c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2d372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2d3730: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2d3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2d3734: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d3738: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3738u;
    {
        const bool branch_taken_0x2d3738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3738) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3740u;
    // 0x2d3740: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d3740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d3744: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d3744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d3748: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D3748u;
    SET_GPR_U32(ctx, 31, 0x2D3750u);
    ctx->pc = 0x2D374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3748u;
    // 0x2d374c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D3748u, 0x2D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3750u;
label_2d3750:
    // 0x2d3750: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3750u;
    {
        const bool branch_taken_0x2d3750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3750) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3758u;
    // 0x2d3758: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2d3758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d375c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3760: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3760u;
    {
        const bool branch_taken_0x2d3760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3760) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3768u;
    // 0x2d3768: 0x90422ab0  lbu         $v0, 0x2AB0($v0)
    ctx->pc = 0x2d3768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10928)));
    // 0x2d376c: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x2d376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x2d3770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3770u;
    {
        const bool branch_taken_0x2d3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3770) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D3778u;
    // 0x2d3778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d377c: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x2d377cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
label_2d3780:
    // 0x2d3780: 0x92040032  lbu         $a0, 0x32($s0)
    ctx->pc = 0x2d3780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x2d3784: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3784u;
    {
        const bool branch_taken_0x2d3784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3784u;
        // 0x2d3788: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3784) {
            ctx->pc = 0x2D3810u;
            goto label_2d3810;
        }
    }
    ctx->pc = 0x2D378Cu;
    // 0x2d378c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3790: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3790u;
    {
        const bool branch_taken_0x2d3790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3790) {
            ctx->pc = 0x2D37A8u;
            goto label_2d37a8;
        }
    }
    ctx->pc = 0x2D3798u;
    // 0x2d3798: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2d3798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d379c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D379Cu;
    {
        const bool branch_taken_0x2d379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D379Cu;
        // 0x2d37a0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d379c) {
            ctx->pc = 0x2D3818u;
            goto label_2d3818;
        }
    }
    ctx->pc = 0x2D37A4u;
    // 0x2d37a4: 0x0  nop
    ctx->pc = 0x2d37a4u;
    // NOP
label_2d37a8:
    // 0x2d37a8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2d37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2d37ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2d37acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2d37b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d37b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d37b4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D37B4u;
    {
        const bool branch_taken_0x2d37b4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2D37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37B4u;
        // 0x2d37b8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37b4) {
            ctx->pc = 0x2D37C8u;
            goto label_2d37c8;
        }
    }
    ctx->pc = 0x2D37BCu;
    // 0x2d37bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d37bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d37c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D37C0u;
    {
        const bool branch_taken_0x2d37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37C0u;
        // 0x2d37c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37c0) {
            ctx->pc = 0x2D37E0u;
            goto label_2d37e0;
        }
    }
    ctx->pc = 0x2D37C8u;
label_2d37c8:
    // 0x2d37c8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2d37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d37cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d37ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d37d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d37d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d37d4: 0x0  nop
    ctx->pc = 0x2d37d4u;
    // NOP
    // 0x2d37d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d37d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d37dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d37dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d37e0:
    // 0x2d37e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d37e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d37e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d37e8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2d37e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d37ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d37ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d37f0: 0x0  nop
    ctx->pc = 0x2d37f0u;
    // NOP
    // 0x2d37f4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2d37f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d37f8: 0x0  nop
    ctx->pc = 0x2d37f8u;
    // NOP
    // 0x2d37fc: 0x0  nop
    ctx->pc = 0x2d37fcu;
    // NOP
    // 0x2d3800: 0xc0b4264  jal         func_2D0990
    ctx->pc = 0x2D3800u;
    SET_GPR_U32(ctx, 31, 0x2D3808u);
    ctx->pc = 0x2D0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0990u, 0x2D3800u, 0x2D3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3808u;
label_2d3808:
    // 0x2d3808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3808u;
    {
        const bool branch_taken_0x2d3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3808u;
        // 0x2d380c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3808) {
            ctx->pc = 0x2D3818u;
            goto label_2d3818;
        }
    }
    ctx->pc = 0x2D3810u;
label_2d3810:
    // 0x2d3810: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3814: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d3814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2d3818:
    // 0x2d3818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d381c: 0xc0b4cdc  jal         func_2D3370
    ctx->pc = 0x2D381Cu;
    SET_GPR_U32(ctx, 31, 0x2D3824u);
    ctx->pc = 0x2D3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D381Cu;
    // 0x2d3820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3370u, 0x2D381Cu, 0x2D3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3824u;
label_2d3824:
    // 0x2d3824: 0x0  nop
    ctx->pc = 0x2d3824u;
    // NOP
label_2d3828:
    // 0x2d3828: 0x9223021c  lbu         $v1, 0x21C($s1)
    ctx->pc = 0x2d3828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2d382c: 0x9205002e  lbu         $a1, 0x2E($s0)
    ctx->pc = 0x2d382cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d3830: 0x9204002d  lbu         $a0, 0x2D($s0)
    ctx->pc = 0x2d3830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d3834: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x2d3834u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d3838: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d3838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d383c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3840: 0x2812  mflo        $a1
    ctx->pc = 0x2d3840u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2d3844: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d3848: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d384c: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x2d384cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
label_2d3850:
    // 0x2d3850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d385c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D385Cu;
        // 0x2d3860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3864u;
}
