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

// Function: sub_003304F0
// Address: 0x3304f0 - 0x330810
void sub_003304F0_0x3304f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003304F0_0x3304f0");
#endif

    switch (ctx->pc) {
        case 0x330550u: goto label_330550;
        case 0x330564u: goto label_330564;
        case 0x330594u: goto label_330594;
        case 0x33059cu: goto label_33059c;
        case 0x3305f8u: goto label_3305f8;
        case 0x330630u: goto label_330630;
        case 0x330658u: goto label_330658;
        case 0x33066cu: goto label_33066c;
        case 0x33069cu: goto label_33069c;
        case 0x330714u: goto label_330714;
        case 0x33077cu: goto label_33077c;
        default: break;
    }

    ctx->pc = 0x3304f0u;

    // 0x3304f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3304f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3304f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3304f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3304f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3304f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3304fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3304fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x330500: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x330500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x330504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x330508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x330508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33050c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x330510: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x330510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x330514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x330518: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x330518u;
    {
        const bool branch_taken_0x330518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330518u;
        // 0x33051c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330518) {
            ctx->pc = 0x330538u;
            goto label_330538;
        }
    }
    ctx->pc = 0x330520u;
    // 0x330520: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x330520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x330524: 0x8c30ea20  lw          $s0, -0x15E0($at)
    ctx->pc = 0x330524u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x330528: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x330528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x33052c: 0x8c33ea28  lw          $s3, -0x15D8($at)
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x330530: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x330530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x330534: 0x8c32ea24  lw          $s2, -0x15DC($at)
    ctx->pc = 0x330534u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x8EEA24u));
label_330538:
    // 0x330538: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x330538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x33053c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x330540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330540u;
    {
        const bool branch_taken_0x330540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330540u;
        // 0x330544: 0x26841c98  addiu       $a0, $s4, 0x1C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330540) {
            ctx->pc = 0x330558u;
            goto label_330558;
        }
    }
    ctx->pc = 0x330548u;
    // 0x330548: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x330548u;
    SET_GPR_U32(ctx, 31, 0x330550u);
    ctx->pc = 0x33054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330548u;
    // 0x33054c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x330548u, 0x330550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330550u;
label_330550:
    // 0x330550: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x330550u;
    {
        const bool branch_taken_0x330550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330550) {
            ctx->pc = 0x330630u;
            goto label_330630;
        }
    }
    ctx->pc = 0x330558u;
label_330558:
    // 0x330558: 0x26841c98  addiu       $a0, $s4, 0x1C98
    ctx->pc = 0x330558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7320));
    // 0x33055c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x33055Cu;
    SET_GPR_U32(ctx, 31, 0x330564u);
    ctx->pc = 0x330560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33055Cu;
    // 0x330560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x33055Cu, 0x330564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330564u;
label_330564:
    // 0x330564: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x330564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x330568: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x330568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33056c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x33056Cu;
    {
        const bool branch_taken_0x33056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33056Cu;
        // 0x330570: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33056c) {
            ctx->pc = 0x330630u;
            goto label_330630;
        }
    }
    ctx->pc = 0x330574u;
    // 0x330574: 0x344201a0  ori         $v0, $v0, 0x1A0
    ctx->pc = 0x330574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
    // 0x330578: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x330578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x33057c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33057Cu;
    {
        const bool branch_taken_0x33057c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33057c) {
            ctx->pc = 0x3305A0u;
            goto label_3305a0;
        }
    }
    ctx->pc = 0x330584u;
    // 0x330584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330588: 0x26841c88  addiu       $a0, $s4, 0x1C88
    ctx->pc = 0x330588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7304));
    // 0x33058c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x33058Cu;
    SET_GPR_U32(ctx, 31, 0x330594u);
    ctx->pc = 0x330590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33058Cu;
    // 0x330590: 0xa2821ca8  sb          $v0, 0x1CA8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 7336), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x33058Cu, 0x330594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330594u;
label_330594:
    // 0x330594: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x330594u;
    SET_GPR_U32(ctx, 31, 0x33059Cu);
    ctx->pc = 0x330598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330594u;
    // 0x330598: 0x26841c98  addiu       $a0, $s4, 0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x330594u, 0x33059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33059Cu;
