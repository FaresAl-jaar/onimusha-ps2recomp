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

// Function: sub_003AC4D0
// Address: 0x3ac4d0 - 0x3aca54
void sub_003AC4D0_0x3ac4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC4D0_0x3ac4d0");
#endif

    switch (ctx->pc) {
        case 0x3ac508u: goto label_3ac508;
        case 0x3ac524u: goto label_3ac524;
        case 0x3ac57cu: goto label_3ac57c;
        case 0x3ac604u: goto label_3ac604;
        case 0x3ac628u: goto label_3ac628;
        case 0x3ac670u: goto label_3ac670;
        case 0x3ac704u: goto label_3ac704;
        case 0x3ac718u: goto label_3ac718;
        case 0x3ac720u: goto label_3ac720;
        case 0x3ac748u: goto label_3ac748;
        case 0x3ac7a4u: goto label_3ac7a4;
        case 0x3ac7fcu: goto label_3ac7fc;
        case 0x3ac81cu: goto label_3ac81c;
        case 0x3ac83cu: goto label_3ac83c;
        case 0x3ac870u: goto label_3ac870;
        case 0x3ac88cu: goto label_3ac88c;
        case 0x3ac8acu: goto label_3ac8ac;
        case 0x3ac8e8u: goto label_3ac8e8;
        case 0x3ac914u: goto label_3ac914;
        case 0x3ac944u: goto label_3ac944;
        case 0x3ac974u: goto label_3ac974;
        case 0x3ac988u: goto label_3ac988;
        case 0x3ac9f8u: goto label_3ac9f8;
        case 0x3aca38u: goto label_3aca38;
        default: break;
    }

    ctx->pc = 0x3ac4d0u;

    // 0x3ac4d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ac4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ac4d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ac4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac4d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ac4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3ac4dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ac4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ac4e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ac4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ac4e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ac4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ac4e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ac4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ac4ec: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3ac4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3ac4f0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC4F0u;
    {
        const bool branch_taken_0x3ac4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4F0u;
        // 0x3ac4f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4f0) {
            ctx->pc = 0x3AC510u;
            goto label_3ac510;
        }
    }
    ctx->pc = 0x3AC4F8u;
    // 0x3ac4f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac500: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC500u;
    SET_GPR_U32(ctx, 31, 0x3AC508u);
    ctx->pc = 0x3AC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC500u;
    // 0x3ac504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC500u, 0x3AC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC508u;
label_3ac508:
    // 0x3ac508: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3AC508u;
    {
        const bool branch_taken_0x3ac508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac508) {
            ctx->pc = 0x3AC580u;
            goto label_3ac580;
        }
    }
    ctx->pc = 0x3AC510u;
label_3ac510:
    // 0x3ac510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ac510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac514: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC514u;
    {
        const bool branch_taken_0x3ac514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC514u;
        // 0x3ac518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac514) {
            ctx->pc = 0x3AC530u;
            goto label_3ac530;
        }
    }
    ctx->pc = 0x3AC51Cu;
    // 0x3ac51c: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC51Cu;
    SET_GPR_U32(ctx, 31, 0x3AC524u);
    ctx->pc = 0x3AC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC51Cu;
    // 0x3ac520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC51Cu, 0x3AC524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC524u;
label_3ac524:
    // 0x3ac524: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3AC524u;
    {
        const bool branch_taken_0x3ac524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac524) {
            ctx->pc = 0x3AC580u;
            goto label_3ac580;
        }
    }
    ctx->pc = 0x3AC52Cu;
    // 0x3ac52c: 0x0  nop
    ctx->pc = 0x3ac52cu;
    // NOP
