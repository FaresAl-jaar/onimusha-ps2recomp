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

// Function: sub_001747E0
// Address: 0x1747e0 - 0x1749b0
void sub_001747E0_0x1747e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001747E0_0x1747e0");
#endif

    switch (ctx->pc) {
        case 0x174810u: goto label_174810;
        case 0x174908u: goto label_174908;
        default: break;
    }

    ctx->pc = 0x1747e0u;

    // 0x1747e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1747e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1747e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1747e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1747e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1747ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1747ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1747f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1747f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1747f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1747f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1747f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1747fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174800: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x174804: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x174808: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x174808u;
    {
        const bool branch_taken_0x174808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174808u;
        // 0x17480c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174808) {
            ctx->pc = 0x174980u;
            goto label_174980;
        }
    }
    ctx->pc = 0x174810u;
label_174810:
    // 0x174810: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x174810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174814: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174818: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17481c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174824: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174828: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17482c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x17482cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x174830: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x174830u;
    {
        const bool branch_taken_0x174830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x174834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174830u;
        // 0x174834: 0x24a80008  addiu       $t0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174830) {
            ctx->pc = 0x1748C8u;
            goto label_1748c8;
        }
    }
    ctx->pc = 0x174838u;
    // 0x174838: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17483c: 0x1047001a  beq         $v0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x17483Cu;
    {
        const bool branch_taken_0x17483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x17483c) {
            ctx->pc = 0x1748A8u;
            goto label_1748a8;
        }
    }
    ctx->pc = 0x174844u;
    // 0x174844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174844u;
    {
        const bool branch_taken_0x174844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174844) {
            ctx->pc = 0x174858u;
            goto label_174858;
        }
    }
    ctx->pc = 0x17484Cu;
    // 0x17484c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17484Cu;
    {
        const bool branch_taken_0x17484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17484c) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x174854u;
    // 0x174854: 0x0  nop
    ctx->pc = 0x174854u;
    // NOP
label_174858:
    // 0x174858: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x174858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x17485c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x17485cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x174860: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x174860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x174864: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174868: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x174868u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17486c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17486Cu;
    {
        const bool branch_taken_0x17486c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17486c) {
            ctx->pc = 0x174880u;
            goto label_174880;
        }
    }
    ctx->pc = 0x174874u;
    // 0x174874: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174874u;
    {
        const bool branch_taken_0x174874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174874u;
        // 0x174878: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174874) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x17487Cu;
    // 0x17487c: 0x0  nop
    ctx->pc = 0x17487cu;
    // NOP
label_174880:
    // 0x174880: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174880u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x174884: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x174884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x174888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174888u;
    {
        const bool branch_taken_0x174888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174888) {
            ctx->pc = 0x174898u;
            goto label_174898;
        }
    }
    ctx->pc = 0x174890u;
    // 0x174890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174890u;
    {
        const bool branch_taken_0x174890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174890) {
            ctx->pc = 0x1748A0u;
            goto label_1748a0;
        }
    }
    ctx->pc = 0x174898u;
label_174898:
    // 0x174898: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17489c: 0x0  nop
    ctx->pc = 0x17489cu;
    // NOP
label_1748a0:
    // 0x1748a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1748A0u;
    {
        const bool branch_taken_0x1748a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748A0u;
        // 0x1748a4: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748a0) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x1748A8u;
label_1748a8:
    // 0x1748a8: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x1748a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1748ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1748b0: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x1748b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1748b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1748b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1748B8u;
    {
        const bool branch_taken_0x1748b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1748b8) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x1748C0u;
    // 0x1748c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1748C0u;
    {
        const bool branch_taken_0x1748c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748C0u;
        // 0x1748c4: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748c0) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x1748C8u;
label_1748c8:
    // 0x1748c8: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x1748c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1748cc: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x1748ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1748d0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1748d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1748d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1748D4u;
    {
        const bool branch_taken_0x1748d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1748d4) {
            ctx->pc = 0x1748E8u;
            goto label_1748e8;
        }
    }
    ctx->pc = 0x1748DCu;
    // 0x1748dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1748DCu;
    {
        const bool branch_taken_0x1748dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748DCu;
        // 0x1748e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748dc) {
            ctx->pc = 0x1748F8u;
            goto label_1748f8;
        }
    }
    ctx->pc = 0x1748E4u;
    // 0x1748e4: 0x0  nop
    ctx->pc = 0x1748e4u;
    // NOP
label_1748e8:
    // 0x1748e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1748e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1748ec: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x1748ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_1748f0:
    // 0x1748f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1748f4: 0x0  nop
    ctx->pc = 0x1748f4u;
    // NOP
label_1748f8:
    // 0x1748f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1748F8u;
    {
        const bool branch_taken_0x1748f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1748FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748F8u;
        // 0x1748fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748f8) {
            ctx->pc = 0x174918u;
            goto label_174918;
        }
    }
    ctx->pc = 0x174900u;
    // 0x174900: 0xc05d390  jal         func_174E40
    ctx->pc = 0x174900u;
    SET_GPR_U32(ctx, 31, 0x174908u);
    ctx->pc = 0x174E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E40u, 0x174900u, 0x174908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174908u;
label_174908:
    // 0x174908: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17490c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17490Cu;
    {
        const bool branch_taken_0x17490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17490Cu;
        // 0x174910: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17490c) {
            ctx->pc = 0x174980u;
            goto label_174980;
        }
    }
    ctx->pc = 0x174914u;
    // 0x174914: 0x0  nop
    ctx->pc = 0x174914u;
    // NOP
label_174918:
    // 0x174918: 0x24a80040  addiu       $t0, $a1, 0x40
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x17491c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x17491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x174920: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x174920u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174928: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x174928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x17492c: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x174930: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174934: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174938: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x174938u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x17493c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174940: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x174940u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x174944: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x174944u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x174948: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17494c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x17494cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174950: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174954: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x174954u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174958: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17495c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x17495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174960: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174964: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x174964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174968: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17496c: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x17496cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174970: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174974: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174978: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17497c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17497cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_174980:
    // 0x174980: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x174980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17498c: 0x1462ffa0  bne         $v1, $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x17498Cu;
    {
        const bool branch_taken_0x17498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17498Cu;
        // 0x174990: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17498c) {
            ctx->pc = 0x174810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174810;
        }
    }
    ctx->pc = 0x174994u;
    // 0x174994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17499c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17499cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1749a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1749a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1749a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1749a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1749a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1749A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1749ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749A8u;
        // 0x1749ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1749A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1749B0u;
}