label_33059c:
    // 0x33059c: 0x0  nop
    ctx->pc = 0x33059cu;
    // NOP
label_3305a0:
    // 0x3305a0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3305a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3305a4: 0x344201a0  ori         $v0, $v0, 0x1A0
    ctx->pc = 0x3305a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
    // 0x3305a8: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3305a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x3305ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3305ACu;
    {
        const bool branch_taken_0x3305ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305ACu;
        // 0x3305b0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305ac) {
            ctx->pc = 0x330630u;
            goto label_330630;
        }
    }
    ctx->pc = 0x3305B4u;
    // 0x3305b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3305b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3305b8: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x3305b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3305bc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3305bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3305c0: 0x2632024  and         $a0, $s3, $v1
    ctx->pc = 0x3305c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x3305c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3305c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3305c8: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x3305c8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x3305cc: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3305ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3305d0: 0x92821c49  lbu         $v0, 0x1C49($s4)
    ctx->pc = 0x3305d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7241)));
    // 0x3305d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3305d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3305dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3305dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3305e0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3305e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3305e4: 0x0  nop
    ctx->pc = 0x3305e4u;
    // NOP
    // 0x3305e8: 0x0  nop
    ctx->pc = 0x3305e8u;
    // NOP
    // 0x3305ec: 0x1010  mfhi        $v0
    ctx->pc = 0x3305ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3305f0: 0xc0cbf1c  jal         func_32FC70
    ctx->pc = 0x3305F0u;
    SET_GPR_U32(ctx, 31, 0x3305F8u);
    ctx->pc = 0x3305F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305F0u;
    // 0x3305f4: 0xa2821c49  sb          $v0, 0x1C49($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 7241), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC70u, 0x3305F0u, 0x3305F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305F8u;
label_3305f8:
    // 0x3305f8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3305fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3305fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x330600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x330600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330604: 0xa2831c48  sb          $v1, 0x1C48($s4)
    ctx->pc = 0x330604u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7240), (uint8_t)GPR_U32(ctx, 3));
    // 0x330608: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x330608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x33060c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x330610: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x330610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x330614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33061c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33061cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x330620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x330624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330628: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x330628u;
    SET_GPR_U32(ctx, 31, 0x330630u);
    ctx->pc = 0x33062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330628u;
    // 0x33062c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x330628u, 0x330630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330630u;
label_330630:
    // 0x330630: 0x92831c49  lbu         $v1, 0x1C49($s4)
    ctx->pc = 0x330630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7241)));
    // 0x330634: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x330634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x330638: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x330638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33063c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x33063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x330640: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x330640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x330644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330644u;
    {
        const bool branch_taken_0x330644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330644u;
        // 0x330648: 0x24711c4a  addiu       $s1, $v1, 0x1C4A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330644) {
            ctx->pc = 0x330660u;
            goto label_330660;
        }
    }
    ctx->pc = 0x33064Cu;
    // 0x33064c: 0x26841c88  addiu       $a0, $s4, 0x1C88
    ctx->pc = 0x33064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7304));
    // 0x330650: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x330650u;
    SET_GPR_U32(ctx, 31, 0x330658u);
    ctx->pc = 0x330654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330650u;
    // 0x330654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x330650u, 0x330658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330658u;
label_330658:
    // 0x330658: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x330658u;
    {
        const bool branch_taken_0x330658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330658) {
            ctx->pc = 0x330780u;
            goto label_330780;
        }
    }
    ctx->pc = 0x330660u;
label_330660:
    // 0x330660: 0x26841c88  addiu       $a0, $s4, 0x1C88
    ctx->pc = 0x330660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7304));
    // 0x330664: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x330664u;
    SET_GPR_U32(ctx, 31, 0x33066Cu);
    ctx->pc = 0x330668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330664u;
    // 0x330668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x330664u, 0x33066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33066Cu;