label_3ac530:
    // 0x3ac530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ac530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac534: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC534u;
    {
        const bool branch_taken_0x3ac534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ac534) {
            ctx->pc = 0x3AC580u;
            goto label_3ac580;
        }
    }
    ctx->pc = 0x3AC53Cu;
    // 0x3ac53c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ac53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ac540: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ac540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ac544: 0x24632988  addiu       $v1, $v1, 0x2988
    ctx->pc = 0x3ac544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10632));
    // 0x3ac548: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ac548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ac54c: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x3ac54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3ac550: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3ac550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3ac554: 0x3442005d  ori         $v0, $v0, 0x5D
    ctx->pc = 0x3ac554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)93);
    // 0x3ac558: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ac558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ac55c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3ac55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ac560: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3ac560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3ac564: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3ac564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3ac568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac56c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ac56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ac570: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ac570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac574: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AC574u;
    SET_GPR_U32(ctx, 31, 0x3AC57Cu);
    ctx->pc = 0x3AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC574u;
    // 0x3ac578: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AC574u, 0x3AC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC57Cu;
label_3ac57c:
    // 0x3ac57c: 0x0  nop
    ctx->pc = 0x3ac57cu;
    // NOP
label_3ac580:
    // 0x3ac580: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x3ac580u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x3ac584: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3ac584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3ac588: 0x10c500f5  beq         $a2, $a1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x3AC588u;
    {
        const bool branch_taken_0x3ac588 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC588u;
        // 0x3ac58c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac588) {
            ctx->pc = 0x3AC960u;
            goto label_3ac960;
        }
    }
    ctx->pc = 0x3AC590u;
    // 0x3ac590: 0x10c4008b  beq         $a2, $a0, . + 4 + (0x8B << 2)
    ctx->pc = 0x3AC590u;
    {
        const bool branch_taken_0x3ac590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC590u;
        // 0x3ac594: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac590) {
            ctx->pc = 0x3AC7C0u;
            goto label_3ac7c0;
        }
    }
    ctx->pc = 0x3AC598u;
    // 0x3ac598: 0x10c20041  beq         $a2, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3AC598u;
    {
        const bool branch_taken_0x3ac598 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC598u;
        // 0x3ac59c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac598) {
            ctx->pc = 0x3AC6A0u;
            goto label_3ac6a0;
        }
    }
    ctx->pc = 0x3AC5A0u;
    // 0x3ac5a0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AC5A0u;
    {
        const bool branch_taken_0x3ac5a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ac5a0) {
            ctx->pc = 0x3AC5F0u;
            goto label_3ac5f0;
        }
    }
    ctx->pc = 0x3AC5A8u;
    // 0x3ac5a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC5A8u;
    {
        const bool branch_taken_0x3ac5a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac5a8) {
            ctx->pc = 0x3AC5B8u;
            goto label_3ac5b8;
        }
    }
    ctx->pc = 0x3AC5B0u;
    // 0x3ac5b0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3AC5B0u;
    {
        const bool branch_taken_0x3ac5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac5b0) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC5B8u;
label_3ac5b8:
    // 0x3ac5b8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3ac5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ac5bc: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x3ac5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ac5c0: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x3ac5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3ac5c4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC5C4u;
    {
        const bool branch_taken_0x3ac5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ac5c4) {
            ctx->pc = 0x3AC5E0u;
            goto label_3ac5e0;
        }
    }
    ctx->pc = 0x3AC5CCu;
    // 0x3ac5cc: 0xa2450005  sb          $a1, 0x5($s2)
    ctx->pc = 0x3ac5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac5d0: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x3ac5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac5d4: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x3AC5D4u;
    {
        const bool branch_taken_0x3ac5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5D4u;
        // 0x3ac5d8: 0xa640000e  sh          $zero, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5d4) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC5DCu;
    // 0x3ac5dc: 0x0  nop
    ctx->pc = 0x3ac5dcu;
    // NOP
label_3ac5e0:
    // 0x3ac5e0: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x3ac5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ac5e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3ac5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ac5e8: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x3ac5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ac5ec: 0xa6430018  sh          $v1, 0x18($s2)
    ctx->pc = 0x3ac5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 3));
label_3ac5f0:
    // 0x3ac5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac5f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ac5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ac5f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac5fc: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC5FCu;
    SET_GPR_U32(ctx, 31, 0x3AC604u);
    ctx->pc = 0x3AC600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC5FCu;
    // 0x3ac600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC5FCu, 0x3AC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC604u;
