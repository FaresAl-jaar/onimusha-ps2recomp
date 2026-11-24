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

// Function: sub_00242568
// Address: 0x242568 - 0x242758
void sub_00242568_0x242568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242568_0x242568");
#endif

    switch (ctx->pc) {
        case 0x242588u: goto label_242588;
        default: break;
    }

    ctx->pc = 0x242568u;

    // 0x242568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24256c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24256cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242574: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24257c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24257cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242584: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_242588:
    // 0x242588: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x242588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24258c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242590: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242594: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x242598: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242598u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24259c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2425a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2425a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425a4: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x2425a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x2425a8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2425a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2425ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2425acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2425b0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x2425b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x2425b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2425b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425b8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x2425b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2425bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2425c0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2425c4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2425c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2425c8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2425c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2425cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2425ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2425d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2425d8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x2425d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2425dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2425dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425e0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2425e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2425e8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2425ec: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2425ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2425f0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2425f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2425f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2425f8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2425f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2425fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242600: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x242600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x242604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242608: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x242608u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24260c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24260cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242610: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242614: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x242614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x242618: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242618u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24261c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24261cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242620: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242624: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242628: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242628u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24262c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24262cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x242630: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x242634: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x242634u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242638: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24263c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242640: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242640u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242644: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x242644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x242648: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24264c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x24264cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242650: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242654: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242658: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242658u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24265c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24265cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x242660: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x242664: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x242664u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242668: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24266c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242670: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242670u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242674: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x242674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x242678: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24267c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24267cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242680: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242684: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242688: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x242688u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24268c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24268cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x242690: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242694: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242698: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24269c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2426a0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2426a4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2426a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2426a8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2426ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2426acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2426b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2426b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2426b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2426b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2426b8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x2426bc: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2426bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2426c0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2426c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2426c4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2426c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2426c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2426c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2426cc: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x2426ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x2426d0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2426d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2426d4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2426d8: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x2426d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2426dc: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x2426dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x2426e0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x2426e4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2426e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2426e8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x2426ec: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2426ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2426f0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x2426f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x2426f4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2426f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2426f8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2426fc: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x242700: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242700u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x242704: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x242704u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x242708: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x242708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24270c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24270Cu;
    {
        const bool branch_taken_0x24270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24270Cu;
        // 0x242710: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24270c) {
            ctx->pc = 0x242720u;
            goto label_242720;
        }
    }
    ctx->pc = 0x242714u;
    // 0x242714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242714u;
    {
        const bool branch_taken_0x242714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242714u;
        // 0x242718: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242714) {
            ctx->pc = 0x242734u;
            goto label_242734;
        }
    }
    ctx->pc = 0x24271Cu;
    // 0x24271c: 0x0  nop
    ctx->pc = 0x24271cu;
    // NOP
label_242720:
    // 0x242720: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x242720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x242724: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x242724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x242728: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x242728u;
    {
        const bool branch_taken_0x242728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242728) {
            ctx->pc = 0x24272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242728u;
            // 0x24272c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242734u;
            goto label_242734;
        }
    }
    ctx->pc = 0x242730u;
    // 0x242730: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x242730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_242734:
    // 0x242734: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x242734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x242738: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24273c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x24273Cu;
    {
        const bool branch_taken_0x24273c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24273Cu;
        // 0x242740: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24273c) {
            ctx->pc = 0x242588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242588;
        }
    }
    ctx->pc = 0x242744u;
    // 0x242744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24274c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24274cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242750: 0x3e00008  jr          $ra
    ctx->pc = 0x242750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242750u;
        // 0x242754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242758u;
}
