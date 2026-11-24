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

// Function: sub_00368390
// Address: 0x368390 - 0x3685c4
void sub_00368390_0x368390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368390_0x368390");
#endif

    switch (ctx->pc) {
        case 0x3683e8u: goto label_3683e8;
        case 0x368444u: goto label_368444;
        case 0x368474u: goto label_368474;
        case 0x3684bcu: goto label_3684bc;
        case 0x36852cu: goto label_36852c;
        case 0x36858cu: goto label_36858c;
        default: break;
    }

    ctx->pc = 0x368390u;

    // 0x368390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x368390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x368394: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x368394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x368398: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x368398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x36839c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3683a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3683a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3683a4: 0x2463aa70  addiu       $v1, $v1, -0x5590
    ctx->pc = 0x3683a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945392));
    // 0x3683a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3683a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3683ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3683acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3683b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3683b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3683b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3683b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3683b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3683bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3683bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3683c0: 0x908800a8  lbu         $t0, 0xA8($a0)
    ctx->pc = 0x3683c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x3683c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3683c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683c8: 0x267200a8  addiu       $s2, $s3, 0xA8
    ctx->pc = 0x3683c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x3683cc: 0xa08200ac  sb          $v0, 0xAC($a0)
    ctx->pc = 0x3683ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x3683d0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3683d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3683d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3683d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3683d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3683d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3683dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3683dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3683e0: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3683E0u;
    SET_GPR_U32(ctx, 31, 0x3683E8u);
    ctx->pc = 0x3683E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3683E0u;
    // 0x3683e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3683E0u, 0x3683E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3683E8u;
label_3683e8:
    // 0x3683e8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3683e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3683ec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3683f0: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3683f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3683f4: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x3683f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x3683f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3683f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3683fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3683FCu;
    {
        const bool branch_taken_0x3683fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683FCu;
        // 0x368400: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3683fc) {
            ctx->pc = 0x368478u;
            goto label_368478;
        }
    }
    ctx->pc = 0x368404u;
    // 0x368404: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x368404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368408: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x368408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x36840c: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x36840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x368410: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x368410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x368414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368418: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x368418u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x36841c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x36841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x368420: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x368420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x368424: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x368424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x368428: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x368428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36842c: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x36842cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x368430: 0x0  nop
    ctx->pc = 0x368430u;
    // NOP
    // 0x368434: 0x0  nop
    ctx->pc = 0x368434u;
    // NOP
    // 0x368438: 0x1010  mfhi        $v0
    ctx->pc = 0x368438u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36843c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36843Cu;
    SET_GPR_U32(ctx, 31, 0x368444u);
    ctx->pc = 0x368440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36843Cu;
    // 0x368440: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36843Cu, 0x368444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368444u;
label_368444:
    // 0x368444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368448: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x368448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36844c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x368450: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x368450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x368454: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x368454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x368458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36845c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36845cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368460: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x368460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x368464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x368468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36846c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36846Cu;
    SET_GPR_U32(ctx, 31, 0x368474u);
    ctx->pc = 0x368470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36846Cu;
    // 0x368470: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36846Cu, 0x368474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368474u;
label_368474:
    // 0x368474: 0x0  nop
    ctx->pc = 0x368474u;
    // NOP
label_368478:
    // 0x368478: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x368478u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x36847c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x36847cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x368480: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x368480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x368484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368488: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36848c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x36848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x368490: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368490u;
    {
        const bool branch_taken_0x368490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368490u;
        // 0x368494: 0x24700008  addiu       $s0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368490) {
            ctx->pc = 0x3684B0u;
            goto label_3684b0;
        }
    }
    ctx->pc = 0x368498u;
    // 0x368498: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x368498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36849c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3684a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3684A0u;
    {
        const bool branch_taken_0x3684a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3684a0) {
            ctx->pc = 0x3684B0u;
            goto label_3684b0;
        }
    }
    ctx->pc = 0x3684A8u;
    // 0x3684a8: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x3684a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x3684ac: 0x0  nop
    ctx->pc = 0x3684acu;
    // NOP