label_3ac604:
    // 0x3ac604: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x3ac604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3ac608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac60c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3ac60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ac610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac614: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ac614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ac618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ac61c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ac61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ac620: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC620u;
    SET_GPR_U32(ctx, 31, 0x3AC628u);
    ctx->pc = 0x3AC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC620u;
    // 0x3ac624: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC620u, 0x3AC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC628u;
label_3ac628:
    // 0x3ac628: 0x9647000e  lhu         $a3, 0xE($s2)
    ctx->pc = 0x3ac628u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3ac62c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ac62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3ac630: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3ac630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3ac634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac638: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3ac638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ac63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac640: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3ac640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3ac644: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3ac644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3ac648: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ac648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ac64c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3ac64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3ac650: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3ac650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3ac654: 0x0  nop
    ctx->pc = 0x3ac654u;
    // NOP
    // 0x3ac658: 0x0  nop
    ctx->pc = 0x3ac658u;
    // NOP
    // 0x3ac65c: 0x1010  mfhi        $v0
    ctx->pc = 0x3ac65cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3ac660: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3ac660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3ac664: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3ac664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ac668: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC668u;
    SET_GPR_U32(ctx, 31, 0x3AC670u);
    ctx->pc = 0x3AC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC668u;
    // 0x3ac66c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC668u, 0x3AC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC670u;
label_3ac670:
    // 0x3ac670: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x3ac670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3ac674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC674u;
    {
        const bool branch_taken_0x3ac674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac674) {
            ctx->pc = 0x3AC688u;
            goto label_3ac688;
        }
    }
    ctx->pc = 0x3AC67Cu;
    // 0x3ac67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ac67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ac680: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x3AC680u;
    {
        const bool branch_taken_0x3ac680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC680u;
        // 0x3ac684: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac680) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC688u;
label_3ac688:
    // 0x3ac688: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x3ac688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x3ac68c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ac68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ac690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ac694: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x3ac694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac698: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x3AC698u;
    {
        const bool branch_taken_0x3ac698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC698u;
        // 0x3ac69c: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac698) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC6A0u;
label_3ac6a0:
    // 0x3ac6a0: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x3ac6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3ac6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC6A4u;
    {
        const bool branch_taken_0x3ac6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac6a4) {
            ctx->pc = 0x3AC6B8u;
            goto label_3ac6b8;
        }
    }
    ctx->pc = 0x3AC6ACu;
    // 0x3ac6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ac6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ac6b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AC6B0u;
    {
        const bool branch_taken_0x3ac6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6B0u;
        // 0x3ac6b4: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6b0) {
            ctx->pc = 0x3AC6F0u;
            goto label_3ac6f0;
        }
    }
    ctx->pc = 0x3AC6B8u;
label_3ac6b8:
    // 0x3ac6b8: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x3ac6b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ac6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ac6c0: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x3ac6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ac6c4: 0xa644000e  sh          $a0, 0xE($s2)
    ctx->pc = 0x3ac6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ac6c8: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x3ac6c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ac6cc: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x3ac6ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3ac6d0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC6D0u;
    {
        const bool branch_taken_0x3ac6d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac6d0) {
            ctx->pc = 0x3AC6F0u;
            goto label_3ac6f0;
        }
    }
    ctx->pc = 0x3AC6D8u;
    // 0x3ac6d8: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x3ac6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x3ac6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ac6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ac6e4: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x3ac6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac6e8: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x3ac6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ac6ec: 0x0  nop
    ctx->pc = 0x3ac6ecu;
    // NOP
label_3ac6f0:
    // 0x3ac6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac6f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ac6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ac6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac6fc: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC6FCu;
    SET_GPR_U32(ctx, 31, 0x3AC704u);
    ctx->pc = 0x3AC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6FCu;
    // 0x3ac700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC6FCu, 0x3AC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC704u;
label_3ac704:
    // 0x3ac704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac708: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3ac708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ac70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac710: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC710u;
    SET_GPR_U32(ctx, 31, 0x3AC718u);
    ctx->pc = 0x3AC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC710u;
    // 0x3ac714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC710u, 0x3AC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC718u;
