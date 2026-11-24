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

// Function: sub_00217408
// Address: 0x217408 - 0x217500
void sub_00217408_0x217408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217408_0x217408");
#endif

    ctx->pc = 0x217408u;

    // 0x217408: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x217408u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21740c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217410: 0x85a3001c  lh          $v1, 0x1C($t5)
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x217414: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217418: 0x85a2001e  lh          $v0, 0x1E($t5)
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x21741c: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217420: 0x8da70018  lw          $a3, 0x18($t5)
    ctx->pc = 0x217420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x217424: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x217424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217428: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x217428u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21742c: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x21742cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x217430: 0x8da40014  lw          $a0, 0x14($t5)
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x217434: 0xe17c2  srl         $v0, $t6, 31
    ctx->pc = 0x217434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x217438: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x21743c: 0xf3080  sll         $a2, $t7, 2
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x217440: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x217444: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x217444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x217448: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x217448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21744c: 0x8c638a18  lw          $v1, -0x75E8($v1)
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937112)));
    // 0x217450: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x217450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x217454: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x217454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x217458: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21745c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x217460: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x217460u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x217464: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x217468: 0x8da6000c  lw          $a2, 0xC($t5)
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x21746c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21746c) {
            ctx->pc = 0x217470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21746Cu;
            // 0x217470: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217474u;
            goto label_217474;
        }
    }
    ctx->pc = 0x217474u;
label_217474:
    // 0x217474: 0x8daa0008  lw          $t2, 0x8($t5)
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x217478: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x21747c: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x21747cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x217480: 0x3812  mflo        $a3
    ctx->pc = 0x217480u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x217484: 0x4810  mfhi        $t1
    ctx->pc = 0x217484u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x217488: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21748c: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x21748cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x217490: 0x2012  mflo        $a0
    ctx->pc = 0x217490u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x217494: 0x3810  mfhi        $a3
    ctx->pc = 0x217494u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x217498: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x217498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21749c: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x21749cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2174a0: 0x3012  mflo        $a2
    ctx->pc = 0x2174a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2174a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2174a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2174a8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2174A8u;
    {
        const bool branch_taken_0x2174a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174A8u;
        // 0x2174ac: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174a8) {
            ctx->pc = 0x2174DCu;
            goto label_2174dc;
        }
    }
    ctx->pc = 0x2174B0u;
    // 0x2174b0: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2174B0u;
    {
        const bool branch_taken_0x2174b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2174b0) {
            ctx->pc = 0x2174B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2174B0u;
            // 0x2174b4: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2174E0u;
            goto label_2174e0;
        }
    }
    ctx->pc = 0x2174B8u;
    // 0x2174b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2174b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2174bc: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2174bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2174c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2174C0u;
    {
        const bool branch_taken_0x2174c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2174c0) {
            ctx->pc = 0x2174C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2174C0u;
            // 0x2174c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2174C8u;
            goto label_2174c8;
        }
    }
    ctx->pc = 0x2174C8u;
label_2174c8:
    // 0x2174c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2174c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2174cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2174CCu;
    {
        const bool branch_taken_0x2174cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174CCu;
        // 0x2174d0: 0x2d230002  sltiu       $v1, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174cc) {
            ctx->pc = 0x2174DCu;
            goto label_2174dc;
        }
    }
    ctx->pc = 0x2174D4u;
    // 0x2174d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2174d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2174d8: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x2174d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_2174dc:
    // 0x2174dc: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x2174dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_2174e0:
    // 0x2174e0: 0xa4ae001e  sh          $t6, 0x1E($a1)
    ctx->pc = 0x2174e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 14));
    // 0x2174e4: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2174e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2174e8: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x2174e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x2174ec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2174ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2174f0: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2174f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2174f4: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x2174f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x2174f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2174F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F8u;
        // 0x2174fc: 0xaca90014  sw          $t1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217500u;
}