label_3684b0:
    // 0x3684b0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3684b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3684b4: 0xc0dc804  jal         func_372010
    ctx->pc = 0x3684B4u;
    SET_GPR_U32(ctx, 31, 0x3684BCu);
    ctx->pc = 0x3684B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684B4u;
    // 0x3684b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x3684B4u, 0x3684BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684BCu;
label_3684bc:
    // 0x3684bc: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3684bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3684c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3684c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3684c4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3684c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3684c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3684cc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3684CCu;
    {
        const bool branch_taken_0x3684cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3684cc) {
            ctx->pc = 0x368540u;
            goto label_368540;
        }
    }
    ctx->pc = 0x3684D4u;
    // 0x3684d4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3684d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3684d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3684d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3684dc: 0x2442aa80  addiu       $v0, $v0, -0x5580
    ctx->pc = 0x3684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
    // 0x3684e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3684e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3684e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3684e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3684e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3684e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3684ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3684f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3684f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3684f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3684F4u;
    {
        const bool branch_taken_0x3684f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684F4u;
        // 0x3684f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684f4) {
            ctx->pc = 0x368530u;
            goto label_368530;
        }
    }
    ctx->pc = 0x3684FCu;
    // 0x3684fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3684fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x368500: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x368500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x368504: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x368504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x368508: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x368508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36850c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36850cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368510: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x368510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x368514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x368514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x368518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36851c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36851cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x368520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368524: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x368524u;
    SET_GPR_U32(ctx, 31, 0x36852Cu);
    ctx->pc = 0x368528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368524u;
    // 0x368528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x368524u, 0x36852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36852Cu;
label_36852c:
    // 0x36852c: 0x0  nop
    ctx->pc = 0x36852cu;
    // NOP
label_368530:
    // 0x368530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x368530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368534: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x368534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x368538: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x368538u;
    {
        const bool branch_taken_0x368538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368538u;
        // 0x36853c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368538) {
            ctx->pc = 0x3685A8u;
            goto label_3685a8;
        }
    }
    ctx->pc = 0x368540u;
label_368540:
    // 0x368540: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x368540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x368544: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368548: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x368548u;
    {
        const bool branch_taken_0x368548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368548) {
            ctx->pc = 0x3685A0u;
            goto label_3685a0;
        }
    }
    ctx->pc = 0x368550u;
    // 0x368550: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x368550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x368554: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x368554u;
    {
        const bool branch_taken_0x368554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368554u;
        // 0x368558: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368554) {
            ctx->pc = 0x368590u;
            goto label_368590;
        }
    }
    ctx->pc = 0x36855Cu;
    // 0x36855c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36855cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x368560: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x368560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x368564: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x368564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x368568: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x368568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36856c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36856cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368570: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x368570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x368574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x368574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x368578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36857c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36857cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368580: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x368580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368584: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x368584u;
    SET_GPR_U32(ctx, 31, 0x36858Cu);
    ctx->pc = 0x368588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368584u;
    // 0x368588: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x368584u, 0x36858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36858Cu;
label_36858c:
    // 0x36858c: 0x0  nop
    ctx->pc = 0x36858cu;
    // NOP
label_368590:
    // 0x368590: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x368590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x368594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368598u;
    {
        const bool branch_taken_0x368598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368598u;
        // 0x36859c: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368598) {
            ctx->pc = 0x3685A8u;
            goto label_3685a8;
        }
    }
    ctx->pc = 0x3685A0u;
label_3685a0:
    // 0x3685a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3685a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685a4: 0x0  nop
    ctx->pc = 0x3685a4u;
    // NOP
label_3685a8:
    // 0x3685a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3685a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3685ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3685acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3685b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3685b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3685b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3685b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3685b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3685b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3685bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3685BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3685C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685BCu;
        // 0x3685c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3685BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3685C4u;
}