label_3ac718:
    // 0x3ac718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ac718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac71c: 0x0  nop
    ctx->pc = 0x3ac71cu;
    // NOP
label_3ac720:
    // 0x3ac720: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x3ac720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ac724: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x3ac724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ac728: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3AC728u;
    {
        const bool branch_taken_0x3ac728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac728) {
            ctx->pc = 0x3AC7A8u;
            goto label_3ac7a8;
        }
    }
    ctx->pc = 0x3AC730u;
    // 0x3ac730: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC730u;
    {
        const bool branch_taken_0x3ac730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC730u;
        // 0x3ac734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac730) {
            ctx->pc = 0x3AC750u;
            goto label_3ac750;
        }
    }
    ctx->pc = 0x3AC738u;
    // 0x3ac738: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3ac738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ac73c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac740: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC740u;
    SET_GPR_U32(ctx, 31, 0x3AC748u);
    ctx->pc = 0x3AC744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC740u;
    // 0x3ac744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC740u, 0x3AC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC748u;
label_3ac748:
    // 0x3ac748: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3AC748u;
    {
        const bool branch_taken_0x3ac748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac748) {
            ctx->pc = 0x3AC7A8u;
            goto label_3ac7a8;
        }
    }
    ctx->pc = 0x3AC750u;
label_3ac750:
    // 0x3ac750: 0x14700010  bne         $v1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AC750u;
    {
        const bool branch_taken_0x3ac750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x3AC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC750u;
        // 0x3ac754: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac750) {
            ctx->pc = 0x3AC794u;
            goto label_3ac794;
        }
    }
    ctx->pc = 0x3AC758u;
    // 0x3ac758: 0x9644000e  lhu         $a0, 0xE($s2)
    ctx->pc = 0x3ac758u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3ac75c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x3ac75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x3ac760: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x3ac760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x3ac764: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3ac764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ac768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ac76c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ac76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ac770: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3ac770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ac774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ac774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ac778: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3ac778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3ac77c: 0x0  nop
    ctx->pc = 0x3ac77cu;
    // NOP
    // 0x3ac780: 0x0  nop
    ctx->pc = 0x3ac780u;
    // NOP
    // 0x3ac784: 0x1010  mfhi        $v0
    ctx->pc = 0x3ac784u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3ac788: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3ac788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3ac78c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC78Cu;
    {
        const bool branch_taken_0x3ac78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC78Cu;
        // 0x3ac790: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac78c) {
            ctx->pc = 0x3AC798u;
            goto label_3ac798;
        }
    }
    ctx->pc = 0x3AC794u;
label_3ac794:
    // 0x3ac794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac798:
    // 0x3ac798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac79c: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC79Cu;
    SET_GPR_U32(ctx, 31, 0x3AC7A4u);
    ctx->pc = 0x3AC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC79Cu;
    // 0x3ac7a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC79Cu, 0x3AC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC7A4u;
label_3ac7a4:
    // 0x3ac7a4: 0x0  nop
    ctx->pc = 0x3ac7a4u;
    // NOP
label_3ac7a8:
    // 0x3ac7a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ac7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ac7ac: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x3ac7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ac7b0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3AC7B0u;
    {
        const bool branch_taken_0x3ac7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7b0) {
            ctx->pc = 0x3AC720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac720;
        }
    }
    ctx->pc = 0x3AC7B8u;
    // 0x3ac7b8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3AC7B8u;
    {
        const bool branch_taken_0x3ac7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7b8) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC7C0u;
