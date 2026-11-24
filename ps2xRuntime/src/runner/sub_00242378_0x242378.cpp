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

// Function: sub_00242378
// Address: 0x242378 - 0x242568
void sub_00242378_0x242378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242378_0x242378");
#endif

    switch (ctx->pc) {
        case 0x242398u: goto label_242398;
        default: break;
    }

    ctx->pc = 0x242378u;

    // 0x242378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24237c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24237cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242384: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24238c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242390: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242394: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_242398:
    // 0x242398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x242398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24239c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2423a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2423a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423a4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x2423a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2423a8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2423ac: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2423b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2423b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2423b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2423b8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2423bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2423bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2423c0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x2423c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x2423c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423c8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x2423c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2423cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2423ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2423d0: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x2423d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x2423d4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2423d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2423d8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2423d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2423dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2423dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2423e0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2423e8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x2423e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2423ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2423ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423f0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2423f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2423f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2423f8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2423f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2423fc: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2423fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x242400: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242404: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242408: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24240c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242410: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x242410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x242414: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242418: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24241c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242420: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242424: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x242424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x242428: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242428u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24242c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24242cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242430: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242434: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242438: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242438u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24243c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24243cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x242440: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x242440u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x242444: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x242444u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242448: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24244c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242450: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242450u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242454: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x242454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x242458: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24245c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x24245cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242460: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242464: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242468: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242468u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24246c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x242470: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x242474: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242478: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24247c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242480: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242484: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x242484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x242488: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x242488u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24248c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24248cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242490: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242494: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242498: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24249c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24249cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2424a0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2424a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2424a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2424a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2424a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2424ac: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2424acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2424b0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2424b4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2424b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2424b8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2424b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2424bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2424c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2424c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2424c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2424c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2424c8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x2424cc: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2424ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2424d0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2424d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2424d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2424d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2424dc: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x2424dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x2424e0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2424e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2424e4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2424e8: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x2424e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2424ec: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x2424f0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x2424f4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2424f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2424f8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x2424fc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2424fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242500: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x242500u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x242504: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x242504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x242508: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242508u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24250c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24250cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x242510: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242510u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x242514: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x242514u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x242518: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x242518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x24251c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24251Cu;
    {
        const bool branch_taken_0x24251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24251Cu;
        // 0x242520: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24251c) {
            ctx->pc = 0x242530u;
            goto label_242530;
        }
    }
    ctx->pc = 0x242524u;
    // 0x242524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242524u;
    {
        const bool branch_taken_0x242524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242524u;
        // 0x242528: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242524) {
            ctx->pc = 0x242544u;
            goto label_242544;
        }
    }
    ctx->pc = 0x24252Cu;
    // 0x24252c: 0x0  nop
    ctx->pc = 0x24252cu;
    // NOP
label_242530:
    // 0x242530: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x242534: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x242534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x242538: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x242538u;
    {
        const bool branch_taken_0x242538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242538) {
            ctx->pc = 0x24253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242538u;
            // 0x24253c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242544u;
            goto label_242544;
        }
    }
    ctx->pc = 0x242540u;
    // 0x242540: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_242544:
    // 0x242544: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x242544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x242548: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24254c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x24254Cu;
    {
        const bool branch_taken_0x24254c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24254Cu;
        // 0x242550: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24254c) {
            ctx->pc = 0x242398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242398;
        }
    }
    ctx->pc = 0x242554u;
    // 0x242554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24255c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24255cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242560: 0x3e00008  jr          $ra
    ctx->pc = 0x242560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242560u;
        // 0x242564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242568u;
}
