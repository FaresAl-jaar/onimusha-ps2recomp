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

// Function: sub_003604F0
// Address: 0x3604f0 - 0x36066c
void sub_003604F0_0x3604f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003604F0_0x3604f0");
#endif

    switch (ctx->pc) {
        case 0x360528u: goto label_360528;
        case 0x36064cu: goto label_36064c;
        default: break;
    }

    ctx->pc = 0x3604f0u;

    // 0x3604f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3604f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3604f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3604f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3604f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3604f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3604fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3604fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360500: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x360500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360508: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36050c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360510: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360514: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x360514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x360518: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x360518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36051c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x36051cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x360520: 0xc05e360  jal         func_178D80
    ctx->pc = 0x360520u;
    SET_GPR_U32(ctx, 31, 0x360528u);
    ctx->pc = 0x360524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360520u;
    // 0x360524: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x360520u, 0x360528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360528u;
label_360528:
    // 0x360528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36052c: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x36052Cu;
    {
        const bool branch_taken_0x36052c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36052c) {
            ctx->pc = 0x360650u;
            goto label_360650;
        }
    }
    ctx->pc = 0x360534u;
    // 0x360534: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x360534u;
    {
        const bool branch_taken_0x360534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x360534) {
            ctx->pc = 0x360554u;
            goto label_360554;
        }
    }
    ctx->pc = 0x36053Cu;
    // 0x36053c: 0x92431fb6  lbu         $v1, 0x1FB6($s2)
    ctx->pc = 0x36053cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8118)));
    // 0x360540: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x360540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x360544: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x360544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x360548: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x360548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x36054c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36054Cu;
    {
        const bool branch_taken_0x36054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36054Cu;
        // 0x360550: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36054c) {
            ctx->pc = 0x360568u;
            goto label_360568;
        }
    }
    ctx->pc = 0x360554u;
label_360554:
    // 0x360554: 0x92431fb6  lbu         $v1, 0x1FB6($s2)
    ctx->pc = 0x360554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8118)));
    // 0x360558: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x360558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x36055c: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x36055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x360560: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x360560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x360564: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x360564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_360568:
    // 0x360568: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x360568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36056c: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x36056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x360570: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x360570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x360574: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x360574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x360578: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x360578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x36057c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x36057cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x360580: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x360580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x360584: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x360584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360588: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x360588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x36058c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36058cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x360590: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x360590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x360594: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x360594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x360598: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x360598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x36059c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x36059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3605a0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3605a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3605a4: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x3605a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x3605a8: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x3605a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3605ac: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x3605acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3605b0: 0x86491fb0  lh          $t1, 0x1FB0($s2)
    ctx->pc = 0x3605b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8112)));
    // 0x3605b4: 0x86471fb2  lh          $a3, 0x1FB2($s2)
    ctx->pc = 0x3605b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8114)));
    // 0x3605b8: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x3605b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3605bc: 0x72073818  mult1       $a3, $s0, $a3
    ctx->pc = 0x3605bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3605c0: 0x24e70f20  addiu       $a3, $a3, 0xF20
    ctx->pc = 0x3605c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3872));
    // 0x3605c4: 0x73cc0  sll         $a3, $a3, 19
    ctx->pc = 0x3605c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x3605c8: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x3605c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x3605cc: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3605ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3605d0: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x3605d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3605d4: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x3605d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x3605d8: 0xaca70020  sw          $a3, 0x20($a1)
    ctx->pc = 0x3605d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 7));
    // 0x3605dc: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x3605dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x3605e0: 0x86491fb0  lh          $t1, 0x1FB0($s2)
    ctx->pc = 0x3605e0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8112)));
    // 0x3605e4: 0x86471fb2  lh          $a3, 0x1FB2($s2)
    ctx->pc = 0x3605e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8114)));
    // 0x3605e8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3605e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3605ec: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x3605ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x3605f0: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x3605f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x3605f4: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x3605f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x3605f8: 0x86491fb0  lh          $t1, 0x1FB0($s2)
    ctx->pc = 0x3605f8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8112)));
    // 0x3605fc: 0x86471fb2  lh          $a3, 0x1FB2($s2)
    ctx->pc = 0x3605fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8114)));
    // 0x360600: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x360600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x360604: 0x72073818  mult1       $a3, $s0, $a3
    ctx->pc = 0x360604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x360608: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x360608u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x36060c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x36060cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x360610: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x360610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x360614: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x360614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x360618: 0x86491fb0  lh          $t1, 0x1FB0($s2)
    ctx->pc = 0x360618u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8112)));
    // 0x36061c: 0x86471fb2  lh          $a3, 0x1FB2($s2)
    ctx->pc = 0x36061cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8114)));
    // 0x360620: 0x1494818  mult        $t1, $t2, $t1
    ctx->pc = 0x360620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x360624: 0x71073818  mult1       $a3, $t0, $a3
    ctx->pc = 0x360624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x360628: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x360628u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x36062c: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x36062cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x360630: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x360630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x360634: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x360634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x360638: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x360638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36063c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x36063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x360640: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x360640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x360644: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x360644u;
    SET_GPR_U32(ctx, 31, 0x36064Cu);
    ctx->pc = 0x360648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360644u;
    // 0x360648: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x360644u, 0x36064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36064Cu;
label_36064c:
    // 0x36064c: 0x0  nop
    ctx->pc = 0x36064cu;
    // NOP
label_360650:
    // 0x360650: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x360650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36065c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36065cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360664: 0x3e00008  jr          $ra
    ctx->pc = 0x360664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360664u;
        // 0x360668: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36066Cu;
}