label_3ac7c0:
    // 0x3ac7c0: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x3ac7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3ac7c4: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC7C4u;
    {
        const bool branch_taken_0x3ac7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7C4u;
        // 0x3ac7c8: 0x241000b4  addiu       $s0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7c4) {
            ctx->pc = 0x3AC7D0u;
            goto label_3ac7d0;
        }
    }
    ctx->pc = 0x3AC7CCu;
    // 0x3ac7cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ac7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7d0:
    // 0x3ac7d0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ac7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ac7d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ac7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac7d8: 0x8c228e38  lw          $v0, -0x71C8($at)
    ctx->pc = 0x3ac7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B8E38u));
    // 0x3ac7dc: 0x14450012  bne         $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC7DCu;
    {
        const bool branch_taken_0x3ac7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ac7dc) {
            ctx->pc = 0x3AC828u;
            goto label_3ac828;
        }
    }
    ctx->pc = 0x3AC7E4u;
    // 0x3ac7e4: 0x82420007  lb          $v0, 0x7($s2)
    ctx->pc = 0x3ac7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3ac7e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC7E8u;
    {
        const bool branch_taken_0x3ac7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E8u;
        // 0x3ac7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7e8) {
            ctx->pc = 0x3AC808u;
            goto label_3ac808;
        }
    }
    ctx->pc = 0x3AC7F0u;
    // 0x3ac7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7f4: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC7F4u;
    SET_GPR_U32(ctx, 31, 0x3AC7FCu);
    ctx->pc = 0x3AC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC7F4u;
    // 0x3ac7f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC7F4u, 0x3AC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC7FCu;
label_3ac7fc:
    // 0x3ac7fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AC7FCu;
    {
        const bool branch_taken_0x3ac7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7fc) {
            ctx->pc = 0x3AC840u;
            goto label_3ac840;
        }
    }
    ctx->pc = 0x3AC804u;
    // 0x3ac804: 0x0  nop
    ctx->pc = 0x3ac804u;
    // NOP
label_3ac808:
    // 0x3ac808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac80c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3ac80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ac810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac814: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC814u;
    SET_GPR_U32(ctx, 31, 0x3AC81Cu);
    ctx->pc = 0x3AC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC814u;
    // 0x3ac818: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC814u, 0x3AC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC81Cu;
label_3ac81c:
    // 0x3ac81c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC81Cu;
    {
        const bool branch_taken_0x3ac81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac81c) {
            ctx->pc = 0x3AC840u;
            goto label_3ac840;
        }
    }
    ctx->pc = 0x3AC824u;
    // 0x3ac824: 0x0  nop
    ctx->pc = 0x3ac824u;
    // NOP
label_3ac828:
    // 0x3ac828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac82c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ac82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ac830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac834: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC834u;
    SET_GPR_U32(ctx, 31, 0x3AC83Cu);
    ctx->pc = 0x3AC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC834u;
    // 0x3ac838: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC834u, 0x3AC83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC83Cu;
label_3ac83c:
    // 0x3ac83c: 0x0  nop
    ctx->pc = 0x3ac83cu;
    // NOP
label_3ac840:
    // 0x3ac840: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ac840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ac844: 0x8c238eac  lw          $v1, -0x7154($at)
    ctx->pc = 0x3ac844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8EACu));
    // 0x3ac848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ac848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac84c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC84Cu;
    {
        const bool branch_taken_0x3ac84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ac84c) {
            ctx->pc = 0x3AC898u;
            goto label_3ac898;
        }
    }
    ctx->pc = 0x3AC854u;
    // 0x3ac854: 0x82420007  lb          $v0, 0x7($s2)
    ctx->pc = 0x3ac854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3ac858: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC858u;
    {
        const bool branch_taken_0x3ac858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC858u;
        // 0x3ac85c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac858) {
            ctx->pc = 0x3AC878u;
            goto label_3ac878;
        }
    }
    ctx->pc = 0x3AC860u;
    // 0x3ac860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac864: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ac864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac868: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC868u;
    SET_GPR_U32(ctx, 31, 0x3AC870u);
    ctx->pc = 0x3AC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC868u;
    // 0x3ac86c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC868u, 0x3AC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC870u;
label_3ac870:
    // 0x3ac870: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AC870u;
    {
        const bool branch_taken_0x3ac870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac870) {
            ctx->pc = 0x3AC8B0u;
            goto label_3ac8b0;
        }
    }
    ctx->pc = 0x3AC878u;
