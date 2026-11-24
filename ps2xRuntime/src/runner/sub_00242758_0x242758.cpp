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

// Function: sub_00242758
// Address: 0x242758 - 0x242948
void sub_00242758_0x242758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242758_0x242758");
#endif

    switch (ctx->pc) {
        case 0x242778u: goto label_242778;
        default: break;
    }

    ctx->pc = 0x242758u;

    // 0x242758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24275c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24275cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242764: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24276c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24276cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242774: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x242774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_242778:
    // 0x242778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x242778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24277c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24277cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242784: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x242784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x242788: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242788u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24278c: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x24278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x242790: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242794: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242798: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x242798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24279c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24279cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2427a0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x2427a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x2427a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2427a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2427a8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x2427a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2427ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2427acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2427b0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2427b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2427b4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2427b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2427b8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2427b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2427bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2427bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2427c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2427c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2427c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2427c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2427c8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x2427c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2427cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2427ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2427d0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x2427d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2427d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2427d8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2427d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2427dc: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2427dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2427e0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2427e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2427e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2427e8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2427ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2427ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2427f0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2427f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2427f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2427f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2427f8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x2427f8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2427fc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2427fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242800: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242804: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x242804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x242808: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x242808u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x24280c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x24280cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242810: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242814: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242818: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242818u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24281c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x24281cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x242820: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x242824: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242828: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24282c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242830: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242830u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242834: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x242834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x242838: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24283c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x24283cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242840: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242844: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242848: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24284c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x24284cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x242850: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x242850u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x242854: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x242854u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242858: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24285c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242860: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242864: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x242864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x242868: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x242868u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24286c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242870: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242874: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x242874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x242878: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x242878u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24287c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24287cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x242880: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x242884: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x242888: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24288c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x242890: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x242890u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x242894: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x242894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x242898: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x242898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24289c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24289cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2428a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2428a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2428a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2428a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2428a8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x2428a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x2428ac: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2428acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2428b0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x2428b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2428b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2428b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2428bc: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x2428bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x2428c0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2428c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2428c4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x2428c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2428c8: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x2428c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2428cc: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x2428ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x2428d0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x2428d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x2428d4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2428d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2428d8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x2428dc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2428dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2428e0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x2428e4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2428e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2428e8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x2428e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x2428ec: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2428ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2428f0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2428f4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x2428f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2428f8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x2428f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x2428fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2428FCu;
    {
        const bool branch_taken_0x2428fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428FCu;
        // 0x242900: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428fc) {
            ctx->pc = 0x242910u;
            goto label_242910;
        }
    }
    ctx->pc = 0x242904u;
    // 0x242904: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242904u;
    {
        const bool branch_taken_0x242904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242904u;
        // 0x242908: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242904) {
            ctx->pc = 0x242924u;
            goto label_242924;
        }
    }
    ctx->pc = 0x24290Cu;
    // 0x24290c: 0x0  nop
    ctx->pc = 0x24290cu;
    // NOP
label_242910:
    // 0x242910: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x242910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x242914: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x242914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x242918: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x242918u;
    {
        const bool branch_taken_0x242918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242918) {
            ctx->pc = 0x24291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242918u;
            // 0x24291c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242924u;
            goto label_242924;
        }
    }
    ctx->pc = 0x242920u;
    // 0x242920: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_242924:
    // 0x242924: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x242924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x242928: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x242928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24292c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x24292Cu;
    {
        const bool branch_taken_0x24292c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24292Cu;
        // 0x242930: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24292c) {
            ctx->pc = 0x242778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242778;
        }
    }
    ctx->pc = 0x242934u;
    // 0x242934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24293c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242940: 0x3e00008  jr          $ra
    ctx->pc = 0x242940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242940u;
        // 0x242944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242948u;
}