label_33066c:
    // 0x33066c: 0x86820024  lh          $v0, 0x24($s4)
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x330670: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x330670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x330674: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x330674u;
    {
        const bool branch_taken_0x330674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330674u;
        // 0x330678: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330674) {
            ctx->pc = 0x330780u;
            goto label_330780;
        }
    }
    ctx->pc = 0x33067Cu;
    // 0x33067c: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x33067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x330680: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x330680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x330684: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330684u;
    {
        const bool branch_taken_0x330684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x330684) {
            ctx->pc = 0x3306A0u;
            goto label_3306a0;
        }
    }
    ctx->pc = 0x33068Cu;
    // 0x33068c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330690: 0x26841c88  addiu       $a0, $s4, 0x1C88
    ctx->pc = 0x330690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7304));
    // 0x330694: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x330694u;
    SET_GPR_U32(ctx, 31, 0x33069Cu);
    ctx->pc = 0x330698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330694u;
    // 0x330698: 0xa2821ca8  sb          $v0, 0x1CA8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 7336), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x330694u, 0x33069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33069Cu;
label_33069c:
    // 0x33069c: 0x0  nop
    ctx->pc = 0x33069cu;
    // NOP
label_3306a0:
    // 0x3306a0: 0x86820024  lh          $v0, 0x24($s4)
    ctx->pc = 0x3306a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x3306a4: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x3306a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x3306a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3306A8u;
    {
        const bool branch_taken_0x3306a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3306a8) {
            ctx->pc = 0x3306E0u;
            goto label_3306e0;
        }
    }
    ctx->pc = 0x3306B0u;
    // 0x3306b0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3306B0u;
    {
        const bool branch_taken_0x3306b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3306b0) {
            ctx->pc = 0x3306D0u;
            goto label_3306d0;
        }
    }
    ctx->pc = 0x3306B8u;
    // 0x3306b8: 0x92821c48  lbu         $v0, 0x1C48($s4)
    ctx->pc = 0x3306b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7240)));
    // 0x3306bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3306BCu;
    {
        const bool branch_taken_0x3306bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3306bc) {
            ctx->pc = 0x3306E8u;
            goto label_3306e8;
        }
    }
    ctx->pc = 0x3306C4u;
    // 0x3306c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3306c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3306c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3306C8u;
    {
        const bool branch_taken_0x3306c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306C8u;
        // 0x3306cc: 0xa2821c48  sb          $v0, 0x1C48($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 7240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306c8) {
            ctx->pc = 0x3306E8u;
            goto label_3306e8;
        }
    }
    ctx->pc = 0x3306D0u;
label_3306d0:
    // 0x3306d0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3306d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3306D4u;
    {
        const bool branch_taken_0x3306d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306D4u;
        // 0x3306d8: 0xa2821c48  sb          $v0, 0x1C48($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 7240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306d4) {
            ctx->pc = 0x3306E8u;
            goto label_3306e8;
        }
    }
    ctx->pc = 0x3306DCu;
    // 0x3306dc: 0x0  nop
    ctx->pc = 0x3306dcu;
    // NOP
label_3306e0:
    // 0x3306e0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3306e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3306e4: 0xa2821c48  sb          $v0, 0x1C48($s4)
    ctx->pc = 0x3306e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7240), (uint8_t)GPR_U32(ctx, 2));
label_3306e8:
    // 0x3306e8: 0x92821c48  lbu         $v0, 0x1C48($s4)
    ctx->pc = 0x3306e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7240)));
    // 0x3306ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3306ECu;
    {
        const bool branch_taken_0x3306ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306ECu;
        // 0x3306f0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306ec) {
            ctx->pc = 0x330720u;
            goto label_330720;
        }
    }
    ctx->pc = 0x3306F4u;
    // 0x3306f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3306f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3306f8: 0x34470010  ori         $a3, $v0, 0x10
    ctx->pc = 0x3306f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3306fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3306fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330700: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x330700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x330704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330708: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x330708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33070c: 0xc0cde64  jal         func_337990
    ctx->pc = 0x33070Cu;
    SET_GPR_U32(ctx, 31, 0x330714u);
    ctx->pc = 0x330710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33070Cu;
    // 0x330710: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337990u, 0x33070Cu, 0x330714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330714u;