label_3ac878:
    // 0x3ac878: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ac878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac880: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ac880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ac884: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC884u;
    SET_GPR_U32(ctx, 31, 0x3AC88Cu);
    ctx->pc = 0x3AC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC884u;
    // 0x3ac888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC884u, 0x3AC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC88Cu;
label_3ac88c:
    // 0x3ac88c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC88Cu;
    {
        const bool branch_taken_0x3ac88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac88c) {
            ctx->pc = 0x3AC8B0u;
            goto label_3ac8b0;
        }
    }
    ctx->pc = 0x3AC894u;
    // 0x3ac894: 0x0  nop
    ctx->pc = 0x3ac894u;
    // NOP
label_3ac898:
    // 0x3ac898: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ac898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac8a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3ac8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ac8a4: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC8A4u;
    SET_GPR_U32(ctx, 31, 0x3AC8ACu);
    ctx->pc = 0x3AC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8A4u;
    // 0x3ac8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC8A4u, 0x3AC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8ACu;
label_3ac8ac:
    // 0x3ac8ac: 0x0  nop
    ctx->pc = 0x3ac8acu;
    // NOP
label_3ac8b0:
    // 0x3ac8b0: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x3ac8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3ac8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ac8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac8b8: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3AC8B8u;
    {
        const bool branch_taken_0x3ac8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ac8b8) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC8C0u;
    // 0x3ac8c0: 0x82430007  lb          $v1, 0x7($s2)
    ctx->pc = 0x3ac8c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3ac8c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ac8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac8c8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3ac8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ac8cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3ac8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ac8d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3ac8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ac8d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ac8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ac8d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ac8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ac8dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3ac8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3ac8e0: 0x24510190  addiu       $s1, $v0, 0x190
    ctx->pc = 0x3ac8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x3ac8e4: 0x0  nop
    ctx->pc = 0x3ac8e4u;
    // NOP
label_3ac8e8:
    // 0x3ac8e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3ac8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ac8ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AC8ECu;
    {
        const bool branch_taken_0x3ac8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8ec) {
            ctx->pc = 0x3AC928u;
            goto label_3ac928;
        }
    }
    ctx->pc = 0x3AC8F4u;
    // 0x3ac8f4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3ac8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ac8f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AC8F8u;
    {
        const bool branch_taken_0x3ac8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8f8) {
            ctx->pc = 0x3AC928u;
            goto label_3ac928;
        }
    }
    ctx->pc = 0x3AC900u;
    // 0x3ac900: 0x82420008  lb          $v0, 0x8($s2)
    ctx->pc = 0x3ac900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3ac904: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC904u;
    {
        const bool branch_taken_0x3ac904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC904u;
        // 0x3ac908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac904) {
            ctx->pc = 0x3AC920u;
            goto label_3ac920;
        }
    }
    ctx->pc = 0x3AC90Cu;
    // 0x3ac90c: 0xc0eb398  jal         func_3ACE60
    ctx->pc = 0x3AC90Cu;
    SET_GPR_U32(ctx, 31, 0x3AC914u);
    ctx->pc = 0x3AC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC90Cu;
    // 0x3ac910: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACE60u, 0x3AC90Cu, 0x3AC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC914u;
label_3ac914:
    // 0x3ac914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC914u;
    {
        const bool branch_taken_0x3ac914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac914) {
            ctx->pc = 0x3AC930u;
            goto label_3ac930;
        }
    }
    ctx->pc = 0x3AC91Cu;
    // 0x3ac91c: 0x0  nop
    ctx->pc = 0x3ac91cu;
    // NOP
label_3ac920:
    // 0x3ac920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC920u;
    {
        const bool branch_taken_0x3ac920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC920u;
        // 0x3ac924: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac920) {
            ctx->pc = 0x3AC930u;
            goto label_3ac930;
        }
    }
    ctx->pc = 0x3AC928u;
label_3ac928:
    // 0x3ac928: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x3ac928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ac92c: 0x0  nop
    ctx->pc = 0x3ac92cu;
    // NOP
