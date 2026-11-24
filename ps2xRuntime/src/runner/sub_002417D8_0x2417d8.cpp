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

// Function: sub_002417D8
// Address: 0x2417d8 - 0x2419c8
void sub_002417D8_0x2417d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002417D8_0x2417d8");
#endif

    switch (ctx->pc) {
        case 0x2417f8u: goto label_2417f8;
        default: break;
    }

    ctx->pc = 0x2417d8u;

    // 0x2417d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2417d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2417dc: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2417dcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2417e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2417e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2417e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2417e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2417ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2417ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2417f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2417f4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x2417f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2417f8:
    // 0x2417f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2417f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417fc: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2417fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241804: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241808: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241808u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24180c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241810: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241814: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241818: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24181c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24181cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241820: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241824: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241828: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24182c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241830: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241834: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241838: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24183c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24183cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241840: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241844: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241848: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24184c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24184cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241850: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241850u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241854: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241854u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241858: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24185c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24185cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241860: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241860u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241864: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241868: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24186c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241870: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241874: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241878: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241878u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24187c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24187cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241880: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241884: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x241884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x241888: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241888u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24188c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24188cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241890: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241894: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241898: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24189c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24189cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2418a0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x2418a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2418a4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2418a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2418ac: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x2418b0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2418b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2418b4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2418b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2418b8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2418bc: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2418c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2418c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2418c8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2418cc: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x2418ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2418d0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2418d4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2418d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2418d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2418dc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2418dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2418e0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2418e4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x2418e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2418e8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2418ec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2418ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2418f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2418f4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2418f8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x2418fc: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x2418fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241900: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241900u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241904: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241908: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24190c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241910: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241914: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241918: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241918u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24191c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24191cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241920: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241924: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241928: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x24192c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x24192cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241930: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241934: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241938: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24193c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x24193cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241940: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241944: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241948: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24194c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241950: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241954: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241958: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24195c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24195cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241960: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241964: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241968: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241968u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24196c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241970: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241974: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241978: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24197c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24197Cu;
    {
        const bool branch_taken_0x24197c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24197Cu;
        // 0x241980: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24197c) {
            ctx->pc = 0x241990u;
            goto label_241990;
        }
    }
    ctx->pc = 0x241984u;
    // 0x241984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241984u;
    {
        const bool branch_taken_0x241984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241984u;
        // 0x241988: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241984) {
            ctx->pc = 0x2419A4u;
            goto label_2419a4;
        }
    }
    ctx->pc = 0x24198Cu;
    // 0x24198c: 0x0  nop
    ctx->pc = 0x24198cu;
    // NOP
label_241990:
    // 0x241990: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x241990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x241994: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x241994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241998: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x241998u;
    {
        const bool branch_taken_0x241998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241998) {
            ctx->pc = 0x24199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241998u;
            // 0x24199c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419A4u;
            goto label_2419a4;
        }
    }
    ctx->pc = 0x2419A0u;
    // 0x2419a0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2419a4:
    // 0x2419a4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2419a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2419a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2419ac: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2419ACu;
    {
        const bool branch_taken_0x2419ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2419B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419ACu;
        // 0x2419b0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419ac) {
            ctx->pc = 0x2417F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2417f8;
        }
    }
    ctx->pc = 0x2419B4u;
    // 0x2419b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2419b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2419b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2419b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2419bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2419bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2419c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2419C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2419C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419C0u;
        // 0x2419c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419C8u;
}
