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

// Function: sub_002415E8
// Address: 0x2415e8 - 0x2417d8
void sub_002415E8_0x2415e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002415E8_0x2415e8");
#endif

    switch (ctx->pc) {
        case 0x241608u: goto label_241608;
        default: break;
    }

    ctx->pc = 0x2415e8u;

    // 0x2415e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2415e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2415ec: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2415ecu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2415f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2415f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2415f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2415f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2415fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2415fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241600: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241604: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241608:
    // 0x241608: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24160c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241610: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241614: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241618: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241618u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24161c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241620: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241624: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241628: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24162c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24162cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241630: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241634: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241638: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241638u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24163c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24163cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241640: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241644: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241648: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241648u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24164c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24164cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241650: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241654: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241658: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24165c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241660: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241660u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241664: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241668: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24166c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24166cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241670: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241670u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241674: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241674u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241678: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24167c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241680: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241684: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241688: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24168c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24168cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241690: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241694: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x241694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x241698: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241698u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24169c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24169cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2416a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2416a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2416a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2416a8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2416a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2416ac: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x2416acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2416b0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x2416b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2416b4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x2416b4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2416b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2416bc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2416bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2416c0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2416c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2416c4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2416c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2416c8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2416c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2416cc: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x2416ccu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2416d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2416d4: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x2416d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x2416d8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2416dc: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x2416dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2416e0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2416e4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x2416e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2416e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2416e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2416ec: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2416ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2416f0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2416f4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x2416f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2416f8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x2416f8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2416fc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2416fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241700: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241704: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241708: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241708u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24170c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24170cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241710: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241710u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241714: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24171c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241720: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241720u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241724: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241728: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241728u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24172c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24172cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241730: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241734: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241738: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x24173c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x24173cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241740: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241744: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241744u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241748: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24174c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241750: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241754: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241758: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241758u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24175c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241760: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241764: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241768: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241768u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24176c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24176cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241770: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241770u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241774: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241778: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241778u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24177c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241780: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241780u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241784: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241788: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24178c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24178Cu;
    {
        const bool branch_taken_0x24178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24178Cu;
        // 0x241790: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24178c) {
            ctx->pc = 0x2417A0u;
            goto label_2417a0;
        }
    }
    ctx->pc = 0x241794u;
    // 0x241794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241794u;
    {
        const bool branch_taken_0x241794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241794u;
        // 0x241798: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241794) {
            ctx->pc = 0x2417B4u;
            goto label_2417b4;
        }
    }
    ctx->pc = 0x24179Cu;
    // 0x24179c: 0x0  nop
    ctx->pc = 0x24179cu;
    // NOP
label_2417a0:
    // 0x2417a0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x2417a4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x2417a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2417a8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2417A8u;
    {
        const bool branch_taken_0x2417a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417a8) {
            ctx->pc = 0x2417ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417A8u;
            // 0x2417ac: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417B4u;
            goto label_2417b4;
        }
    }
    ctx->pc = 0x2417B0u;
    // 0x2417b0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2417b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2417b4:
    // 0x2417b4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2417b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2417b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2417b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2417bc: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2417BCu;
    {
        const bool branch_taken_0x2417bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2417C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417BCu;
        // 0x2417c0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417bc) {
            ctx->pc = 0x241608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241608;
        }
    }
    ctx->pc = 0x2417C4u;
    // 0x2417c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2417c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2417c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2417c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2417cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2417ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2417d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2417D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2417D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417D0u;
        // 0x2417d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2417D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2417D8u;
}