label_3ac930:
    // 0x3ac930: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x3ac930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3ac934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac93c: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC93Cu;
    SET_GPR_U32(ctx, 31, 0x3AC944u);
    ctx->pc = 0x3AC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC93Cu;
    // 0x3ac940: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC93Cu, 0x3AC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC944u;
label_3ac944:
    // 0x3ac944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ac944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ac948: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x3ac948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ac94c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3AC94Cu;
    {
        const bool branch_taken_0x3ac94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC94Cu;
        // 0x3ac950: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac94c) {
            ctx->pc = 0x3AC8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac8e8;
        }
    }
    ctx->pc = 0x3AC954u;
    // 0x3ac954: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AC954u;
    {
        const bool branch_taken_0x3ac954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac954) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC95Cu;
    // 0x3ac95c: 0x0  nop
    ctx->pc = 0x3ac95cu;
    // NOP
label_3ac960:
    // 0x3ac960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac964: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ac964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ac968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac96c: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC96Cu;
    SET_GPR_U32(ctx, 31, 0x3AC974u);
    ctx->pc = 0x3AC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC96Cu;
    // 0x3ac970: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC96Cu, 0x3AC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC974u;
label_3ac974:
    // 0x3ac974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac978: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3ac978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ac97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac980: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AC980u;
    SET_GPR_U32(ctx, 31, 0x3AC988u);
    ctx->pc = 0x3AC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC980u;
    // 0x3ac984: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AC980u, 0x3AC988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC988u;
label_3ac988:
    // 0x3ac988: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ac988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ac98c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3ac98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3ac990: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ac990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac994: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC994u;
    {
        const bool branch_taken_0x3ac994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC994u;
        // 0x3ac998: 0x2410019f  addiu       $s0, $zero, 0x19F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac994) {
            ctx->pc = 0x3AC9B8u;
            goto label_3ac9b8;
        }
    }
    ctx->pc = 0x3AC99Cu;
    // 0x3ac99c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ac99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ac9a0: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3ac9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3ac9a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3ac9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3ac9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC9A8u;
    {
        const bool branch_taken_0x3ac9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac9a8) {
            ctx->pc = 0x3AC9B8u;
            goto label_3ac9b8;
        }
    }
    ctx->pc = 0x3AC9B0u;
    // 0x3ac9b0: 0x241001a7  addiu       $s0, $zero, 0x1A7
    ctx->pc = 0x3ac9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x3ac9b4: 0x0  nop
    ctx->pc = 0x3ac9b4u;
    // NOP
label_3ac9b8:
    // 0x3ac9b8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ac9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ac9bc: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3ac9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3ac9c0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ac9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ac9c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ac9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ac9c8: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3ac9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ac9cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ac9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ac9d0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ac9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ac9d4: 0x34420060  ori         $v0, $v0, 0x60
    ctx->pc = 0x3ac9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x3ac9d8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ac9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3ac9dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3ac9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ac9e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac9e4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ac9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ac9e8: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3ac9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ac9ec: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3ac9ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3ac9f0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AC9F0u;
    SET_GPR_U32(ctx, 31, 0x3AC9F8u);
    ctx->pc = 0x3AC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9F0u;
    // 0x3ac9f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AC9F0u, 0x3AC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9F8u;
label_3ac9f8:
    // 0x3ac9f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ac9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ac9fc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ac9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aca00: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3aca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3aca04: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3aca04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3aca08: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3aca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3aca0c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3aca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3aca10: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3aca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3aca14: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3aca14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3aca18: 0x34420061  ori         $v0, $v0, 0x61
    ctx->pc = 0x3aca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)97);
    // 0x3aca1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aca1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aca20: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3aca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3aca24: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3aca24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3aca28: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3aca28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3aca2c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3aca2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3aca30: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3ACA30u;
    SET_GPR_U32(ctx, 31, 0x3ACA38u);
    ctx->pc = 0x3ACA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA30u;
    // 0x3aca34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3ACA30u, 0x3ACA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA38u;
label_3aca38:
    // 0x3aca38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3aca38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aca3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3aca3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aca40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3aca40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aca44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3aca44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aca48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3aca48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA4Cu;
        // 0x3aca50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACA54u;
}