label_330714:
    // 0x330714: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x330714u;
    {
        const bool branch_taken_0x330714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330714) {
            ctx->pc = 0x330780u;
            goto label_330780;
        }
    }
    ctx->pc = 0x33071Cu;
    // 0x33071c: 0x0  nop
    ctx->pc = 0x33071cu;
    // NOP
label_330720:
    // 0x330720: 0x86830024  lh          $v1, 0x24($s4)
    ctx->pc = 0x330720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x330724: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x330724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x330728: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x330728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x33072c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x33072cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x330730: 0x0  nop
    ctx->pc = 0x330730u;
    // NOP
    // 0x330734: 0x0  nop
    ctx->pc = 0x330734u;
    // NOP
    // 0x330738: 0x1010  mfhi        $v0
    ctx->pc = 0x330738u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33073c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x33073cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x330740: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x330740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x330744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330748: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x330748u;
    {
        const bool branch_taken_0x330748 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x330748) {
            ctx->pc = 0x330754u;
            goto label_330754;
        }
    }
    ctx->pc = 0x330750u;
    // 0x330750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330754:
    // 0x330754: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x330754u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x330758: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x330758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x33075c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x330760: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x330760u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x330764: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33076c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330770: 0x34670010  ori         $a3, $v1, 0x10
    ctx->pc = 0x330770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x330774: 0xc0cde64  jal         func_337990
    ctx->pc = 0x330774u;
    SET_GPR_U32(ctx, 31, 0x33077Cu);
    ctx->pc = 0x330778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330774u;
    // 0x330778: 0x34480040  ori         $t0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337990u, 0x330774u, 0x33077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33077Cu;
label_33077c:
    // 0x33077c: 0x0  nop
    ctx->pc = 0x33077cu;
    // NOP
label_330780:
    // 0x330780: 0x86820024  lh          $v0, 0x24($s4)
    ctx->pc = 0x330780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x330784: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x330784u;
    {
        const bool branch_taken_0x330784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330784) {
            ctx->pc = 0x3307C0u;
            goto label_3307c0;
        }
    }
    ctx->pc = 0x33078Cu;
    // 0x33078c: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x33078cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x330790: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x330790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x330794: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x330794u;
    {
        const bool branch_taken_0x330794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330794) {
            ctx->pc = 0x3307C0u;
            goto label_3307c0;
        }
    }
    ctx->pc = 0x33079Cu;
    // 0x33079c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x33079cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3307a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3307a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3307a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3307a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3307a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3307ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3307acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3307b0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3307b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3307b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3307B4u;
    {
        const bool branch_taken_0x3307b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307B4u;
        // 0x3307b8: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307b4) {
            ctx->pc = 0x3307C8u;
            goto label_3307c8;
        }
    }
    ctx->pc = 0x3307BCu;
    // 0x3307bc: 0x0  nop
    ctx->pc = 0x3307bcu;
    // NOP
label_3307c0:
    // 0x3307c0: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3307c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3307c4: 0x0  nop
    ctx->pc = 0x3307c4u;
    // NOP
label_3307c8:
    // 0x3307c8: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x3307c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x3307cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3307CCu;
    {
        const bool branch_taken_0x3307cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307CCu;
        // 0x3307d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307cc) {
            ctx->pc = 0x3307E0u;
            goto label_3307e0;
        }
    }
    ctx->pc = 0x3307D4u;
    // 0x3307d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3307D4u;
    {
        const bool branch_taken_0x3307d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3307d4) {
            ctx->pc = 0x3307F0u;
            goto label_3307f0;
        }
    }
    ctx->pc = 0x3307DCu;
    // 0x3307dc: 0x0  nop
    ctx->pc = 0x3307dcu;
    // NOP
label_3307e0:
    // 0x3307e0: 0x32432000  andi        $v1, $s2, 0x2000
    ctx->pc = 0x3307e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x3307e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3307e8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3307e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3307ec: 0x0  nop
    ctx->pc = 0x3307ecu;
    // NOP
label_3307f0:
    // 0x3307f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3307f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3307f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3307f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3307f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3307f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3307fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3307fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330800: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x330800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x330804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330808: 0x3e00008  jr          $ra
    ctx->pc = 0x330808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330808u;
        // 0x33080c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330810u;
}
